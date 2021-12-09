#include "keyboard.h"
#include "ui_keyboard.h"

keyboard::keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keyboard)
{
    ui->setupUi(this);
}

keyboard::~keyboard()
{
    qDebug()<<ui->lineEdit->text();
    delete ui;

}

void keyboard::on_pushButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton->text());
}


void keyboard::on_pushButton_2_clicked()
{

getdata();
this->accept();
}

QString keyboard::getdata()
{
    return(ui->lineEdit->text());
}


void keyboard::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_3->text());

}


void keyboard::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_4->text());

}


void keyboard::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_5->text());

}


void keyboard::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_6->text());

}

