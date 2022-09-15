#include "include\mythread.h"
#include <QTcpSocket>
mythread::mythread(qintptr ID, QObject *parent)
    : QThread{parent}
{
    this->socketDescriptor = ID;
}

void mythread::run(){
    qDebug()<<"Thread starting";

    socket = new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor)){
        emit error(socket->error());

    }
    connect (socket, SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);
    connect (socket, SIGNAL(disconnected()),this, SLOT(disconnected()));

    qDebug()<<socketDescriptor<<"Client Connected";

    exec();
}

void mythread::readyRead()
{
    QByteArray Data = socket->readAll();

   // qDebug()<< socketDescriptor<<"Data in:"<< Data;
}

void mythread::disconnected()
{
    qDebug()<<socketDescriptor << "Desconnected";

    socket-> deleteLater();
    exit(0);
}
