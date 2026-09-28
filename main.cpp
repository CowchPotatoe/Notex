#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Set the application icon.
    a.setWindowIcon(QIcon(":/bambuu.png"));
    a.setDesktopFileName("Bambuu");
    MainWindow w;
    w.show();
    return QApplication::exec();
}
