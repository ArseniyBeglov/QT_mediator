#include "winc.h"
#include "ui_winc.h"

WinC::WinC(Posrednik* posrednik) : Window(posrednik), ui(new Ui::WinC)
{
    ui->setupUi(this);
    ui->clearButton->setDisabled(true);
}

WinC::~WinC()
{
    delete ui;
}

void WinC::on_clearButton_clicked()
{
    posrednik->notify(this, "clearButtonClicked");
}

void WinC::setClearButtonEnabled(bool state){
    ui->clearButton->setEnabled(state);
}
