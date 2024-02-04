#include "mainwindow.h"
#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Calculator *calculator = new Calculator(&w);

    calculator->setWindowTitle("Calculator");
    calculator->resize(230, 200);

    calculator->show();

    return a.exec();
}
