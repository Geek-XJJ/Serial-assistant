#ifndef WIDGET_H
#define WIDGET_H

#include <QCheckBox>
#include <QSerialPort>
#include <QTimer>
#include <QWidget>
#include <qpushbutton.h>
#include "mycombobox.h"
#include "mythread.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnSerialSwitch_clicked();

    void on_btnSend_clicked();
    void on_serialDataReady2Read();
    void on_checkBoxTimelySend_clicked(bool checked);

    void on_btnClearRec_clicked();

    void on_btnSaveRec_clicked();
    void flushTime();
    void on_checkBoxHexShow_clicked(bool checked);

    void on_btnHideTable_clicked(bool checked);

    void on_btnHideHistory_clicked(bool checked);

    void on_comboBoxCom_activated(int index);
    void refreshSerialNum();
    void on_cmd_btn_clicked();
    void on_checkBoxCircularSend_clicked(bool checked);
    void buttons_handler();
    void on_btnReset_clicked();

    void on_btnSave_clicked();

    void on_btnLoad_clicked();

private:
    Ui::Widget *ui;
    QSerialPort* serialPort;
    int sendCntTotoal;
    int readCntTotoal;
    QString preSendData;
    QString myTime;
    bool serialCurrentState;
    QTimer* timer;
    void getSysTime();
    QList<QPushButton*> buttons;
    QList<QLineEdit*> lineEdits;
    QList<QCheckBox*> checkBoxes;
    QTimer* buttonConTimer;
    int buttonIndex;
    myThread* circularSendThread;
};
#endif // WIDGET_H
