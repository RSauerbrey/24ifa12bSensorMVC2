#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class View;
class Model
{
private:
    View *view;
    Sensoren...
public:
    Model();
    void update();
    QString getState();
};

#endif // MODEL_H
