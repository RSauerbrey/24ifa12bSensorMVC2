#include "widget.h"
#include "ui_widget.h"
#include "temperatursensor.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnBeenden, SIGNAL( clicked() ), this, SLOT( beenden() ));
    connect(ui->btnAction, SIGNAL( clicked() ), this, SLOT( action() ));

    dG = new TemperaturSensor;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::beenden()
{
    this->close();
}

void Widget::action()
{

    ui->edtAusgabe->append(QString::fromStdString(dG->getSensorType()));
}
