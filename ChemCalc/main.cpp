#include "mainwindow.h"

#include <QApplication>
#include <QLineEdit>
#include <QRadioButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.hideMoreParams();
    w.show();
    return a.exec();
}
