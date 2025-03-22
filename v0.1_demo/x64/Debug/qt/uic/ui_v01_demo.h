/********************************************************************************
** Form generated from reading UI file 'v01_demo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V01_DEMO_H
#define UI_V01_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_v01_demoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *v01_demoClass)
    {
        if (v01_demoClass->objectName().isEmpty())
            v01_demoClass->setObjectName("v01_demoClass");
        v01_demoClass->resize(600, 400);
        menuBar = new QMenuBar(v01_demoClass);
        menuBar->setObjectName("menuBar");
        v01_demoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(v01_demoClass);
        mainToolBar->setObjectName("mainToolBar");
        v01_demoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(v01_demoClass);
        centralWidget->setObjectName("centralWidget");
        v01_demoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(v01_demoClass);
        statusBar->setObjectName("statusBar");
        v01_demoClass->setStatusBar(statusBar);

        retranslateUi(v01_demoClass);

        QMetaObject::connectSlotsByName(v01_demoClass);
    } // setupUi

    void retranslateUi(QMainWindow *v01_demoClass)
    {
        v01_demoClass->setWindowTitle(QCoreApplication::translate("v01_demoClass", "v01_demo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class v01_demoClass: public Ui_v01_demoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V01_DEMO_H
