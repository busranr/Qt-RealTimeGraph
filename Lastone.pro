QT       += core gui
QT       +=printsupport #yazdırmak için

QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += include/
VPATH += src/

SOURCES += \
    serverthread.cpp \
    myserver.cpp \
    main.cpp \
    src/mainwindow.cpp \
    src/mythread.cpp \
    src/qcustomplot.cpp \

HEADERS += \
    include/mainwindow.h\
    include/mythread.h \
    include/qcustomplot.h\
    myserver.h \
    include/serverthread.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx : target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
