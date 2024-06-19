#ifndef WIND_H
#define WIND_H

#include <QWidget>
#include "posrednik.h"
namespace Ui {
class WinD;
}

class WinD : public Window
{
    Q_OBJECT

public:
    WinD(Posrednik* posrednik);
    ~WinD();
    QString getBadWords();

private:
    Ui::WinD *ui;
};

#endif // WIND_H
