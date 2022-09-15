/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QCustomPlot *customplot;
    QPushButton *plotbut;
    QPushButton *clearbut;
    QPushButton *closebut;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *linestylecomboBox;
    QComboBox *scattercombobox;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1129, 596);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 40, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Symbol"));
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        customplot = new QCustomPlot(centralwidget);
        customplot->setObjectName(QString::fromUtf8("customplot"));
        customplot->setGeometry(QRect(20, 120, 761, 421));
        plotbut = new QPushButton(centralwidget);
        plotbut->setObjectName(QString::fromUtf8("plotbut"));
        plotbut->setGeometry(QRect(850, 340, 71, 21));
        clearbut = new QPushButton(centralwidget);
        clearbut->setObjectName(QString::fromUtf8("clearbut"));
        clearbut->setGeometry(QRect(960, 340, 81, 21));
        closebut = new QPushButton(centralwidget);
        closebut->setObjectName(QString::fromUtf8("closebut"));
        closebut->setGeometry(QRect(960, 460, 71, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(850, 380, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(970, 380, 81, 20));
        linestylecomboBox = new QComboBox(centralwidget);
        linestylecomboBox->addItem(QString());
        linestylecomboBox->addItem(QString());
        linestylecomboBox->addItem(QString());
        linestylecomboBox->addItem(QString());
        linestylecomboBox->addItem(QString());
        linestylecomboBox->setObjectName(QString::fromUtf8("linestylecomboBox"));
        linestylecomboBox->setGeometry(QRect(840, 410, 82, 28));
        scattercombobox = new QComboBox(centralwidget);
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->addItem(QString());
        scattercombobox->setObjectName(QString::fromUtf8("scattercombobox"));
        scattercombobox->setGeometry(QRect(960, 410, 82, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1129, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(closebut, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Merhaba QT", nullptr));
        plotbut->setText(QCoreApplication::translate("MainWindow", "PLOT", nullptr));
        clearbut->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        closebut->setText(QCoreApplication::translate("MainWindow", "CLOSE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Line Style", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Scatter Style", nullptr));
        linestylecomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        linestylecomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "L\304\260ne", nullptr));
        linestylecomboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Step Left", nullptr));
        linestylecomboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Step Right", nullptr));
        linestylecomboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Step Center", nullptr));

        scattercombobox->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        scattercombobox->setItemText(1, QCoreApplication::translate("MainWindow", "Dot", nullptr));
        scattercombobox->setItemText(2, QCoreApplication::translate("MainWindow", "Cross", nullptr));
        scattercombobox->setItemText(3, QCoreApplication::translate("MainWindow", "Plus", nullptr));
        scattercombobox->setItemText(4, QCoreApplication::translate("MainWindow", "Circle", nullptr));
        scattercombobox->setItemText(5, QCoreApplication::translate("MainWindow", "Disc", nullptr));
        scattercombobox->setItemText(6, QCoreApplication::translate("MainWindow", "Square", nullptr));
        scattercombobox->setItemText(7, QCoreApplication::translate("MainWindow", "Diamond", nullptr));
        scattercombobox->setItemText(8, QCoreApplication::translate("MainWindow", "Star", nullptr));
        scattercombobox->setItemText(9, QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        scattercombobox->setItemText(10, QCoreApplication::translate("MainWindow", "Triangle Inverted", nullptr));
        scattercombobox->setItemText(11, QCoreApplication::translate("MainWindow", "Cross Square", nullptr));
        scattercombobox->setItemText(12, QCoreApplication::translate("MainWindow", "Plus Circle", nullptr));
        scattercombobox->setItemText(13, QCoreApplication::translate("MainWindow", "Peace", nullptr));
        scattercombobox->setItemText(14, QCoreApplication::translate("MainWindow", "Cross ", nullptr));

        menu->setTitle(QCoreApplication::translate("MainWindow", "****", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
