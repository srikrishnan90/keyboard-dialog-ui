#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect (ui->lineEdit, SIGNAL(focusInEvent()), this, SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    QString er = "data";
    key = new keyboard(this);
    key->setModal(true);
    key->setData(er);
    key->exec();
    QString foo = key->getdata();
    ui->lineEdit->setText(foo);
    //qDebug()<<foo;

}

void MainWindow::on_pushButton_2_clicked()
{
    key = new keyboard(this);
    key->setModal(true);
    key->exec();
    QString foo = key->getdata();
    ui->lineEdit_2->setText(foo);
    //qDebug()<<foo;

}

