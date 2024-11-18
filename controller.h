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
    void setView(View *view);
    void setModel(Model *model);
    void action(QString);
};

#endif // CONTROLLER_H
