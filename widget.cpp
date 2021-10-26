#include "Client.h"
#include "ui_widget.h"

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    connect(ui->pBtn_close,&QAbstractButton::clicked,this,&QWidget::close );
    connect(clientSocket, &QIODevice::readyRead,this,&Client::readMessage);
}

Client::~Client()
{
    delete ui;
}

void Client::requestMessage()
{
    qDebug()<<" requestMessage() comienza";
}

void Client::readMessage()
{
    qDebug()<<"readMessage() comienza";
}

void Client::showError()
{
    qDebug()<<"showError() comienza";
}



//void Widget::on_pBtn_close_clicked()
//{
//    qDebug()<<" iniciando on_pBtn_close_clicked()   ";
//    close();
//}

