#include "wind.h"
#include "ui_wind.h"

WinD::WinD(Posrednik* posrednik) : Window(posrednik), ui(new Ui::WinD)
{
    ui->setupUi(this);
    ui->textEdit->setText("ban");
    ui->textEdit->setStyleSheet("background-color: white; color: black;");
}

WinD::~WinD()
{
    delete ui;
}

QString WinD::getBadWords(){
    return ui->textEdit->toPlainText();
};
