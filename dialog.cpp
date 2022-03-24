#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(setPassword()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setPassword()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    if(username == "Admin" && password == "1234" ){
    QMessageBox::information(this,"Вход","Имя пользователя и пароль введены правильно");

   } else{
    QMessageBox::warning(this,"Ошибка входа","Имя или пароль введены неправильно");
    }

}



