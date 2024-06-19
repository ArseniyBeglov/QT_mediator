#ifndef POSREDNIK_H
#define POSREDNIK_H

#include <QString>
#include <QClipboard>
#include <QWidget>
class Window;
class Posrednik{
public:
    virtual void notify(Window* sender, QString event) = 0;
};

class Window : public QWidget {
    Q_OBJECT
public:
    Window(Posrednik* posrednik);
    void changePosrednik(Posrednik* posrednik);

protected:
    Posrednik* posrednik;
};
#endif // POSREDNIK_H
