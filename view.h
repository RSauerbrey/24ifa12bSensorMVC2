#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include "controller.h"
#include "model.h"

class View
{
protected:
    Model *model;
    Controller *controller;
public:
    View();
    void update();
    void notify();
};

#endif // VIEW_H
