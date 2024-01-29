#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    qDebug()<<"Name: "<< ui->NameLine->text();
    qDebug()<<"Id: "<< ui->IdLine->text();
    qDebug()<<"Message: "<< ui->MessageBox->toPlainText();
}

