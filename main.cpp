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

    return a.exec();
}
