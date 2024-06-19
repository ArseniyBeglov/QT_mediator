#ifndef OPREDPOSREDNIK_H
#define OPREDPOSREDNIK_H
#include <QApplication>
#include <QVector>
#include "posrednik.h"
#include "wina.h"
#include "winb.h"
#include "winc.h"
#include "wind.h"
class OpredPosrednik : public Posrednik
{
public:
    OpredPosrednik(WinA* windowA, WinB* windowB, WinC* windowC, WinD* windowD);

    void notify(Window* sender, QString event) override;

private:
    WinA* windowA;
    WinB* windowB;
    WinC* windowC;
    WinD* windowD;
};
#endif // OPREDPOSREDNIK_H
