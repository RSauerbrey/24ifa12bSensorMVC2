#ifndef MYVIEW1_H
#define MYVIEW1_H

#include <QObject>
#include "view.h"
#include "widget.h"

class MyView1 : public View
{
private:
    Widget *widget;
public:
    MyView1();
    ~MyView1();
    void update();
    void notify();
};

#endif // MYVIEW1_H
