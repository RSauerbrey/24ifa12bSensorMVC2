#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

class View;
class Model;
class Controller
{
private:
    View *view;
    Model *model;
public:
    Controller();
    void action();
};

#endif // CONTROLLER_H
