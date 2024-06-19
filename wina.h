#ifndef WINA_H
#define WINA_H

#include <QWidget>
#include "posrednik.h"

namespace Ui {
class WinA;
}

class WinA : public Window
{
    Q_OBJECT

public:
    WinA(Posrednik *posrednik);
    ~WinA();
    void copy();
    void paste();
    void clear();
    QString getSelectedText();
    void replaceSelectedText();

private slots:
    void on_textEdit_textChanged();
    void on_textEdit_selectionChanged();

private:
    Ui::WinA *ui;
};




#endif // WINA_H
