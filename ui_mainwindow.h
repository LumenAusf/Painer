/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "area.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabImage;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QPushButton *PBCircle;
    QPushButton *PBLine;
    QPushButton *PBFill;
    QPushButton *PBBrush;
    QPushButton *PBFillAll;
    QPushButton *PBRectangle;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tabResize;
    QWidget *tabBrush;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_6;
    QPushButton *PBLColor;
    QWidget *widget_3;
    QGridLayout *gridLayout_7;
    QPushButton *PBRColor;
    QPushButton *PBChangeColor;
    QWidget *tabFile;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *PBSaveAs;
    QPushButton *PBOpen;
    QPushButton *PBSave;
    QPushButton *PBAbout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    Area *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(835, 655);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(16777215, 150));
        tabImage = new QWidget();
        tabImage->setObjectName(QStringLiteral("tabImage"));
        horizontalLayout = new QHBoxLayout(tabImage);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(tabImage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        PBCircle = new QPushButton(groupBox);
        PBCircle->setObjectName(QStringLiteral("PBCircle"));

        gridLayout_5->addWidget(PBCircle, 0, 1, 1, 1);

        PBLine = new QPushButton(groupBox);
        PBLine->setObjectName(QStringLiteral("PBLine"));

        gridLayout_5->addWidget(PBLine, 0, 2, 1, 1);

        PBFill = new QPushButton(groupBox);
        PBFill->setObjectName(QStringLiteral("PBFill"));

        gridLayout_5->addWidget(PBFill, 1, 1, 1, 1);

        PBBrush = new QPushButton(groupBox);
        PBBrush->setObjectName(QStringLiteral("PBBrush"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PBBrush->sizePolicy().hasHeightForWidth());
        PBBrush->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(PBBrush, 0, 0, 2, 1);

        PBFillAll = new QPushButton(groupBox);
        PBFillAll->setObjectName(QStringLiteral("PBFillAll"));

        gridLayout_5->addWidget(PBFillAll, 2, 0, 1, 3);

        PBRectangle = new QPushButton(groupBox);
        PBRectangle->setObjectName(QStringLiteral("PBRectangle"));

        gridLayout_5->addWidget(PBRectangle, 1, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tabImage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabResize = new QWidget();
        tabResize->setObjectName(QStringLiteral("tabResize"));
        tabWidget_2->addTab(tabResize, QString());
        tabBrush = new QWidget();
        tabBrush->setObjectName(QStringLiteral("tabBrush"));
        tabWidget_2->addTab(tabBrush, QString());

        gridLayout_2->addWidget(tabWidget_2, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tabImage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_6 = new QGridLayout(widget_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, -1, 0, -1);
        PBLColor = new QPushButton(widget_2);
        PBLColor->setObjectName(QStringLiteral("PBLColor"));
        sizePolicy.setHeightForWidth(PBLColor->sizePolicy().hasHeightForWidth());
        PBLColor->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(PBLColor, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(groupBox_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_7 = new QGridLayout(widget_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, -1, 0, -1);
        PBRColor = new QPushButton(widget_3);
        PBRColor->setObjectName(QStringLiteral("PBRColor"));
        sizePolicy.setHeightForWidth(PBRColor->sizePolicy().hasHeightForWidth());
        PBRColor->setSizePolicy(sizePolicy);

        gridLayout_7->addWidget(PBRColor, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_3);

        PBChangeColor = new QPushButton(groupBox_3);
        PBChangeColor->setObjectName(QStringLiteral("PBChangeColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PBChangeColor->sizePolicy().hasHeightForWidth());
        PBChangeColor->setSizePolicy(sizePolicy1);
        PBChangeColor->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(PBChangeColor);


        horizontalLayout->addWidget(groupBox_3);

        tabWidget->addTab(tabImage, QString());
        tabFile = new QWidget();
        tabFile->setObjectName(QStringLiteral("tabFile"));
        tabFile->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(tabFile);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(20);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 5, 1, 1);

        PBSaveAs = new QPushButton(tabFile);
        PBSaveAs->setObjectName(QStringLiteral("PBSaveAs"));
        sizePolicy1.setHeightForWidth(PBSaveAs->sizePolicy().hasHeightForWidth());
        PBSaveAs->setSizePolicy(sizePolicy1);
        PBSaveAs->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(PBSaveAs, 0, 3, 1, 1);

        PBOpen = new QPushButton(tabFile);
        PBOpen->setObjectName(QStringLiteral("PBOpen"));
        sizePolicy1.setHeightForWidth(PBOpen->sizePolicy().hasHeightForWidth());
        PBOpen->setSizePolicy(sizePolicy1);
        PBOpen->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(PBOpen, 0, 1, 1, 1);

        PBSave = new QPushButton(tabFile);
        PBSave->setObjectName(QStringLiteral("PBSave"));
        sizePolicy1.setHeightForWidth(PBSave->sizePolicy().hasHeightForWidth());
        PBSave->setSizePolicy(sizePolicy1);
        PBSave->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(PBSave, 0, 2, 1, 1);

        PBAbout = new QPushButton(tabFile);
        PBAbout->setObjectName(QStringLiteral("PBAbout"));
        sizePolicy1.setHeightForWidth(PBAbout->sizePolicy().hasHeightForWidth());
        PBAbout->setSizePolicy(sizePolicy1);
        PBAbout->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(PBAbout, 0, 4, 1, 1);

        tabWidget->addTab(tabFile, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 815, 479));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, -1, -1);
        widget = new Area(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        tabWidget->raise();
        tabWidget->raise();
        tabWidget->raise();
        tabWidget->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        scrollArea->raise();
        tabWidget->raise();
        widget->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Painter v1.0", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        PBCircle->setText(QApplication::translate("MainWindow", "Circle", Q_NULLPTR));
        PBLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        PBFill->setText(QApplication::translate("MainWindow", "Fill", Q_NULLPTR));
        PBBrush->setText(QApplication::translate("MainWindow", "Brush", Q_NULLPTR));
        PBFillAll->setText(QApplication::translate("MainWindow", "Fill All", Q_NULLPTR));
        PBRectangle->setText(QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Properties", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabResize), QApplication::translate("MainWindow", "Resize", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabBrush), QApplication::translate("MainWindow", "Brush", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Color", Q_NULLPTR));
        PBLColor->setText(QString());
        PBRColor->setText(QString());
        PBChangeColor->setText(QApplication::translate("MainWindow", "Change Color", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabImage), QApplication::translate("MainWindow", "Image", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PBSaveAs->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save file As 	(Ctrl + Shift + S)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PBSaveAs->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PBOpen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Open Image 	(Ctrl + O)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PBOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PBSave->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save Image	(Ctrl + S)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PBSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PBAbout->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>It`s only about	(Ctrl + H)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PBAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFile), QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
