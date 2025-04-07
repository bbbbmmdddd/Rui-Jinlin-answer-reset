#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_v01_demo.h"

class v01_demo : public QMainWindow
{
    Q_OBJECT

public:
    v01_demo(QWidget *parent = nullptr);
    ~v01_demo();

private:
    Ui::v01_demoClass ui;
    private slots:void Enter_button();
    private slots:void banben();
};
