#include "widget.h"
#include "controller.h"
#include "model.h"
#include "view.h"
#include "myview1.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View *v = new MyView1;

    Controller * c = new Controller;
    Model *m = new Model;
    v->setController(c);
    v->setModel(m);
    c->setModel(m);
    c->setView(v);
    m->setView(v);

    return a.exec();
}
