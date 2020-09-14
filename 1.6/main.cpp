
#include "Mainwindow.h"
#include <QApplication>
//#include <math.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setFixedSize(500,500);
    w.setWindowTitle("计算器");
    w.myLayout();
    return a.exec();
}
