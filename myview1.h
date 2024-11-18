#ifndef MYVIEW1_H
#define MYVIEW1_H

#include <QObject>
#include "view.h"
#include "widget.h"


class MyView1 : public View
{
    Q_OBJECT
private:
    Widget *widget;
public:
    MyView1();
    ~MyView1();

    void update(QString);
    void notify(QString);
public slots:
    void addsensor();
    void beenden();
    void action();
    void listsensors();
};

#endif // MYVIEW1_H
