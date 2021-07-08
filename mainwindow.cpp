#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include "../controllers/domain_logic.h"
#include "../data/Storage/planedata.h"
#include "../data/Storage/cardata.h"
#include "../data/Storage/harmonicmotiondata.h"
#include "../data/Options/harmonicmotiondataoptions.h"
#include "../data/Options/cardataoptions.h"
#include "../data/Options/planedataoptions.h"
#include "iostream"
#include "fstream"
#define HARMONIC 1
#define PLANE 2
#define CAR 3
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->harmonicFunctionGraphic->setInteraction(QCP::iRangeZoom, true);
    ui->harmonicFunctionGraphic->setInteraction(QCP::iRangeDrag, true);
    ui->carSpeedGraphic->setInteraction(QCP::iRangeZoom, true);
    ui->carSpeedGraphic->setInteraction(QCP::iRangeDrag, true);
    ui->carFuelLevelGraphic->setInteraction(QCP::iRangeZoom, true);
    ui->carFuelLevelGraphic->setInteraction(QCP::iRangeDrag, true);
    ui->carEnginePRMGraphic->setInteraction(QCP::iRangeZoom, true);
    ui->carEnginePRMGraphic->setInteraction(QCP::iRangeDrag, true);
    ui->carEngineTemperatureGraphic->setInteraction(QCP::iRangeZoom, true);
    ui->carEngineTemperatureGraphic->setInteraction(QCP::iRangeZoom, true);
    ui->planeAltitude->setInteraction(QCP::iRangeZoom, true);
    ui->planeAltitude->setInteraction(QCP::iRangeDrag, true);
    ui->planeAttackAngle->setInteraction(QCP::iRangeZoom, true);
    ui->planeAttackAngle->setInteraction(QCP::iRangeDrag, true);
    ui->planeFuelLevel->setInteraction(QCP::iRangeZoom, true);
    ui->planeFuelLevel->setInteraction(QCP::iRangeDrag, true);
    ui->stepDoubleSpinBox->setValue(0.1);
    ui->durationSpinBox->setValue(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{

    const double STEP = ui->stepDoubleSpinBox->value();
    const int DURATION = ui->durationSpinBox->value();

    x.clear();

    std::ofstream file;
    DataOptions* options;
    Data* data;
    double yMax;
    double yMin;
    QVector<double>* doubleRpmData;
    switch (ui->tabWidget->currentIndex())
    {
    case 0: // функция
        if(ui->RandomHarmonicRadioButton->isChecked()) // рандомные значение
        {
            if (ui->LimitHarmonicCheckBox->isChecked()) // ограниченные значения
            {
                options = new HarmonicMotionDataOptions(ui->minAmplitudeSpinbox->value(), // min amplitude
                                                        ui->maxAmplitudeSpinbox->value(), // max amplitude
                                                        ui->minFrequencySpinBox->value(), // min cyclic frequency
                                                        ui->maxFrequencySpinBox->value(), // etc..
                                                        ui->minInitialPhaseSpinBox->value()+(ui->CosRadioButton->isChecked() ? M_PI/2 : 0), //sin(x) = cos(x+PI/2)
                                                        ui->maxInitialPhaseSpinBox->value()+(ui->CosRadioButton->isChecked() ? M_PI/2 : 0));
                data = generateTestData(HARMONIC, STEP, DURATION, options); //заказываем данные
            }

            else  // полностью случайные значения - заказываем данные без последнего аргумента
                data = generateTestData(HARMONIC, STEP, DURATION); //заказываем данные
        }
        else // заданные значения
        {
            options = new HarmonicMotionDataOptions(ui->maxAmplitudeSpinbox->value(), // amplitude
                                                    ui->maxFrequencySpinBox->value(), // cyclic frequency
                                                    ui->maxInitialPhaseSpinBox->value()+(ui->CosRadioButton->isChecked() ? M_PI/2 : 0));  // phase
            data = generateTestData(HARMONIC, STEP, DURATION, options);

        }
        // x - вспомогательный вектор для оси X - оси времени, один для всех графиков в пределах вкладки
        for (X = 0; X < DURATION; X += STEP)
            x.push_back(X);

        // блок кода ниже выполняем для каждого графика. У функции график один, у машины 4, у самолёта 3
        //через static_cast приводим базовый класса data к нужному нам дочернему классу. Для функции это HarmonicMotionData
        yMax = *std::max_element(static_cast<HarmonicMotionData*>(data)->phaseData->begin(), static_cast<HarmonicMotionData*>(data)->phaseData->end());
        yMin = *std::min_element(static_cast<HarmonicMotionData*>(data)->phaseData->begin(), static_cast<HarmonicMotionData*>(data)->phaseData->end());
        ui->harmonicFunctionGraphic->clearGraphs();
        ui->harmonicFunctionGraphic->addGraph();
        ui->harmonicFunctionGraphic->yAxis->setRange(yMin, yMax);
        ui->harmonicFunctionGraphic->xAxis->setRange(0, DURATION);
        ui->harmonicFunctionGraphic->graph(0)->addData(x,*static_cast<HarmonicMotionData*>(data)->phaseData);
        ui->harmonicFunctionGraphic->replot();
        break;

    case 1: // car
        if(ui->RandomCarRadioButton->isChecked())
        {
            if (ui->LimitCarCheckBox->isChecked())
            {
                options = new CarDataOptions(ui->minSpeedSpinBox->value(), ui->maxSpeedSpinBox->value(),
                                             ui->minFuelLevelCarSpinBox->value(), ui->maxFuelLevelCarSpinBox->value(),
                                             ui->minEngineTemperatureSpinBox->value(), ui->maxEngineTemperatureSpinBox->value(),
                                             ui->minRevsSpinBox->value(), ui->maxRevsSpinBox->value());
                data = generateTestData(CAR, STEP, DURATION, options);
            }

            else
                data = generateTestData(CAR, STEP, DURATION); //заказываем данные
        }
        else
        {
            options = new CarDataOptions(ui->maxSpeedSpinBox->value(), ui->maxFuelLevelCarSpinBox->value(), ui->maxEngineTemperatureSpinBox->value(), ui->maxRevsSpinBox->value());
            data = generateTestData(CAR, STEP, DURATION, options);

        }

        for (X = 0; X < static_cast<CarData*>(data)->speedData->length()*STEP; X+=STEP)
            x.push_back(X);

        yMax = *std::max_element(static_cast<CarData*>(data)->speedData->begin(), static_cast<CarData*>(data)->speedData->end());
        yMin = *std::min_element(static_cast<CarData*>(data)->speedData->begin(), static_cast<CarData*>(data)->speedData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->carSpeedGraphic->clearGraphs();
        ui->carSpeedGraphic->addGraph();
        ui->carSpeedGraphic->yAxis->setRange(yMin, yMax);
        ui->carSpeedGraphic->xAxis->setRange(0, DURATION);
        ui->carSpeedGraphic->graph(0)->addData(x,*static_cast<CarData*>(data)->speedData);
        ui->carSpeedGraphic->replot();

        // Это не костыль, это паттерн адаптер
        doubleRpmData = new QVector<double>(static_cast<CarData*>(data)->rpmData->begin(), static_cast<CarData*>(data)->rpmData->end());
        if (doubleRpmData->at(0) < 0 && doubleRpmData->length() > 1)
            doubleRpmData->replace(0, doubleRpmData->at(1));

        yMax = *std::max_element(doubleRpmData->begin(), doubleRpmData->end());
        yMin = *std::min_element(doubleRpmData->begin(), doubleRpmData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->carEnginePRMGraphic->clearGraphs();
        ui->carEnginePRMGraphic->addGraph();
        ui->carEnginePRMGraphic->yAxis->setRange(yMin, yMax);
        ui->carEnginePRMGraphic->xAxis->setRange(0, DURATION);
        ui->carEnginePRMGraphic->graph(0)->addData(x,*doubleRpmData);
        ui->carEnginePRMGraphic->replot();

        yMax = *std::max_element(static_cast<CarData*>(data)->fuelLevelData->begin(), static_cast<CarData*>(data)->fuelLevelData->end());
        yMin = *std::min_element(static_cast<CarData*>(data)->fuelLevelData->begin(), static_cast<CarData*>(data)->fuelLevelData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->carFuelLevelGraphic->clearGraphs();
        ui->carFuelLevelGraphic->addGraph();
        ui->carFuelLevelGraphic->yAxis->setRange(yMin, yMax);
        ui->carFuelLevelGraphic->xAxis->setRange(0, DURATION);
        ui->carFuelLevelGraphic->graph(0)->addData(x,*static_cast<CarData*>(data)->fuelLevelData);
        ui->carFuelLevelGraphic->replot();

        yMax = *std::max_element(static_cast<CarData*>(data)->temperatureData->begin(), static_cast<CarData*>(data)->temperatureData->end());
        yMin = *std::min_element(static_cast<CarData*>(data)->temperatureData->begin(), static_cast<CarData*>(data)->temperatureData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->carEngineTemperatureGraphic->clearGraphs();
        ui->carEngineTemperatureGraphic->addGraph();
        ui->carEngineTemperatureGraphic->yAxis->setRange(yMin, yMax);
        ui->carEngineTemperatureGraphic->xAxis->setRange(0, DURATION);
        ui->carEngineTemperatureGraphic->graph(0)->addData(x,*static_cast<CarData*>(data)->temperatureData);
        ui->carEngineTemperatureGraphic->replot();
        delete doubleRpmData;
        break;

    case 2: //plane
        if(ui->RandomPlaneRadioButton->isChecked())
        {
            if (ui->LimitPlaneCheckBox->isChecked())
            {
                options = new PlaneDataOptions(ui->minFuelLevelPlaneSpinBox->value(), ui->maxFuelLevelPlaneSpinBox->value(),
                                             ui->minAltitudeSpinBox->value(), ui->maxAltitudeSpinBox->value(),
                                             ui->minAngleOfAttackSpinBox->value(), ui->maxAngleOfAttackSpinBox->value());
                data = generateTestData(PLANE, STEP, DURATION, options);
            }

            else
                data = generateTestData(PLANE, STEP, DURATION); //заказываем данные
        }
        else
        {
            options = new PlaneDataOptions(ui->maxFuelLevelPlaneSpinBox->value(), ui->maxAltitudeSpinBox->value(), ui->maxAngleOfAttackSpinBox->value());
            data = generateTestData(PLANE, STEP, DURATION, options);

        }

        for (X = 0; X < static_cast<CarData*>(data)->speedData->length()*STEP; X+=STEP)
            x.push_back(X);

        yMax = *std::max_element(static_cast<PlaneData*>(data)->fuelLevelData->begin(), static_cast<PlaneData*>(data)->fuelLevelData->end());
        yMin = *std::min_element(static_cast<PlaneData*>(data)->fuelLevelData->begin(), static_cast<PlaneData*>(data)->fuelLevelData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->planeFuelLevel->clearGraphs();
        ui->planeFuelLevel->addGraph();
        ui->planeFuelLevel->yAxis->setRange(yMin, yMax);
        ui->planeFuelLevel->xAxis->setRange(0, DURATION);
        ui->planeFuelLevel->graph(0)->addData(x,*static_cast<PlaneData*>(data)->fuelLevelData);
        ui->planeFuelLevel->replot();

        yMax = *std::max_element(static_cast<PlaneData*>(data)->altitudeData->begin(), static_cast<PlaneData*>(data)->altitudeData->end());
        yMin = *std::min_element(static_cast<PlaneData*>(data)->altitudeData->begin(), static_cast<PlaneData*>(data)->altitudeData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->planeAltitude->clearGraphs();
        ui->planeAltitude->addGraph();
        ui->planeAltitude->yAxis->setRange(yMin, yMax);
        ui->planeAltitude->xAxis->setRange(0, DURATION);
        ui->planeAltitude->graph(0)->addData(x,*static_cast<PlaneData*>(data)->altitudeData);
        ui->planeAltitude->replot();

        yMax = *std::max_element(static_cast<PlaneData*>(data)->attackAngleData->begin(), static_cast<PlaneData*>(data)->attackAngleData->end());
        yMin = *std::min_element(static_cast<PlaneData*>(data)->attackAngleData->begin(), static_cast<PlaneData*>(data)->attackAngleData->end());
        yMin = yMin == yMax ? 0 : yMin;
        ui->planeAttackAngle->clearGraphs();
        ui->planeAttackAngle->addGraph();
        ui->planeAttackAngle->yAxis->setRange(yMin, yMax);
        ui->planeAttackAngle->xAxis->setRange(0, DURATION);
        ui->planeAttackAngle->graph(0)->addData(x,*static_cast<PlaneData*>(data)->attackAngleData);
        ui->planeAttackAngle->replot();
        break;
    }
}

void MainWindow::on_RandomHarmonicRadioButton_clicked() //  случайная генерация данных для hurmonic
{
    ui->SinRadioButton->setEnabled(false);
    ui->CosRadioButton->setEnabled(false);
    ui->minAmplitudeSpinbox->setEnabled(false);
    ui->maxAmplitudeSpinbox->setEnabled(false);
    ui->minFrequencySpinBox->setEnabled(false);
    ui->maxFrequencySpinBox->setEnabled(false);
    ui->minInitialPhaseSpinBox->setEnabled(false);
    ui->maxInitialPhaseSpinBox->setEnabled(false);
    ui->LimitHarmonicCheckBox->setEnabled(true);
}

void MainWindow::on_GivenHarmonicRadioButton_clicked() //  заданные для hurmonic
{
    ui->SinRadioButton->setEnabled(true);
    ui->CosRadioButton->setEnabled(true);
    ui->minAmplitudeSpinbox->setEnabled(false);
    ui->maxAmplitudeSpinbox->setEnabled(true);
    ui->minFrequencySpinBox->setEnabled(false);
    ui->maxFrequencySpinBox->setEnabled(true);
    ui->minInitialPhaseSpinBox->setEnabled(false);
    ui->maxInitialPhaseSpinBox->setEnabled(true);

    if (ui->GivenHarmonicRadioButton->isChecked())
    {
        ui->LimitHarmonicCheckBox->setChecked(false);
        ui->LimitHarmonicCheckBox->setEnabled(false);
    }
}

void MainWindow::on_LimitHarmonicCheckBox_stateChanged(int checkState) // ограничить для hurmonic
{
    switch (checkState)
    {
    case Qt::Checked:
        ui->minAmplitudeSpinbox->setEnabled(true);
        ui->maxAmplitudeSpinbox->setEnabled(true);
        ui->minFrequencySpinBox->setEnabled(true);
        ui->maxFrequencySpinBox->setEnabled(true);
        ui->minInitialPhaseSpinBox->setEnabled(true);
        ui->maxInitialPhaseSpinBox->setEnabled(true);
        ui->SinRadioButton->setEnabled(false);
        ui->CosRadioButton->setEnabled(false);
        break;
    case Qt::Unchecked:
        ui->minAmplitudeSpinbox->setEnabled(false);
        ui->maxAmplitudeSpinbox->setEnabled(false);
        ui->minFrequencySpinBox->setEnabled(false);
        ui->maxFrequencySpinBox->setEnabled(false);
        ui->minInitialPhaseSpinBox->setEnabled(false);
        ui->maxInitialPhaseSpinBox->setEnabled(false);
        break;
    default:
        break;
    }
}

void MainWindow::on_RandomCarRadioButton_clicked() //  случайная генерация данных для car
{
    ui->minFuelLevelCarSpinBox->setEnabled(false);
    ui->maxFuelLevelCarSpinBox->setEnabled(false);
    ui->minSpeedSpinBox->setEnabled(false);
    ui->maxSpeedSpinBox->setEnabled(false);
    ui->minRevsSpinBox->setEnabled(false);
    ui->maxRevsSpinBox->setEnabled(false);
    ui->minEngineTemperatureSpinBox->setEnabled(false);
    ui->maxEngineTemperatureSpinBox->setEnabled(false);
    ui->LimitCarCheckBox->setEnabled(true);
}

void MainWindow::on_GivenCarRadioButton_clicked() //  заданные для car
{
    ui->minFuelLevelCarSpinBox->setEnabled(false);
    ui->maxFuelLevelCarSpinBox->setEnabled(true);
    ui->minSpeedSpinBox->setEnabled(false);
    ui->maxSpeedSpinBox->setEnabled(true);
    ui->minRevsSpinBox->setEnabled(false);
    ui->maxRevsSpinBox->setEnabled(true);
    ui->minEngineTemperatureSpinBox->setEnabled(false);
    ui->maxEngineTemperatureSpinBox->setEnabled(true);

    if (ui->GivenCarRadioButton->isChecked())
    {
        ui->LimitCarCheckBox->setChecked(false);
        ui->LimitCarCheckBox->setEnabled(false);
    }
}

void MainWindow::on_LimitCarCheckBox_stateChanged(int checkState) // ограничить для car
{
    switch (checkState)
    {
    case Qt::Checked:
        ui->minFuelLevelCarSpinBox->setEnabled(true);
        ui->maxFuelLevelCarSpinBox->setEnabled(true);
        ui->minSpeedSpinBox->setEnabled(true);
        ui->maxSpeedSpinBox->setEnabled(true);
        ui->minRevsSpinBox->setEnabled(true);
        ui->maxRevsSpinBox->setEnabled(true);
        ui->minEngineTemperatureSpinBox->setEnabled(true);
        ui->maxEngineTemperatureSpinBox->setEnabled(true);
        break;
    case Qt::Unchecked:
        ui->minFuelLevelCarSpinBox->setEnabled(false);
        ui->maxFuelLevelCarSpinBox->setEnabled(false);
        ui->minSpeedSpinBox->setEnabled(false);
        ui->maxSpeedSpinBox->setEnabled(false);
        ui->minRevsSpinBox->setEnabled(false);
        ui->maxRevsSpinBox->setEnabled(false);
        ui->minEngineTemperatureSpinBox->setEnabled(false);
        ui->maxEngineTemperatureSpinBox->setEnabled(false);
        break;
    default:
        break;
    }
}


void MainWindow::on_RandomPlaneRadioButton_clicked() //  случайная генерация данных для plane
{

    ui->minFuelLevelPlaneSpinBox->setEnabled(false);
    ui->maxFuelLevelPlaneSpinBox->setEnabled(false);
    ui->minAltitudeSpinBox->setEnabled(false);
    ui->maxAltitudeSpinBox->setEnabled(false);
    ui->minAngleOfAttackSpinBox->setEnabled(false);
    ui->maxAngleOfAttackSpinBox->setEnabled(false);
    ui->LimitPlaneCheckBox->setEnabled(true);
}


void MainWindow::on_GivenPlaneRadioButton_clicked() //  заданные для plane
{
    ui->minFuelLevelPlaneSpinBox->setEnabled(false);
    ui->maxFuelLevelPlaneSpinBox->setEnabled(true);
    ui->minAltitudeSpinBox->setEnabled(false);
    ui->maxAltitudeSpinBox->setEnabled(true);
    ui->minAngleOfAttackSpinBox->setEnabled(false);
    ui->maxAngleOfAttackSpinBox->setEnabled(true);


    if (ui->GivenPlaneRadioButton->isChecked())
    {
        ui->LimitPlaneCheckBox->setChecked(false);
        ui->LimitPlaneCheckBox->setEnabled(false);
    }
}



void MainWindow::on_LimitPlaneCheckBox_stateChanged(int checkState) //ограничить для plane
{
    switch (checkState)
    {
    case Qt::Checked:
        ui->minFuelLevelPlaneSpinBox->setEnabled(true);
        ui->maxFuelLevelPlaneSpinBox->setEnabled(true);
        ui->minAltitudeSpinBox->setEnabled(true);
        ui->maxAltitudeSpinBox->setEnabled(true);
        ui->minAngleOfAttackSpinBox->setEnabled(true);
        ui->maxAngleOfAttackSpinBox->setEnabled(true);
        break;
    case Qt::Unchecked:
        ui->minFuelLevelPlaneSpinBox->setEnabled(false);
        ui->maxFuelLevelPlaneSpinBox->setEnabled(false);
        ui->minAltitudeSpinBox->setEnabled(false);
        ui->maxAltitudeSpinBox->setEnabled(false);
        ui->minAngleOfAttackSpinBox->setEnabled(false);
        ui->maxAngleOfAttackSpinBox->setEnabled(false);
        break;
    default:
        break;
    }
}
