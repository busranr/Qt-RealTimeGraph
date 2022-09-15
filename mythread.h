#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QObject>
#include <QTcpSocket>
#include <QDebug>



class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = nullptr);
    mythread(qintptr ID, QObject *parent=0);

    void run();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;

public slots:
    void readyRead();
    void disconnected();

signals:
    void error(QTcpSocket::SocketError socketerror);

};

#endif // MYTHREAD_H
