#include "myview1.h"

MyView1::MyView1()
{
    widget = new Widget;
    widget->show();
}

MyView1::~MyView1()
{
    delete widget;
}

void MyView1::update()
{

}

void MyView1::notify()
{

}
