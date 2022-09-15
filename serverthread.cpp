#include "serverthread.h"
#include "myserver.h"

serverthread::serverthread(QObject *parent)
    : QThread{parent}
{

}

void serverthread::run()
{
    myserver server;
    connect(&server,SIGNAL(newDataRecieved(QByteArray))),this,SIGNAL(newDataReceived(QByteArray)));

    server.startServer();

    exec();
}
