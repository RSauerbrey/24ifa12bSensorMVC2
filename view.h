#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include "controller.h"
#include "model.h"

class View: public QObject
{
    Q_OBJECT
protected:
    Model *model;
    Controller *controller;
public:
    View();
    void setModel(Model *model);
    void setController(Controller *controller);
    virtual void update(QString) = 0;
    virtual void notify(QString) = 0;
};

#endif // VIEW_H
