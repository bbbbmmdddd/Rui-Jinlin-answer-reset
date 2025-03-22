#include "v01_demo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    v01_demo w;
    w.show();
    return a.exec();
}
