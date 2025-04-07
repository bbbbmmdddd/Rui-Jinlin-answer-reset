#include "v01_demo.h"
#include "ui_v01_demo.h"
#include <QDesktopServices>
#include <QSettings>
#include <QString>
#include <QDebug>
#include <QProcess>

QString banbenhao = "v0.1重置版(原版本2.0.1)";
QString gengxinriqi = "2025.3.23";

v01_demo::v01_demo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

v01_demo::~v01_demo(){
    //delete ui;
}
void v01_demo::Enter_button(){
    const QUrl regUrl(QLatin1String("https://github.com/bbbbmmdddd/Rui-Jinlin-answer-reset"));
    QDesktopServices::openUrl(regUrl);
}

void v01_demo::banben() {
   /* QProcess process;
    QString exePath = "D:/瑞金林答题_重置版/v0.1_demo/draw_open.exe";
    process.start(exePath);*/
    QProcess* process = new QProcess(this);
    process->start("./draw_open.exe");
}