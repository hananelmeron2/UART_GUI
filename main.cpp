#include "mainwindow.h"
#include <QApplication>

// main class for the uart gui app.
//author: hananel meron.

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
