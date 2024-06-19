#include "wina.h"
#include "ui_wina.h"

#include <QMessageBox>
WinA::WinA(Posrednik* posrednik) : Window(posrednik), ui(new Ui::WinA)
{
    ui->setupUi(this);
    ui->textEdit->setPlaceholderText("Введите слова:");
    ui->textEdit->setStyleSheet("background-color: white; color: black;");
}

WinA::~WinA()
{
    delete ui;
}

void WinA::copy(){
    QApplication::clipboard()->clear();
    ui->textEdit->copy();
}

void WinA::paste(){
    ui->textEdit->insertPlainText(QApplication::clipboard()->text());
}

void WinA::clear(){
    QApplication::clipboard()->clear();
    ui->textEdit->setText("");
}

void WinA::replaceSelectedText(){
    ui->textEdit->textCursor().insertText("***");
};

QString WinA::getSelectedText(){
    return ui->textEdit->textCursor().selectedText();
}

void WinA::on_textEdit_textChanged()
{
    if(!ui->textEdit->document()->isEmpty()){
        posrednik->notify(this, "textEditIsNotEmpty");
    }
    else
        posrednik->notify(this, "textEditIsEmpty");
}

void WinA::on_textEdit_selectionChanged()
{
    posrednik->notify(this, "textHighlighted");
}


