#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QtMath>
#include <QSpinBox>
#include <QSpinBox>
#include <QRandomGenerator>
#include <QtGlobal>
#include <QAbstractButton>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_RandomHarmonicRadioButton_clicked();

    void on_GivenHarmonicRadioButton_clicked();

    void on_LimitHarmonicCheckBox_stateChanged(int arg1);

    void on_RandomCarRadioButton_clicked();

    void on_GivenCarRadioButton_clicked();

    void on_LimitCarCheckBox_stateChanged(int arg1);

    void on_RandomPlaneRadioButton_clicked();

    void on_GivenPlaneRadioButton_clicked();

    void on_LimitPlaneCheckBox_stateChanged(int arg1);


private:
    Ui::MainWindow *ui;
    double xBegin, xEnd, X;
    int  kolPoint;
    QVector<double> x,y;
};
#endif // MAINWINDOW_H
