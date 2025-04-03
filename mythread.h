#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QWidget>

class myThread : public QThread
{
    Q_OBJECT
protected:
    void run() override;
public:
    myThread(QWidget* parent);
signals:
    void threadTimeout();
};

#endif // MYTHREAD_H
