/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QCustomPlot *harmonicFunctionGraphic;
    QWidget *widget_2;
    QRadioButton *RandomHarmonicRadioButton;
    QRadioButton *GivenHarmonicRadioButton;
    QDoubleSpinBox *maxAmplitudeSpinbox;
    QDoubleSpinBox *minAmplitudeSpinbox;
    QDoubleSpinBox *maxInitialPhaseSpinBox;
    QDoubleSpinBox *minInitialPhaseSpinBox;
    QDoubleSpinBox *maxFrequencySpinBox;
    QDoubleSpinBox *minFrequencySpinBox;
    QRadioButton *SinRadioButton;
    QRadioButton *CosRadioButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label;
    QCheckBox *LimitHarmonicCheckBox;
    QLabel *label_6;
    QLabel *label_10;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_6;
    QCustomPlot *carSpeedGraphic;
    QLabel *label_34;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_7;
    QCustomPlot *carEnginePRMGraphic;
    QLabel *label_36;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_5;
    QCustomPlot *carFuelLevelGraphic;
    QLabel *label_35;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_8;
    QCustomPlot *carEngineTemperatureGraphic;
    QLabel *label_37;
    QWidget *widget_4;
    QDoubleSpinBox *maxSpeedSpinBox;
    QDoubleSpinBox *minSpeedSpinBox;
    QDoubleSpinBox *maxFuelLevelCarSpinBox;
    QDoubleSpinBox *minFuelLevelCarSpinBox;
    QRadioButton *RandomCarRadioButton;
    QRadioButton *GivenCarRadioButton;
    QCheckBox *LimitCarCheckBox;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QSpinBox *maxRevsSpinBox;
    QSpinBox *minRevsSpinBox;
    QSpinBox *maxEngineTemperatureSpinBox;
    QSpinBox *minEngineTemperatureSpinBox;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *planeAttackAngle;
    QLabel *label_38;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *planeAltitude;
    QLabel *label_39;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *planeFuelLevel;
    QLabel *label_40;
    QWidget *widget_6;
    QRadioButton *RandomPlaneRadioButton;
    QRadioButton *GivenPlaneRadioButton;
    QCheckBox *LimitPlaneCheckBox;
    QDoubleSpinBox *maxAltitudeSpinBox;
    QDoubleSpinBox *minAltitudeSpinBox;
    QDoubleSpinBox *maxFuelLevelPlaneSpinBox;
    QDoubleSpinBox *minFuelLevelPlaneSpinBox;
    QDoubleSpinBox *maxAngleOfAttackSpinBox;
    QDoubleSpinBox *minAngleOfAttackSpinBox;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *stepDoubleSpinBox;
    QLabel *label_11;
    QSpinBox *durationSpinBox;
    QLabel *label_12;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(690, 479);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(690, 450));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 0));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        harmonicFunctionGraphic = new QCustomPlot(tab);
        harmonicFunctionGraphic->setObjectName(QString::fromUtf8("harmonicFunctionGraphic"));
        sizePolicy1.setHeightForWidth(harmonicFunctionGraphic->sizePolicy().hasHeightForWidth());
        harmonicFunctionGraphic->setSizePolicy(sizePolicy1);
        harmonicFunctionGraphic->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(harmonicFunctionGraphic);

        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(317, 360));
        RandomHarmonicRadioButton = new QRadioButton(widget_2);
        RandomHarmonicRadioButton->setObjectName(QString::fromUtf8("RandomHarmonicRadioButton"));
        RandomHarmonicRadioButton->setEnabled(true);
        RandomHarmonicRadioButton->setGeometry(QRect(20, 10, 181, 17));
        RandomHarmonicRadioButton->setMouseTracking(true);
        RandomHarmonicRadioButton->setCheckable(true);
        RandomHarmonicRadioButton->setChecked(true);
        RandomHarmonicRadioButton->setAutoRepeat(false);
        GivenHarmonicRadioButton = new QRadioButton(widget_2);
        GivenHarmonicRadioButton->setObjectName(QString::fromUtf8("GivenHarmonicRadioButton"));
        GivenHarmonicRadioButton->setGeometry(QRect(20, 40, 71, 17));
        GivenHarmonicRadioButton->setMouseTracking(true);
        maxAmplitudeSpinbox = new QDoubleSpinBox(widget_2);
        maxAmplitudeSpinbox->setObjectName(QString::fromUtf8("maxAmplitudeSpinbox"));
        maxAmplitudeSpinbox->setEnabled(false);
        maxAmplitudeSpinbox->setGeometry(QRect(20, 90, 62, 22));
        maxAmplitudeSpinbox->setContextMenuPolicy(Qt::DefaultContextMenu);
        maxAmplitudeSpinbox->setLayoutDirection(Qt::LeftToRight);
        maxAmplitudeSpinbox->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        maxAmplitudeSpinbox->setWrapping(false);
        maxAmplitudeSpinbox->setFrame(true);
        maxAmplitudeSpinbox->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        maxAmplitudeSpinbox->setStepType(QAbstractSpinBox::DefaultStepType);
        minAmplitudeSpinbox = new QDoubleSpinBox(widget_2);
        minAmplitudeSpinbox->setObjectName(QString::fromUtf8("minAmplitudeSpinbox"));
        minAmplitudeSpinbox->setEnabled(false);
        minAmplitudeSpinbox->setGeometry(QRect(20, 120, 62, 22));
        maxInitialPhaseSpinBox = new QDoubleSpinBox(widget_2);
        maxInitialPhaseSpinBox->setObjectName(QString::fromUtf8("maxInitialPhaseSpinBox"));
        maxInitialPhaseSpinBox->setEnabled(false);
        maxInitialPhaseSpinBox->setGeometry(QRect(20, 150, 62, 22));
        minInitialPhaseSpinBox = new QDoubleSpinBox(widget_2);
        minInitialPhaseSpinBox->setObjectName(QString::fromUtf8("minInitialPhaseSpinBox"));
        minInitialPhaseSpinBox->setEnabled(false);
        minInitialPhaseSpinBox->setGeometry(QRect(20, 180, 62, 22));
        maxFrequencySpinBox = new QDoubleSpinBox(widget_2);
        maxFrequencySpinBox->setObjectName(QString::fromUtf8("maxFrequencySpinBox"));
        maxFrequencySpinBox->setEnabled(false);
        maxFrequencySpinBox->setGeometry(QRect(20, 210, 62, 22));
        minFrequencySpinBox = new QDoubleSpinBox(widget_2);
        minFrequencySpinBox->setObjectName(QString::fromUtf8("minFrequencySpinBox"));
        minFrequencySpinBox->setEnabled(false);
        minFrequencySpinBox->setGeometry(QRect(20, 240, 62, 22));
        SinRadioButton = new QRadioButton(widget_2);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(SinRadioButton);
        SinRadioButton->setObjectName(QString::fromUtf8("SinRadioButton"));
        SinRadioButton->setEnabled(false);
        SinRadioButton->setGeometry(QRect(30, 280, 36, 17));
        SinRadioButton->setChecked(true);
        CosRadioButton = new QRadioButton(widget_2);
        buttonGroup->addButton(CosRadioButton);
        CosRadioButton->setObjectName(QString::fromUtf8("CosRadioButton"));
        CosRadioButton->setEnabled(false);
        CosRadioButton->setGeometry(QRect(30, 300, 39, 17));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 90, 31, 22));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 120, 31, 22));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 150, 31, 22));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 180, 31, 22));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 210, 31, 22));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 240, 31, 22));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(140, 160, 121, 16));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 100, 81, 16));
        LimitHarmonicCheckBox = new QCheckBox(widget_2);
        LimitHarmonicCheckBox->setObjectName(QString::fromUtf8("LimitHarmonicCheckBox"));
        LimitHarmonicCheckBox->setGeometry(QRect(210, 10, 91, 17));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 220, 161, 16));
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 290, 61, 16));

        horizontalLayout->addWidget(widget_2, 0, Qt::AlignTop);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget_3 = new QWidget(tab_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        verticalLayout_6 = new QVBoxLayout(widget_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        carSpeedGraphic = new QCustomPlot(widget_7);
        carSpeedGraphic->setObjectName(QString::fromUtf8("carSpeedGraphic"));

        verticalLayout_6->addWidget(carSpeedGraphic);

        label_34 = new QLabel(widget_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_34, 0, Qt::AlignHCenter);


        gridLayout->addWidget(widget_7, 0, 0, 1, 1);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_7 = new QVBoxLayout(widget_8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        carEnginePRMGraphic = new QCustomPlot(widget_8);
        carEnginePRMGraphic->setObjectName(QString::fromUtf8("carEnginePRMGraphic"));

        verticalLayout_7->addWidget(carEnginePRMGraphic);

        label_36 = new QLabel(widget_8);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        sizePolicy.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_36, 0, Qt::AlignHCenter);


        gridLayout->addWidget(widget_8, 0, 1, 1, 1);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        verticalLayout_5 = new QVBoxLayout(widget_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        carFuelLevelGraphic = new QCustomPlot(widget_9);
        carFuelLevelGraphic->setObjectName(QString::fromUtf8("carFuelLevelGraphic"));

        verticalLayout_5->addWidget(carFuelLevelGraphic);

        label_35 = new QLabel(widget_9);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_35, 0, Qt::AlignHCenter);


        gridLayout->addWidget(widget_9, 1, 0, 1, 1);

        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        verticalLayout_8 = new QVBoxLayout(widget_10);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        carEngineTemperatureGraphic = new QCustomPlot(widget_10);
        carEngineTemperatureGraphic->setObjectName(QString::fromUtf8("carEngineTemperatureGraphic"));

        verticalLayout_8->addWidget(carEngineTemperatureGraphic);

        label_37 = new QLabel(widget_10);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        sizePolicy.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(label_37, 0, Qt::AlignHCenter);


        gridLayout->addWidget(widget_10, 1, 1, 1, 1);


        horizontalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(tab_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(320, 360));
        maxSpeedSpinBox = new QDoubleSpinBox(widget_4);
        maxSpeedSpinBox->setObjectName(QString::fromUtf8("maxSpeedSpinBox"));
        maxSpeedSpinBox->setEnabled(false);
        maxSpeedSpinBox->setGeometry(QRect(30, 160, 62, 22));
        maxSpeedSpinBox->setMaximum(1000.000000000000000);
        minSpeedSpinBox = new QDoubleSpinBox(widget_4);
        minSpeedSpinBox->setObjectName(QString::fromUtf8("minSpeedSpinBox"));
        minSpeedSpinBox->setEnabled(false);
        minSpeedSpinBox->setGeometry(QRect(30, 190, 62, 22));
        minSpeedSpinBox->setMaximum(1000.000000000000000);
        maxFuelLevelCarSpinBox = new QDoubleSpinBox(widget_4);
        maxFuelLevelCarSpinBox->setObjectName(QString::fromUtf8("maxFuelLevelCarSpinBox"));
        maxFuelLevelCarSpinBox->setEnabled(false);
        maxFuelLevelCarSpinBox->setGeometry(QRect(30, 100, 62, 22));
        maxFuelLevelCarSpinBox->setMaximum(10000.000000000000000);
        minFuelLevelCarSpinBox = new QDoubleSpinBox(widget_4);
        minFuelLevelCarSpinBox->setObjectName(QString::fromUtf8("minFuelLevelCarSpinBox"));
        minFuelLevelCarSpinBox->setEnabled(false);
        minFuelLevelCarSpinBox->setGeometry(QRect(30, 130, 62, 22));
        minFuelLevelCarSpinBox->setMaximum(10000.000000000000000);
        RandomCarRadioButton = new QRadioButton(widget_4);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(RandomCarRadioButton);
        RandomCarRadioButton->setObjectName(QString::fromUtf8("RandomCarRadioButton"));
        RandomCarRadioButton->setGeometry(QRect(20, 10, 181, 17));
        RandomCarRadioButton->setChecked(true);
        GivenCarRadioButton = new QRadioButton(widget_4);
        buttonGroup_2->addButton(GivenCarRadioButton);
        GivenCarRadioButton->setObjectName(QString::fromUtf8("GivenCarRadioButton"));
        GivenCarRadioButton->setGeometry(QRect(20, 40, 82, 17));
        LimitCarCheckBox = new QCheckBox(widget_4);
        LimitCarCheckBox->setObjectName(QString::fromUtf8("LimitCarCheckBox"));
        LimitCarCheckBox->setGeometry(QRect(210, 10, 91, 17));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(100, 100, 31, 16));
        label_14 = new QLabel(widget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(100, 130, 31, 16));
        label_15 = new QLabel(widget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(100, 160, 31, 16));
        label_16 = new QLabel(widget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(100, 190, 31, 16));
        label_17 = new QLabel(widget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(100, 220, 31, 16));
        label_18 = new QLabel(widget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(100, 250, 31, 16));
        label_19 = new QLabel(widget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(100, 280, 31, 16));
        label_20 = new QLabel(widget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(100, 310, 31, 16));
        label_21 = new QLabel(widget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(160, 110, 111, 21));
        label_22 = new QLabel(widget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(160, 180, 101, 21));
        label_23 = new QLabel(widget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(160, 240, 111, 21));
        label_24 = new QLabel(widget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(150, 290, 161, 21));
        maxRevsSpinBox = new QSpinBox(widget_4);
        maxRevsSpinBox->setObjectName(QString::fromUtf8("maxRevsSpinBox"));
        maxRevsSpinBox->setEnabled(false);
        maxRevsSpinBox->setGeometry(QRect(30, 220, 61, 22));
        maxRevsSpinBox->setMaximum(10000);
        minRevsSpinBox = new QSpinBox(widget_4);
        minRevsSpinBox->setObjectName(QString::fromUtf8("minRevsSpinBox"));
        minRevsSpinBox->setEnabled(false);
        minRevsSpinBox->setGeometry(QRect(30, 250, 61, 22));
        minRevsSpinBox->setMaximum(10000);
        maxEngineTemperatureSpinBox = new QSpinBox(widget_4);
        maxEngineTemperatureSpinBox->setObjectName(QString::fromUtf8("maxEngineTemperatureSpinBox"));
        maxEngineTemperatureSpinBox->setEnabled(false);
        maxEngineTemperatureSpinBox->setGeometry(QRect(30, 280, 61, 22));
        maxEngineTemperatureSpinBox->setMinimum(-99);
        maxEngineTemperatureSpinBox->setMaximum(1000);
        minEngineTemperatureSpinBox = new QSpinBox(widget_4);
        minEngineTemperatureSpinBox->setObjectName(QString::fromUtf8("minEngineTemperatureSpinBox"));
        minEngineTemperatureSpinBox->setEnabled(false);
        minEngineTemperatureSpinBox->setGeometry(QRect(30, 310, 61, 22));
        minEngineTemperatureSpinBox->setMinimum(-99);
        minEngineTemperatureSpinBox->setMaximum(1000);

        horizontalLayout_3->addWidget(widget_4, 0, Qt::AlignTop);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_5 = new QWidget(tab_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_13 = new QWidget(widget_5);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        verticalLayout_2 = new QVBoxLayout(widget_13);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        planeAttackAngle = new QCustomPlot(widget_13);
        planeAttackAngle->setObjectName(QString::fromUtf8("planeAttackAngle"));

        verticalLayout_2->addWidget(planeAttackAngle);

        label_38 = new QLabel(widget_13);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        sizePolicy.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_38, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(widget_13, 0, 1, 1, 1);

        widget_11 = new QWidget(widget_5);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        verticalLayout_3 = new QVBoxLayout(widget_11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        planeAltitude = new QCustomPlot(widget_11);
        planeAltitude->setObjectName(QString::fromUtf8("planeAltitude"));

        verticalLayout_3->addWidget(planeAltitude);

        label_39 = new QLabel(widget_11);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        sizePolicy.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_39, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(widget_11, 0, 0, 1, 1);

        widget_12 = new QWidget(widget_5);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        verticalLayout_4 = new QVBoxLayout(widget_12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        planeFuelLevel = new QCustomPlot(widget_12);
        planeFuelLevel->setObjectName(QString::fromUtf8("planeFuelLevel"));

        verticalLayout_4->addWidget(planeFuelLevel);

        label_40 = new QLabel(widget_12);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        sizePolicy.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_40, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(widget_12, 1, 1, 1, 1);


        horizontalLayout_4->addWidget(widget_5);

        widget_6 = new QWidget(tab_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(320, 360));
        RandomPlaneRadioButton = new QRadioButton(widget_6);
        RandomPlaneRadioButton->setObjectName(QString::fromUtf8("RandomPlaneRadioButton"));
        RandomPlaneRadioButton->setGeometry(QRect(10, 10, 181, 17));
        RandomPlaneRadioButton->setChecked(true);
        GivenPlaneRadioButton = new QRadioButton(widget_6);
        GivenPlaneRadioButton->setObjectName(QString::fromUtf8("GivenPlaneRadioButton"));
        GivenPlaneRadioButton->setGeometry(QRect(10, 40, 82, 17));
        LimitPlaneCheckBox = new QCheckBox(widget_6);
        LimitPlaneCheckBox->setObjectName(QString::fromUtf8("LimitPlaneCheckBox"));
        LimitPlaneCheckBox->setGeometry(QRect(210, 10, 91, 17));
        maxAltitudeSpinBox = new QDoubleSpinBox(widget_6);
        maxAltitudeSpinBox->setObjectName(QString::fromUtf8("maxAltitudeSpinBox"));
        maxAltitudeSpinBox->setEnabled(false);
        maxAltitudeSpinBox->setGeometry(QRect(20, 90, 62, 22));
        maxAltitudeSpinBox->setMaximum(1000000.000000000000000);
        minAltitudeSpinBox = new QDoubleSpinBox(widget_6);
        minAltitudeSpinBox->setObjectName(QString::fromUtf8("minAltitudeSpinBox"));
        minAltitudeSpinBox->setEnabled(false);
        minAltitudeSpinBox->setGeometry(QRect(20, 120, 62, 22));
        minAltitudeSpinBox->setMaximum(100000.000000000000000);
        maxFuelLevelPlaneSpinBox = new QDoubleSpinBox(widget_6);
        maxFuelLevelPlaneSpinBox->setObjectName(QString::fromUtf8("maxFuelLevelPlaneSpinBox"));
        maxFuelLevelPlaneSpinBox->setEnabled(false);
        maxFuelLevelPlaneSpinBox->setGeometry(QRect(20, 150, 62, 22));
        maxFuelLevelPlaneSpinBox->setMaximum(100000.000000000000000);
        minFuelLevelPlaneSpinBox = new QDoubleSpinBox(widget_6);
        minFuelLevelPlaneSpinBox->setObjectName(QString::fromUtf8("minFuelLevelPlaneSpinBox"));
        minFuelLevelPlaneSpinBox->setEnabled(false);
        minFuelLevelPlaneSpinBox->setGeometry(QRect(20, 180, 62, 22));
        minFuelLevelPlaneSpinBox->setMaximum(100000.000000000000000);
        maxAngleOfAttackSpinBox = new QDoubleSpinBox(widget_6);
        maxAngleOfAttackSpinBox->setObjectName(QString::fromUtf8("maxAngleOfAttackSpinBox"));
        maxAngleOfAttackSpinBox->setEnabled(false);
        maxAngleOfAttackSpinBox->setGeometry(QRect(20, 210, 62, 22));
        maxAngleOfAttackSpinBox->setMaximum(1000000.000000000000000);
        minAngleOfAttackSpinBox = new QDoubleSpinBox(widget_6);
        minAngleOfAttackSpinBox->setObjectName(QString::fromUtf8("minAngleOfAttackSpinBox"));
        minAngleOfAttackSpinBox->setEnabled(false);
        minAngleOfAttackSpinBox->setGeometry(QRect(20, 240, 62, 22));
        minAngleOfAttackSpinBox->setMinimum(-10000.000000000000000);
        minAngleOfAttackSpinBox->setMaximum(1000000.000000000000000);
        label_25 = new QLabel(widget_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(90, 90, 47, 13));
        label_26 = new QLabel(widget_6);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(90, 120, 47, 13));
        label_27 = new QLabel(widget_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(90, 150, 47, 13));
        label_28 = new QLabel(widget_6);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(90, 180, 51, 16));
        label_29 = new QLabel(widget_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(90, 210, 47, 13));
        label_30 = new QLabel(widget_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(90, 240, 47, 13));
        label_31 = new QLabel(widget_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(140, 100, 101, 16));
        label_32 = new QLabel(widget_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(140, 170, 121, 16));
        label_33 = new QLabel(widget_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(140, 230, 121, 16));

        horizontalLayout_4->addWidget(widget_6, 0, Qt::AlignTop);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stepDoubleSpinBox = new QDoubleSpinBox(centralwidget);
        stepDoubleSpinBox->setObjectName(QString::fromUtf8("stepDoubleSpinBox"));
        stepDoubleSpinBox->setEnabled(true);
        sizePolicy.setHeightForWidth(stepDoubleSpinBox->sizePolicy().hasHeightForWidth());
        stepDoubleSpinBox->setSizePolicy(sizePolicy);
        stepDoubleSpinBox->setMinimumSize(QSize(70, 15));
        stepDoubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        stepDoubleSpinBox->setDecimals(5);
        stepDoubleSpinBox->setMaximum(100000.000000000000000);
        stepDoubleSpinBox->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        horizontalLayout_2->addWidget(stepDoubleSpinBox);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(30, 15));
        label_11->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_11);

        durationSpinBox = new QSpinBox(centralwidget);
        durationSpinBox->setObjectName(QString::fromUtf8("durationSpinBox"));
        sizePolicy.setHeightForWidth(durationSpinBox->sizePolicy().hasHeightForWidth());
        durationSpinBox->setSizePolicy(sizePolicy);
        durationSpinBox->setMinimumSize(QSize(120, 15));
        durationSpinBox->setMaximum(1000000000);

        horizontalLayout_2->addWidget(durationSpinBox);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(30, 15));

        horizontalLayout_2->addWidget(label_12);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(50, 20));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 690, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        RandomHarmonicRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\260\321\217 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \320\264\320\260\320\275\320\275\321\213\321\205 ", nullptr));
        GivenHarmonicRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\321\213\320\265", nullptr));
        maxAmplitudeSpinbox->setSpecialValueText(QString());
        SinRadioButton->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        CosRadioButton->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\204\320\260\320\267\320\260 (\321\200\320\260\320\264)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\260 (\320\274)", nullptr));
        LimitHarmonicCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\246\320\270\320\272\320\273\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\207\320\260\321\201\321\202\320\276\321\202\320\260 (\321\200\320\260\320\264/\321\201)", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\276\321\200\320\276\321\202\321\213", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\277\320\273\320\270\320\262\320\260", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217", nullptr));
        RandomCarRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\260\321\217 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \320\264\320\260\320\275\320\275\321\213\321\205 ", nullptr));
        GivenCarRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\321\213\320\265", nullptr));
        LimitCarCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\270\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\277\320\273\320\270\320\262\320\260 (\320\273)", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 (\320\272\320\274/\321\207)", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\276\321\200\320\276\321\202\321\213 (\320\276\320\261/\320\274\320\270\320\275)", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217 (\302\260C)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\234\320\260\321\210\320\270\320\275\320\260", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\321\203\320\263\320\276\320\273 \320\260\321\202\320\260\320\272\320\270", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\321\201\320\276\321\202\320\260", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\277\320\273\320\270\320\262\320\260", nullptr));
        RandomPlaneRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\260\321\217 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\217 \320\264\320\260\320\275\320\275\321\213\321\205 ", nullptr));
        GivenPlaneRadioButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\321\213\320\265", nullptr));
        LimitPlaneCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\270\321\202\321\214", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "max", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260 \320\277\320\276\320\273\320\265\321\202\320\260 (\320\274)", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\277\320\273\320\270\320\262\320\260 (\320\273)", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\260\321\202\320\260\320\272\320\270 ( \302\260 )", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\241\320\260\320\274\320\276\320\273\321\221\321\202", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 (\321\201\320\265\320\272)", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\270\320\274\321\203\320\273\321\217\321\206\320\270\320\270 (\321\201\320\265\320\272)", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
