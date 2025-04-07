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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_v01_demoClass
{
public:
    QAction *about;
    QAction *banben;
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *v01_demoClass)
    {
        if (v01_demoClass->objectName().isEmpty())
            v01_demoClass->setObjectName("v01_demoClass");
        v01_demoClass->setEnabled(true);
        v01_demoClass->resize(1076, 436);
        QFont font;
        font.setUnderline(false);
        font.setKerning(true);
        v01_demoClass->setFont(font);
        about = new QAction(v01_demoClass);
        about->setObjectName("about");
        banben = new QAction(v01_demoClass);
        banben->setObjectName("banben");
        centralWidget = new QWidget(v01_demoClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 10, 711, 41));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setLineWidth(10);
        label->setMidLineWidth(10);
        label->setTextFormat(Qt::TextFormat::AutoText);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(420, 140, 221, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 150, 51, 41));
        QFont font2;
        font2.setPointSize(15);
        font2.setUnderline(false);
        font2.setKerning(true);
        label_2->setFont(font2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 240, 181, 51));
        pushButton->setFont(font2);
        v01_demoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(v01_demoClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1076, 33));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        v01_demoClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(v01_demoClass);
        statusBar->setObjectName("statusBar");
        v01_demoClass->setStatusBar(statusBar);
        toolBar = new QToolBar(v01_demoClass);
        toolBar->setObjectName("toolBar");
        v01_demoClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addAction(banben);
        menu->addAction(about);
        toolBar->addSeparator();
        toolBar->addAction(banben);
        toolBar->addAction(about);

        retranslateUi(v01_demoClass);
        QObject::connect(about, SIGNAL(triggered()), v01_demoClass, SLOT(Enter_button()));
        QObject::connect(banben, SIGNAL(triggered()), v01_demoClass, SLOT(banben()));

        QMetaObject::connectSlotsByName(v01_demoClass);
    } // setupUi

    void retranslateUi(QMainWindow *v01_demoClass)
    {
        v01_demoClass->setWindowTitle(QCoreApplication::translate("v01_demoClass", "\347\221\236\351\207\221\346\236\227\347\255\224\351\242\230 \351\207\215\347\275\256 v0.1", nullptr));
        about->setText(QCoreApplication::translate("v01_demoClass", "\344\273\223\345\272\223\345\234\260\345\235\200", nullptr));
        banben->setText(QCoreApplication::translate("v01_demoClass", "\347\211\210\346\234\254", nullptr));
        label->setText(QCoreApplication::translate("v01_demoClass", "\346\254\242\350\277\216\346\235\245\345\210\260\347\221\236\351\207\221\346\236\227\347\255\224\351\242\230_demo v0.1!", nullptr));
        label_2->setText(QCoreApplication::translate("v01_demoClass", "\347\255\224\346\241\210:", nullptr));
        pushButton->setText(QCoreApplication::translate("v01_demoClass", "\346\217\220\344\272\244", nullptr));
        menu->setTitle(QCoreApplication::translate("v01_demoClass", "\345\205\263\344\272\216", nullptr));
        menu_2->setTitle(QCoreApplication::translate("v01_demoClass", "\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("v01_demoClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class v01_demoClass: public Ui_v01_demoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V01_DEMO_H
