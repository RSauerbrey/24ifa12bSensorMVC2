#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnBeenden, SIGNAL( clicked() ), this, SLOT( beenden() ));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::beenden()
{
    this->close();
}
