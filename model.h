#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "datagate.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"

class View;
class Model
{
private:
    View *view;
    QVector <DataGate*> dG; //Liste von Sensoren (Vektor)
    QString state;
public:
    Model();
    void setView(View *view);
    void update(QString);
    QString getState();
};

#endif // MODEL_H
