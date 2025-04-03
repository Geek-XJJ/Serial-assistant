#include "mythread.h"

void myThread::run()
{
    while(1){
        msleep(1000);
        emit threadTimeout();
    }
}

myThread::myThread(QWidget *parent):QThread(parent)
{

}
