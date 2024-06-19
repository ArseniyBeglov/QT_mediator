#ifndef WINB_H
#define WINB_H

#include <QWidget>
#include "posrednik.h"
namespace Ui {
class WinB;
}

class WinB : public Window
{
    Q_OBJECT

public:
    WinB(Posrednik* posrednik);
    ~WinB();
    void setPasteButtonEnabled(bool state);
private slots:
    void on_copyButton_clicked();
    void on_pasteButton_clicked();

private:
    Ui::WinB *ui;
};

#endif // WINB_H
