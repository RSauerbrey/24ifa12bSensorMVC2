#include "myview1.h"
#include "ui_widget.h"
#include <QObject>

MyView1::MyView1()
{
    widget = new Widget;
    widget->show();
    connect(widget->getUI()->btnAddSensor, SIGNAL( clicked() ), this, SLOT( addsensor() ));
    connect(widget->getUI()->btnBeenden, SIGNAL( clicked() ), this, SLOT( beenden() ));
    connect(widget->getUI()->btnAction, SIGNAL( clicked() ), this, SLOT( action() ));
    connect(widget->getUI()->btnListSensors, SIGNAL( clicked() ), this, SLOT( listsensors() ));

}

MyView1::~MyView1()
{
    delete widget;
}


void MyView1::update(QString)
{

}

void MyView1::notify(QString msg)
{
    widget->getUI()->edtAusgabe->clear();
    if( msg == "GET_SENSOR_LIST")
    {
        widget->getUI()->edtAusgabe->append( model->getState() );
    }
    else
        widget->getUI()->edtAusgabe->append(msg);
}

void MyView1::addsensor()
{
    if(widget->getUI()->btnTemperatur->isChecked())
        controller->action("ADD_TEMP");
    else if(widget->getUI()->btnFeuchte->isChecked())
        controller->action("ADD_FEUCHTE");
}

void MyView1::beenden()
{
    widget->close();
}

void MyView1::action()
{

    if(widget->getUI()->btnTemperatur->isChecked())
        controller->action("REMOVE_TEMP");
    else if(widget->getUI()->btnFeuchte->isChecked())
        controller->action("REMOVE_FEUCHTE");
}

void MyView1::listsensors()
{
    controller->action("LIST_SENSORS");
}
