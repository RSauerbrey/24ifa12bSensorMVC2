#include "widget.h"
#include "ui_widget.h"
#include "temperatursensor.h"
#include <QString>

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

Ui::Widget *Widget::getUI()
{
    return ui;
}
