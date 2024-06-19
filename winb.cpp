#include "winb.h"
#include "ui_winb.h"

WinB::WinB(Posrednik* posrednik) : Window(posrednik), ui(new Ui::WinB)
{
    ui->setupUi(this);
    ui->pasteButton->setDisabled(QApplication::clipboard()->text().isEmpty());
}

WinB::~WinB()
{
    delete ui;
}

void WinB::on_copyButton_clicked()
{
    posrednik->notify(this, "copyButtonClicked");
    ui->pasteButton->setDisabled(QApplication::clipboard()->text().isEmpty());
}

void WinB::on_pasteButton_clicked()
{
    posrednik->notify(this, "pasteButtonClicked");
}

void WinB::setPasteButtonEnabled(bool state){
    ui->pasteButton->setEnabled(state);
}
