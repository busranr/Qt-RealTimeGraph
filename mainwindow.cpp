#include "mainwindow.h"
#include "qcustomplot.h"
//#include "QCPAxis"
#include "ui_mainwindow.h"
#include "serverthread.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->customplot->addGraph();
    ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssStar); //kordinatlardaki işaret

    ui->customplot->graph()->setPen(QPen(QColorConstants::Svg::orange)); //grafik rengi
    ui->customplot->graph()->setBrush(QColorConstants::Svg::pink); //tılandığında alan rengi
    ui->customplot->graph()->setLineStyle(QCPGraph::lsStepLeft); //grafik çıkış şekli


    ui->customplot->xAxis->setLabel("ISI-x"); //x ekseni başlık
    ui->customplot->yAxis->setLabel("SICAKLIK-y"); // y ekseni başlık
    ui->customplot->xAxis->setRange(-6000,700); //?
    ui->customplot->yAxis->setRange(-6000,8000); //?

    ui->customplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables); //grafik küçült büyült, oynat...
    ui->customplot->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        ui->customplot->legend->setVisible(true);

      ui->scattercombobox->setCurrentIndex(4);
      ui->linestylecomboBox->setCurrentIndex(1);


    serverthread *thread = new serverthread(this);

    connect(thread,SIGNAL(newDataRecieved(QByteArray)),this,SLOT(parseData(QByteArray)))));
    thread->start();

    QVector<double> x={1,2,3,4,5},y={4,6,8,2,5};

    ui->customplot->graph(0)->setData(x,y);
    ui->customplot->rescaleAxes();
    ui->customplot->replot();
    ui->customplot->update();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::parseData(QByteArray Data)
{
    qDebug()<<"Got data"<<Data;
}



void MainWindow::on_plotbut_clicked()  //grafiği getirir
{
    qDebug()<<"selam";
    QVector<double> x={1,2,3,4,5}, y={4,6,8,2,5};
    ui->customplot->graph(0)->setData(x,y);
    ui->customplot->rescaleAxes();
    ui->customplot->replot();
    ui->customplot->update();
}



void MainWindow::on_clearbut_clicked() //grafiği temizler
{
    qDebug()<<"se";
    ui->customplot->graph(0)->data()->clear();
    ui->customplot->replot();
    ui->customplot->update();
}


void MainWindow::on_linestylecomboBox_currentIndexChanged(int index) //grafik çizgi stilini değiştirir.
{

    switch (index) {
    case 0:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsNone);
        break;
    case 1:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsLine);
        break;
    case 2:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsStepLeft);
        break;
    case 3:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsStepRight);
        break;
    case 4:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsStepCenter);
        break;
    case 5:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsImpulse);
        break;

    default:
        ui->customplot->graph(0)->setLineStyle(QCPGraph::lsNone);
        break;
    }

    ui->customplot->replot();
    ui->customplot->update();


}


void MainWindow::on_scattercombobox_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssNone);
        break;
    case 1:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssDot);
        break;
    case 2:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssCross);
        break;
    case 3:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssPlus);
        break;
    case 4:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
        break;
    case 5:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssDisc);
        break;

    default:
        ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssCross);
        break;
    }

    ui->customplot->replot();
    ui->customplot->update();



}

