#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "qcustomplot.h"
#include "serverthread.h"
#include <QMainWindow>
#include <QVector>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
/*
private slots:
    void on_plotbut_clicked();

    void on_clearbut_clicked();
*/
private slots:
    void on_linestylecomboBox_currentIndexChanged(int index);

    void on_scattercombobox_currentIndexChanged(int index);

    void on_pushButton_clicked();

    void on_clearbut_clicked();

    void on_plotbut_clicked();

private:
    Ui::MainWindow *ui;

    void titleDoubleClick(QMouseEvent* event);
    void axisLabelDoubleClick(QCPAxis *axis, QCPAxis::SelectablePart part);
    void legendDoubleClick(QCPLegend *legend, QCPAbstractLegendItem *item);
    void mouseWheel();
    void addRandomGraph();
    void removeSelectedGraph();
    void removeAllGraphs();
    void contextMenuRequest(QPoint pos);
    void moveLegend();
    void graphClicked();
    void selectionChanged();
    void realtimeDataSlot();
   // void on_plotbut_clicked();
   // void on_clearbut_clicked();
    void rescaleAxes();
    void replot();
    void update();
    void serverthread();


public slots:
    void parseData(QByteArray);



};
#endif
