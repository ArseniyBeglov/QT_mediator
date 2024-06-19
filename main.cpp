// #include "mainwindow.h"

#include <QApplication>
#include "opredposrednik.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WinA wina(nullptr);
    wina.setWindowTitle("окно А");
    WinB winb(nullptr);
    winb.setWindowTitle("окно B");
    WinC winc(nullptr);
    winc.setWindowTitle("окно C");
    WinD wind(nullptr);
    wind.setWindowTitle("окно D");
    OpredPosrednik posrednik(&wina, &winb, &winc, &wind);
    wina.changePosrednik(&posrednik);
    winb.changePosrednik(&posrednik);
    winc.changePosrednik(&posrednik);
    wind.changePosrednik(&posrednik);
    wina.show();
    winb.show();
    winc.show();
    wind.show();
    return a.exec();
}
