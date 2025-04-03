/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxDown;
    QGroupBox *groupBoxParam;
    QFormLayout *formLayout_4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout;
    myComboBox *comboBoxCom;
    QComboBox *comboBoxBaud;
    QComboBox *comboBoxDataBit;
    QComboBox *comboBoxVerifyBit;
    QComboBox *comboBoxStopBit;
    QComboBox *comboBoxFlowCtrl;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnSerialSwitch;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnClearRec;
    QPushButton *btnSaveRec;
    QCheckBox *checkBoxRecTime;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBoxHexShow;
    QCheckBox *checkBoxAutoNewLine;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnHideTable;
    QPushButton *btnHideHistory;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkBoxTimelySend;
    QLineEdit *lineEditSendInterval;
    QLabel *label_14;
    QCheckBox *checkBoxSendNewLine;
    QCheckBox *checkBoxHexSend;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btnSend;
    QLineEdit *lineEditSendText;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *labelSendState;
    QLabel *labelRecNum;
    QLabel *labelSendNum;
    QLabel *labelDate;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayoutUp;
    QGroupBox *groupBoxRec;
    QFormLayout *formLayout;
    QTextEdit *textEditRec;
    QGroupBox *groupBoxRecord;
    QFormLayout *formLayout_2;
    QTextEdit *textEditReccord;
    QGroupBox *groupBoxTex;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBoxCircularSend;
    QSpinBox *spinBox;
    QLabel *label_4;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QPushButton *btnReset;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayoutText;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *checkBox_1;
    QLineEdit *lineEdit_1;
    QPushButton *btnSend_1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *btnSend_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_3;
    QPushButton *btnSend_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_4;
    QPushButton *btnSend_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_5;
    QPushButton *btnSend_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(886, 757);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/jxj/Desktop/jxj1.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Widget->setWindowIcon(icon);
        groupBoxDown = new QGroupBox(Widget);
        groupBoxDown->setObjectName("groupBoxDown");
        groupBoxDown->setGeometry(QRect(10, 470, 871, 261));
        groupBoxParam = new QGroupBox(groupBoxDown);
        groupBoxParam->setObjectName("groupBoxParam");
        groupBoxParam->setGeometry(QRect(20, 20, 193, 238));
        formLayout_4 = new QFormLayout(groupBoxParam);
        formLayout_4->setObjectName("formLayout_4");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_6 = new QLabel(groupBoxParam);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        label_9 = new QLabel(groupBoxParam);
        label_9->setObjectName("label_9");

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(groupBoxParam);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(groupBoxParam);
        label_11->setObjectName("label_11");

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(groupBoxParam);
        label_12->setObjectName("label_12");

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(groupBoxParam);
        label_13->setObjectName("label_13");

        verticalLayout_3->addWidget(label_13);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        comboBoxCom = new myComboBox(groupBoxParam);
        comboBoxCom->setObjectName("comboBoxCom");
        comboBoxCom->setMinimumSize(QSize(100, 0));
        comboBoxCom->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboBoxCom);

        comboBoxBaud = new QComboBox(groupBoxParam);
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->addItem(QString());
        comboBoxBaud->setObjectName("comboBoxBaud");
        comboBoxBaud->setMinimumSize(QSize(100, 0));
        comboBoxBaud->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboBoxBaud);

        comboBoxDataBit = new QComboBox(groupBoxParam);
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->addItem(QString());
        comboBoxDataBit->setObjectName("comboBoxDataBit");
        comboBoxDataBit->setMinimumSize(QSize(100, 0));
        comboBoxDataBit->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboBoxDataBit);

        comboBoxVerifyBit = new QComboBox(groupBoxParam);
        comboBoxVerifyBit->addItem(QString());
        comboBoxVerifyBit->addItem(QString());
        comboBoxVerifyBit->addItem(QString());
        comboBoxVerifyBit->addItem(QString());
        comboBoxVerifyBit->addItem(QString());
        comboBoxVerifyBit->setObjectName("comboBoxVerifyBit");
        comboBoxVerifyBit->setMinimumSize(QSize(100, 0));
        comboBoxVerifyBit->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboBoxVerifyBit);

        comboBoxStopBit = new QComboBox(groupBoxParam);
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->setObjectName("comboBoxStopBit");
        comboBoxStopBit->setMinimumSize(QSize(100, 0));
        comboBoxStopBit->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboBoxStopBit);

        comboBoxFlowCtrl = new QComboBox(groupBoxParam);
        comboBoxFlowCtrl->addItem(QString());
        comboBoxFlowCtrl->addItem(QString());
        comboBoxFlowCtrl->addItem(QString());
        comboBoxFlowCtrl->setObjectName("comboBoxFlowCtrl");
        comboBoxFlowCtrl->setMinimumSize(QSize(100, 0));
        comboBoxFlowCtrl->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(comboBoxFlowCtrl);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        formLayout_4->setLayout(0, QFormLayout::LabelRole, gridLayout);

        groupBox_3 = new QGroupBox(groupBoxDown);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(210, 20, 651, 111));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 591, 91));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        btnSerialSwitch = new QPushButton(layoutWidget);
        btnSerialSwitch->setObjectName("btnSerialSwitch");
        btnSerialSwitch->setMinimumSize(QSize(80, 80));
        btnSerialSwitch->setMaximumSize(QSize(80, 80));

        horizontalLayout_13->addWidget(btnSerialSwitch);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        btnClearRec = new QPushButton(layoutWidget);
        btnClearRec->setObjectName("btnClearRec");

        verticalLayout_7->addWidget(btnClearRec);

        btnSaveRec = new QPushButton(layoutWidget);
        btnSaveRec->setObjectName("btnSaveRec");

        verticalLayout_7->addWidget(btnSaveRec);


        horizontalLayout_12->addLayout(verticalLayout_7);

        checkBoxRecTime = new QCheckBox(layoutWidget);
        checkBoxRecTime->setObjectName("checkBoxRecTime");

        horizontalLayout_12->addWidget(checkBoxRecTime);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        checkBoxHexShow = new QCheckBox(layoutWidget);
        checkBoxHexShow->setObjectName("checkBoxHexShow");

        verticalLayout_6->addWidget(checkBoxHexShow);

        checkBoxAutoNewLine = new QCheckBox(layoutWidget);
        checkBoxAutoNewLine->setObjectName("checkBoxAutoNewLine");

        verticalLayout_6->addWidget(checkBoxAutoNewLine);


        horizontalLayout_12->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnHideTable = new QPushButton(layoutWidget);
        btnHideTable->setObjectName("btnHideTable");
        btnHideTable->setCheckable(true);

        verticalLayout_4->addWidget(btnHideTable);

        btnHideHistory = new QPushButton(layoutWidget);
        btnHideHistory->setObjectName("btnHideHistory");
        btnHideHistory->setCheckable(true);

        verticalLayout_4->addWidget(btnHideHistory);


        horizontalLayout_12->addLayout(verticalLayout_4);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        groupBox_4 = new QGroupBox(groupBoxDown);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(210, 140, 651, 111));
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 611, 81));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        checkBoxTimelySend = new QCheckBox(layoutWidget1);
        checkBoxTimelySend->setObjectName("checkBoxTimelySend");

        horizontalLayout_14->addWidget(checkBoxTimelySend);

        lineEditSendInterval = new QLineEdit(layoutWidget1);
        lineEditSendInterval->setObjectName("lineEditSendInterval");
        lineEditSendInterval->setMinimumSize(QSize(60, 0));
        lineEditSendInterval->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_14->addWidget(lineEditSendInterval);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName("label_14");

        horizontalLayout_14->addWidget(label_14);

        checkBoxSendNewLine = new QCheckBox(layoutWidget1);
        checkBoxSendNewLine->setObjectName("checkBoxSendNewLine");

        horizontalLayout_14->addWidget(checkBoxSendNewLine);

        checkBoxHexSend = new QCheckBox(layoutWidget1);
        checkBoxHexSend->setObjectName("checkBoxHexSend");

        horizontalLayout_14->addWidget(checkBoxHexSend);


        gridLayout_2->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        btnSend = new QPushButton(layoutWidget1);
        btnSend->setObjectName("btnSend");
        btnSend->setMinimumSize(QSize(70, 0));
        btnSend->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_15->addWidget(btnSend);

        lineEditSendText = new QLineEdit(layoutWidget1);
        lineEditSendText->setObjectName("lineEditSendText");
        lineEditSendText->setMinimumSize(QSize(500, 0));
        lineEditSendText->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_15->addWidget(lineEditSendText);


        gridLayout_2->addLayout(horizontalLayout_15, 1, 0, 1, 1);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 730, 871, 22));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        labelSendState = new QLabel(layoutWidget2);
        labelSendState->setObjectName("labelSendState");

        horizontalLayout_16->addWidget(labelSendState, 0, Qt::AlignmentFlag::AlignLeft);

        labelRecNum = new QLabel(layoutWidget2);
        labelRecNum->setObjectName("labelRecNum");

        horizontalLayout_16->addWidget(labelRecNum);

        labelSendNum = new QLabel(layoutWidget2);
        labelSendNum->setObjectName("labelSendNum");

        horizontalLayout_16->addWidget(labelSendNum);

        labelDate = new QLabel(layoutWidget2);
        labelDate->setObjectName("labelDate");

        horizontalLayout_16->addWidget(labelDate, 0, Qt::AlignmentFlag::AlignRight);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 10, 871, 461));
        horizontalLayoutUp = new QHBoxLayout(layoutWidget3);
        horizontalLayoutUp->setObjectName("horizontalLayoutUp");
        horizontalLayoutUp->setContentsMargins(0, 0, 0, 0);
        groupBoxRec = new QGroupBox(layoutWidget3);
        groupBoxRec->setObjectName("groupBoxRec");
        formLayout = new QFormLayout(groupBoxRec);
        formLayout->setObjectName("formLayout");
        textEditRec = new QTextEdit(groupBoxRec);
        textEditRec->setObjectName("textEditRec");

        formLayout->setWidget(0, QFormLayout::FieldRole, textEditRec);


        horizontalLayoutUp->addWidget(groupBoxRec);

        groupBoxRecord = new QGroupBox(layoutWidget3);
        groupBoxRecord->setObjectName("groupBoxRecord");
        formLayout_2 = new QFormLayout(groupBoxRecord);
        formLayout_2->setObjectName("formLayout_2");
        textEditReccord = new QTextEdit(groupBoxRecord);
        textEditReccord->setObjectName("textEditReccord");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, textEditReccord);


        horizontalLayoutUp->addWidget(groupBoxRecord);

        groupBoxTex = new QGroupBox(layoutWidget3);
        groupBoxTex->setObjectName("groupBoxTex");
        layoutWidget4 = new QWidget(groupBoxTex);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(70, 350, 200, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        checkBoxCircularSend = new QCheckBox(layoutWidget4);
        checkBoxCircularSend->setObjectName("checkBoxCircularSend");

        horizontalLayout_6->addWidget(checkBoxCircularSend);

        spinBox = new QSpinBox(layoutWidget4);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(10000);

        horizontalLayout_6->addWidget(spinBox);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        layoutWidget5 = new QWidget(groupBoxTex);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(30, 400, 256, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(layoutWidget5);
        btnSave->setObjectName("btnSave");

        horizontalLayout_7->addWidget(btnSave);

        btnLoad = new QPushButton(layoutWidget5);
        btnLoad->setObjectName("btnLoad");

        horizontalLayout_7->addWidget(btnLoad);

        btnReset = new QPushButton(layoutWidget5);
        btnReset->setObjectName("btnReset");

        horizontalLayout_7->addWidget(btnReset);

        layoutWidget6 = new QWidget(groupBoxTex);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(10, 30, 281, 311));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget6);
        label->setObjectName("label");
        label->setMinimumSize(QSize(10, 0));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget6);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(30, 0));
        label_3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayoutText = new QVBoxLayout();
        verticalLayoutText->setObjectName("verticalLayoutText");
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        checkBox_1 = new QCheckBox(layoutWidget6);
        checkBox_1->setObjectName("checkBox_1");

        horizontalLayout_1->addWidget(checkBox_1);

        lineEdit_1 = new QLineEdit(layoutWidget6);
        lineEdit_1->setObjectName("lineEdit_1");

        horizontalLayout_1->addWidget(lineEdit_1);

        btnSend_1 = new QPushButton(layoutWidget6);
        btnSend_1->setObjectName("btnSend_1");
        btnSend_1->setMinimumSize(QSize(30, 0));
        btnSend_1->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_1->addWidget(btnSend_1);


        verticalLayoutText->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_2 = new QCheckBox(layoutWidget6);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_2->addWidget(checkBox_2);

        lineEdit_2 = new QLineEdit(layoutWidget6);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);

        btnSend_2 = new QPushButton(layoutWidget6);
        btnSend_2->setObjectName("btnSend_2");
        btnSend_2->setMinimumSize(QSize(30, 0));
        btnSend_2->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(btnSend_2);


        verticalLayoutText->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_3 = new QCheckBox(layoutWidget6);
        checkBox_3->setObjectName("checkBox_3");

        horizontalLayout_3->addWidget(checkBox_3);

        lineEdit_3 = new QLineEdit(layoutWidget6);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);

        btnSend_3 = new QPushButton(layoutWidget6);
        btnSend_3->setObjectName("btnSend_3");
        btnSend_3->setMinimumSize(QSize(30, 0));
        btnSend_3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(btnSend_3);


        verticalLayoutText->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBox_4 = new QCheckBox(layoutWidget6);
        checkBox_4->setObjectName("checkBox_4");

        horizontalLayout_4->addWidget(checkBox_4);

        lineEdit_4 = new QLineEdit(layoutWidget6);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);

        btnSend_4 = new QPushButton(layoutWidget6);
        btnSend_4->setObjectName("btnSend_4");
        btnSend_4->setMinimumSize(QSize(30, 0));
        btnSend_4->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_4->addWidget(btnSend_4);


        verticalLayoutText->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox_5 = new QCheckBox(layoutWidget6);
        checkBox_5->setObjectName("checkBox_5");

        horizontalLayout_5->addWidget(checkBox_5);

        lineEdit_5 = new QLineEdit(layoutWidget6);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_5->addWidget(lineEdit_5);

        btnSend_5 = new QPushButton(layoutWidget6);
        btnSend_5->setObjectName("btnSend_5");
        btnSend_5->setMinimumSize(QSize(30, 0));
        btnSend_5->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(btnSend_5);


        verticalLayoutText->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayoutText);


        horizontalLayoutUp->addWidget(groupBoxTex);

        horizontalLayoutUp->setStretch(0, 4);
        horizontalLayoutUp->setStretch(1, 3);
        horizontalLayoutUp->setStretch(2, 4);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\256\200\346\230\237\346\235\260\345\256\207\345\256\231\350\266\205\347\272\247\346\227\240\346\225\214\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213 V1.0      email: 13778247139@163.com", nullptr));
        groupBoxDown->setTitle(QString());
        groupBoxParam->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\346\265\201\346\216\247", nullptr));
        comboBoxBaud->setItemText(0, QCoreApplication::translate("Widget", "4800", nullptr));
        comboBoxBaud->setItemText(1, QCoreApplication::translate("Widget", "9600", nullptr));
        comboBoxBaud->setItemText(2, QCoreApplication::translate("Widget", "19200", nullptr));
        comboBoxBaud->setItemText(3, QCoreApplication::translate("Widget", "38400", nullptr));
        comboBoxBaud->setItemText(4, QCoreApplication::translate("Widget", "57600", nullptr));
        comboBoxBaud->setItemText(5, QCoreApplication::translate("Widget", "74880", nullptr));
        comboBoxBaud->setItemText(6, QCoreApplication::translate("Widget", "115200", nullptr));
        comboBoxBaud->setItemText(7, QCoreApplication::translate("Widget", "230400", nullptr));
        comboBoxBaud->setItemText(8, QCoreApplication::translate("Widget", "460800", nullptr));
        comboBoxBaud->setItemText(9, QCoreApplication::translate("Widget", "576000", nullptr));

        comboBoxDataBit->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        comboBoxDataBit->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        comboBoxDataBit->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        comboBoxDataBit->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));

        comboBoxVerifyBit->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        comboBoxVerifyBit->setItemText(1, QCoreApplication::translate("Widget", "Even", nullptr));
        comboBoxVerifyBit->setItemText(2, QCoreApplication::translate("Widget", "Odd", nullptr));
        comboBoxVerifyBit->setItemText(3, QCoreApplication::translate("Widget", "Mark", nullptr));
        comboBoxVerifyBit->setItemText(4, QCoreApplication::translate("Widget", "Space", nullptr));

        comboBoxStopBit->setItemText(0, QCoreApplication::translate("Widget", "One", nullptr));
        comboBoxStopBit->setItemText(1, QCoreApplication::translate("Widget", "OneAndHalf", nullptr));
        comboBoxStopBit->setItemText(2, QCoreApplication::translate("Widget", "Two", nullptr));

        comboBoxFlowCtrl->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        comboBoxFlowCtrl->setItemText(1, QCoreApplication::translate("Widget", "Hardware", nullptr));
        comboBoxFlowCtrl->setItemText(2, QCoreApplication::translate("Widget", "Software", nullptr));

        groupBox_3->setTitle(QString());
        btnSerialSwitch->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btnClearRec->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        btnSaveRec->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\216\245\346\224\266", nullptr));
        checkBoxRecTime->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\346\227\266\351\227\264", nullptr));
        checkBoxHexShow->setText(QCoreApplication::translate("Widget", "HEX\346\230\276\347\244\272", nullptr));
        checkBoxAutoNewLine->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        btnHideTable->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\351\235\242\346\235\277", nullptr));
        btnHideHistory->setText(QCoreApplication::translate("Widget", "\351\232\220\350\227\217\345\216\206\345\217\262", nullptr));
        groupBox_4->setTitle(QString());
        checkBoxTimelySend->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "ms/\346\254\241", nullptr));
        checkBoxSendNewLine->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        checkBoxHexSend->setText(QCoreApplication::translate("Widget", "HEX\345\217\221\351\200\201", nullptr));
        btnSend->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        labelSendState->setText(QCoreApplication::translate("Widget", "Send OK !", nullptr));
        labelRecNum->setText(QCoreApplication::translate("Widget", "Received: 0", nullptr));
        labelSendNum->setText(QCoreApplication::translate("Widget", "Sent : 0", nullptr));
        labelDate->setText(QCoreApplication::translate("Widget", "2025-03-30  17:31:29", nullptr));
        groupBoxRec->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
        groupBoxRecord->setTitle(QCoreApplication::translate("Widget", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        groupBoxTex->setTitle(QCoreApplication::translate("Widget", "\345\244\232\346\226\207\346\234\254", nullptr));
        checkBoxCircularSend->setText(QCoreApplication::translate("Widget", "\345\276\252\347\216\257\345\217\221\351\200\201", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "ms", nullptr));
        btnSave->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        btnLoad->setText(QCoreApplication::translate("Widget", "\350\275\275\345\205\245", nullptr));
        btnReset->setText(QCoreApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("Widget", "HEX", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        checkBox_1->setText(QString());
        btnSend_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        checkBox_2->setText(QString());
        btnSend_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        checkBox_3->setText(QString());
        btnSend_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        checkBox_4->setText(QString());
        btnSend_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        checkBox_5->setText(QString());
        btnSend_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
