  #include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QDateTime>
#include <QThread>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->gridLayout);
    serialPort = new QSerialPort(this);

    timer = new QTimer(this);//创建定时器 用于自动发送功能
    // buttonConTimer = new QTimer(this);//用于循环发送功能
    // connect(buttonConTimer,&QTimer::timeout,this,&Widget::buttons_handler);
    circularSendThread = new myThread(this);//用于循环发送的线程
    connect(circularSendThread,&myThread::threadTimeout,this,&Widget::buttons_handler);

    QTimer* getSysTime = new QTimer(this);//用于刷新时间
    connect(getSysTime,SIGNAL(timeout()),this,SLOT(flushTime()));
    getSysTime->start(1000);
    buttonIndex = 0;
    sendCntTotoal = 0;
    readCntTotoal = 0;
    preSendData = "";
    serialCurrentState = 0;//初始化串口是关闭状态
    ui->btnSend->setEnabled(false);//发送按钮初始化为不可用
    ui->checkBoxTimelySend->setEnabled(false);//初始化定时发送功能为不可用f
    ui->checkBoxSendNewLine->setEnabled(false);
    ui->checkBoxHexSend->setEnabled(false);
    connect(serialPort,&QSerialPort::readyRead,this,&Widget::on_serialDataReady2Read);
    connect(timer,&QTimer::timeout,[=](){
        on_btnSend_clicked();
    });

    connect(ui->comboBoxCom,&myComboBox::refresh,this,&Widget::refreshSerialNum);
    ui->comboBoxBaud->setCurrentIndex(6);//初始设置115200波特率
    ui->comboBoxDataBit->setCurrentIndex(3);//初始设置8位数据位
    ui->comboBoxVerifyBit->setCurrentIndex(0);//初始设置无校验位
    ui->comboBoxStopBit->setCurrentIndex(0);//初始设置1位停止位
    ui->comboBoxFlowCtrl->setCurrentIndex(0);//初始设置无流控

    ui->labelSendState->setText(ui->comboBoxCom->itemText(0)+"isNotOpen");
    refreshSerialNum();

    for(int i=1;i<=5;i++){
        QString name = QString("btnSend_%1").arg(i);
        QPushButton* tempBtn = findChild<QPushButton*>(name);
        if(tempBtn){
            tempBtn->setProperty("buttonID",i);
            buttons.append(tempBtn);
            connect(tempBtn,SIGNAL(clicked()),this,SLOT(on_cmd_btn_clicked()));
        }

        QString checkName = QString("checkBox_%1").arg(i);
        QCheckBox* tempCheckBox = findChild<QCheckBox*>(checkName);
        if(tempCheckBox){
            checkBoxes.append(tempCheckBox);
        }

        QString lineEditName = QString("lineEdit_%1").arg(i);
        QLineEdit* tempLineEdit = findChild<QLineEdit*>(lineEditName);
        if(tempLineEdit){
            lineEdits.append(tempLineEdit);
        }
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnSerialSwitch_clicked()
{
    if(!serialCurrentState){
        serialCurrentState = 1;
        //选择端口、配置参数
        serialPort->setPortName(ui->comboBoxCom->currentText());
        serialPort->setBaudRate(ui->comboBoxBaud->currentText().toInt());
        serialPort->setDataBits(QSerialPort::DataBits(ui->comboBoxDataBit->currentText().toUInt()));
        switch (ui->comboBoxVerifyBit->currentIndex()) {
        case 0:
            serialPort->setParity(QSerialPort::NoParity);
            break;
        case 1:
            serialPort->setParity(QSerialPort::EvenParity);
            break;
        case 2:
            serialPort->setParity(QSerialPort::OddParity);
            break;
        case 3:
            serialPort->setParity(QSerialPort::MarkParity);
            break;
        case 4:
            serialPort->setParity(QSerialPort::SpaceParity);
            break;
        default:
            break;
        }
        switch (ui->comboBoxStopBit->currentIndex()) {
        case 0:
            serialPort->setStopBits(QSerialPort::OneStop);
            break;
        case 1:
            serialPort->setStopBits(QSerialPort::OneAndHalfStop);
            break;
        case 2:
            serialPort->setStopBits(QSerialPort::TwoStop);
            break;
        default:
            break;
        }
        if(ui->comboBoxFlowCtrl->currentText() == "None")
            serialPort->setFlowControl(QSerialPort::NoFlowControl);


        //打开串口
        if(serialPort->open(QIODeviceBase::ReadWrite)){
            // qDebug()<<"serial open success";
            ui->comboBoxBaud->setEnabled(false);
            ui->comboBoxCom->setEnabled(false);
            ui->comboBoxDataBit->setEnabled(false);
            ui->comboBoxVerifyBit->setEnabled(false);
            ui->comboBoxStopBit->setEnabled(false);
            ui->comboBoxFlowCtrl->setEnabled(false);
            ui->btnSerialSwitch->setText("关闭串口");
            ui->btnSend->setEnabled(true);
            ui->checkBoxTimelySend->setEnabled(true);
            ui->checkBoxSendNewLine->setEnabled(true);
            ui->checkBoxHexSend->setEnabled(true);
            ui->labelSendState->setText(ui->comboBoxCom->currentText()+"isOpen");
        }
        else{
            QMessageBox msgBox;
            msgBox.setWindowTitle("错误信息");
            msgBox.setText("打开失败！串口可能被占用或未连接");
            msgBox.exec();
        }
    }
    else{
        serialCurrentState = 0;
        serialPort->close();
        // qDebug()<<"serial close success";
        ui->comboBoxBaud->setEnabled(true);
        ui->comboBoxCom->setEnabled(true);
        ui->comboBoxDataBit->setEnabled(true);
        ui->comboBoxVerifyBit->setEnabled(true);
        ui->comboBoxStopBit->setEnabled(true);
        ui->comboBoxFlowCtrl->setEnabled(true);
        ui->btnSend->setEnabled(false);
        ui->checkBoxTimelySend->setEnabled(false);
        ui->checkBoxTimelySend->setCheckState(Qt::Unchecked);
        timer->stop();
        ui->lineEditSendInterval->setEnabled(true);
        ui->lineEditSendText->setEnabled(true);
        ui->checkBoxSendNewLine->setEnabled(false);
        ui->checkBoxSendNewLine->setCheckState(Qt::Unchecked);
        ui->checkBoxHexSend->setEnabled(false);
        ui->checkBoxHexSend->setCheckState(Qt::Unchecked);
        ui->btnSerialSwitch->setText("打开串口");
        ui->labelSendState->setText(ui->comboBoxCom->currentText()+"isNotOpen");

    }



}


void Widget::on_btnSend_clicked()
{
    if(serialCurrentState){
        int wrtCnt = 0;
        const char* sendData = ui->lineEditSendText->text().toStdString().c_str();
        if(ui->checkBoxHexSend->isChecked()){//如果是16进制发送
            //判断是否是偶数位，符合16进制的表达，然后转成16进制发送
            QString tmp = ui->lineEditSendText->text();
            QByteArray tmpArr = tmp.toLocal8Bit();
            if(tmpArr.size()%2 != 0){
                ui->labelSendState->setText("Error Input!!!");
                return;
            }else{
                for(char c:tmpArr){
                    if(!std::isxdigit(c)){
                        ui->labelSendState->setText("Error Input!!!");
                        return;
                    }
                }
                if(ui->checkBoxSendNewLine->isChecked())
                    tmpArr.append("\r\n");
                QByteArray arrSend = QByteArray::fromHex(tmpArr);
                wrtCnt = serialPort->write(arrSend);
            }

        }else{//如果不是16进制发送
            if(ui->checkBoxAutoNewLine->isChecked()){
                //如果勾选了自动换行
                QByteArray arrSendData(sendData,strlen(sendData));
                arrSendData.append("\r\n");
                wrtCnt = serialPort->write(arrSendData);
            }else{//如果没有勾选自动换行

                wrtCnt = serialPort->write(sendData);
            }
        }
        if(-1 == wrtCnt){
            ui->labelSendState->setText("send Error !");
        }
        else{
            sendCntTotoal += wrtCnt;
            // qDebug()<<"send OK: "<<sendData<<"cnt:"<<wrtCnt;
            ui->labelSendState->setText("Send OK !");
            ui->labelSendNum->setText("Sent: "+QString::number(sendCntTotoal));
            if(strcmp(sendData,preSendData.toStdString().c_str())){
                ui->textEditReccord->append(sendData);
            }
            preSendData = sendData;
        }
    }

}
void Widget::on_serialDataReady2Read()
{
    QString str = serialPort->readAll();
    // qDebug()<<"recCnt:"<<str.size()<<"text:"<<str;
    if(str.size() != 0){
        str += "\r\n";
        if(ui->checkBoxHexShow->isChecked()){//若勾选Hex显示
            QByteArray tmpHexString = str.toUtf8().toHex().toUpper();
            QString old = ui->textEditRec->toPlainText();//原来控件上的旧内容  先读出来
            tmpHexString = old.toUtf8() + tmpHexString;//将旧的和新的拼接起来一起形成hex内容来显示
            ui->textEditRec->setText(QString::fromUtf8(tmpHexString));
        }else{//若不勾选Hex显示

            if(ui->checkBoxRecTime->checkState()){

                ui->textEditRec->insertPlainText('['+myTime+"]  "+str);
            }else{
                ui->textEditRec->insertPlainText(str);//不会自动换行
            }
            readCntTotoal += str.size();
            ui->labelRecNum->setText("Received: "+QString::number(readCntTotoal));
            ui->textEditRec->moveCursor(QTextCursor::End);
            ui->textEditRec->ensureCursorVisible();
            // ui->textEditRec->setFocus();
        }

    }

}


void Widget::on_checkBoxTimelySend_clicked(bool checked)
{
    if(checked){
        ui->lineEditSendInterval->setEnabled(false);
        ui->lineEditSendText->setEnabled(false);
        timer->start(ui->lineEditSendInterval->text().toUInt());
    }
    else{
        ui->lineEditSendInterval->setEnabled(true);
        ui->lineEditSendText->setEnabled(true);
        timer->stop();
    }
}


void Widget::on_btnClearRec_clicked()
{
    ui->textEditRec->clear();
}


void Widget::on_btnSaveRec_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"),
                                                    "D:/Qt_projects/serialData.txt",
                                                    tr("Text (*.txt)"));
    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){
            return;
        }
        QTextStream out(&file);
        out<<ui->textEditRec->toPlainText();
        file.close();
    }

}

void Widget::flushTime()
{
    getSysTime();
}

void Widget::getSysTime()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QDate date = currentTime.date();
    int year = date.year();
    int month =date.month();
    int day = date.day();

    QTime time = currentTime.time();
    int hour = time.hour();
    int minute = time.minute();
    int second = time.second();

    myTime = QString("%1-%2-%3  %4:%5:%6")
                 .arg(year,2,10,QChar('0'))
                 .arg(month,2,10,QChar('0'))
                 .arg(day,2,10,QChar('0'))
                 .arg(hour,2,10,QChar('0'))
                 .arg(minute,2,10,QChar('0'))
                 .arg(second,2,10,QChar('0'));
    ui->labelDate->setText(myTime);
}


void Widget::on_checkBoxHexShow_clicked(bool checked)
{
    if(checked){
        QString rawData = ui->textEditRec->toPlainText();
        QByteArray byteArr = rawData.toUtf8();
        byteArr = byteArr.toHex();
        QString lastShow;
        rawData = QString::fromUtf8(byteArr);
        for(int i=0;i<rawData.size();i+=2){
            lastShow += rawData.mid(i,2)+" ";
        }
        ui->textEditRec->setText(lastShow.toUpper());
    }
    else{
        QString rawData = ui->textEditRec->toPlainText();
        QByteArray byteArr = rawData.toUtf8();
        byteArr = QByteArray::fromHex(byteArr);
        ui->textEditRec->setText(QString::fromUtf8(byteArr));
    }
    ui->textEditRec->moveCursor(QTextCursor::End);
    ui->textEditRec->ensureCursorVisible();
}


void Widget::on_btnHideTable_clicked(bool checked)
{
    if(checked){
        ui->btnHideTable->setText("拓展面板");
        ui->groupBoxTex->hide();
    }else{
        ui->btnHideTable->setText("隐藏面板");
        ui->groupBoxTex->show();

    }
}


void Widget::on_btnHideHistory_clicked(bool checked)
{
    if(checked){
        ui->groupBoxRecord->hide();
        ui->btnHideHistory->setText("显示历史");
    }else{
        ui->groupBoxRecord->show();
        ui->btnHideHistory->setText("隐藏历史");
    }
}






void Widget::on_comboBoxCom_activated(int index)
{

}

void Widget::refreshSerialNum()
{
    ui->comboBoxCom->clear();
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();//读取可用com口并显示
    for(QSerialPortInfo info:serialList)
    {
        // qDebug()<<info.portName();
        ui->comboBoxCom->addItem(info.portName());
    }
    ui->labelSendState->setText("Serial refreshed!");

}


void Widget::on_cmd_btn_clicked()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if(btn){

        int num = btn->property("buttonID").toInt();

        QString lineEditName = QString("lineEdit_%1").arg(num);
        QLineEdit* lineEdit = findChild<QLineEdit*>(lineEditName);
        if(lineEdit){
            if(lineEdit->text().size() > 0){

                ui->lineEditSendText->setText(lineEdit->text());
            }else{
                return;
            }
        }

        QString checkBoxName = QString("checkBox_%1").arg(num);
        QCheckBox* checkBox = findChild<QCheckBox*>(checkBoxName);
        if(checkBox){

            ui->checkBoxHexSend->setChecked(checkBox->isChecked());
        }
        on_btnSend_clicked();
    }

}

void Widget::buttons_handler(){
    if(buttonIndex < buttons.size()){
        QPushButton* btn = buttons[buttonIndex];
        if(btn){
            // qDebug()<<"取出btn成功";
            emit btn->clicked();
            buttonIndex++;
        }
    }else{
        buttonIndex = 0;
    }

}
void Widget::on_checkBoxCircularSend_clicked(bool checked)
{
    // qDebug()<<"循环发送按钮："<<ui->checkBoxCircularSend->checkState();
    if(checked){
        ui->spinBox->setEnabled(false);
        circularSendThread->start();
        // buttonConTimer->start(ui->spinBox->text().toUInt());
    }else{
        ui->spinBox->setEnabled(true);
        circularSendThread->terminate();
        // buttonConTimer->stop();
    }
}


void Widget::on_btnReset_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("提示");
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setText("重置列表不可逆,确认是否重置?");
    // msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    QPushButton* yes = msgBox.addButton("是",QMessageBox::YesRole);
    QPushButton* no = msgBox.addButton("否",QMessageBox::NoRole);
    msgBox.exec();
    if(msgBox.clickedButton() == yes){
        //遍历lineEdit，全部清空
        for(int i=0;i<lineEdits.size();i++){
            lineEdits[i]->clear();
            checkBoxes[i]->setChecked(false);
        }



    }
    else if(msgBox.clickedButton() == no){

    }

}


void Widget::on_btnSave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("保存文件"),
                            "D:/",
                            tr("文本类型 (*.txt)"));
    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream out(&file);
        for(int i=0;i<lineEdits.size();i++){
            out<<checkBoxes[i]->isChecked()<<","<<lineEdits[i]->text()<<"\n";
        }
        file.close();
    }

}


void Widget::on_btnLoad_clicked()
{
    int i = 0;
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"),
                                                    "D:/",
                                                    tr("文本类型 (*.txt)"));
    if(fileName != ""){
        QFile file(fileName);
        if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
            QTextStream in(&file);
            while(!in.atEnd() && i<5){
                QString line = in.readLine();
                QStringList strList = line.split(',');
                if(strList.count() == 2){
                    checkBoxes[i]->setChecked(strList[0].toInt());
                    lineEdits[i]->setText(strList[1]);
                }
                i++;

            }
        }

    }

}

