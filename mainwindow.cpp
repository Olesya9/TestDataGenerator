#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    h = 0.5;
    xBegin = 0;
    xEnd = 9 + h;
    ui->widget->xAxis->setRange(0, 10);
    ui->widget->yAxis->setRange(-6, 6);

    kolPoint = (xEnd - xBegin) / h + 2;
    for (X = xBegin; X <= xEnd;  X += h)
    {
    x.push_back(X);
    y.push_back(sin(X));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}

