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
    double werte[100];
    QString str;
    dG->fetchData(werte);
    for(int i = 0 ; i < dG->dataSize(); i++)
       ui->edtAusgabe->append(str.number( werte[i] ));
}
