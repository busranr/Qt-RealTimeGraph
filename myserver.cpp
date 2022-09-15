#include "../myserver.h"

myserver::myserver(QObject *parent):
    QTcpServer(parent)

{

}

void myserver::startServer()
{
int port = 1234;

if(!this->listen(QHostAddress::Any,port)){
    qDebug() << "could not start a server";
}
else {
    qDebug() <<"Listening to port" << port <<"...";
}

}
