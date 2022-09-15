#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QObject>
#include "mythread.h"

class myserver : public QTcpServer
{
    Q_OBJECT
public:
    explicit myserver(QObject *parent =0);
    void startServer();

protected:
    void incomingconnection(qintptr socketDescriptor);

        //{qDebug() << socketDescriptor << "connecting..";

        //mythread *thread= new mythread(socketDescriptor,this);

        //connect(thread, SIGNAL(finished()),thread,SLOT(deleteLater()));
        //thread->start();}

signals:
    void mewDataRecieved(QByteArray);

};

#endif // MYSERVER_H
