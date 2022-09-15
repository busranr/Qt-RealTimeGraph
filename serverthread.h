#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QThread>
#include <QObject>

class serverthread : public QThread
{
    Q_OBJECT
public:
    explicit serverthread(QObject *parent = nullptr);
    //void serverthread(QObject *parent=0);
    void run();
signals:
    void mewDataRecieved(QByteArray);
};

#endif // SERVERTHREAD_H
