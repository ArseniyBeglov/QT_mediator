#ifndef WINC_H
#define WINC_H

#include <QWidget>
#include "posrednik.h"
namespace Ui {
class WinC;
}

class WinC : public Window
{
    Q_OBJECT

public:
    WinC(Posrednik* posrednik);
    ~WinC();
    void setClearButtonEnabled(bool state);

private slots:
    void on_clearButton_clicked();

private:
    Ui::WinC *ui;
};

#endif // WINC_H
