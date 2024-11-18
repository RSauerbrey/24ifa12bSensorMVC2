#include "model.h"
#include "view.h"

Model::Model() {}

void Model::setView(View *view)
{
    this->view = view;
}

void Model::update(QString str)
{
    QString msg;
    if(str == "ADD_TEMP")
    {
        dG.append(new TemperaturSensor);
        msg = "TEMP_SENSOR_ADDED";
    }
    else if(str == "ADD_FEUCHTE")
    {
        dG.append(new FeuchteSensor);
        msg = "FEUCHTE_SENSOR_ADDED";
    }
    else if(str == "LIST_SENSORS")
    {
        state.clear();
        DataGate *d;
        foreach(d, dG )
            state.append(d->getSensorType()+"\n");
        msg = "GET_SENSOR_LIST";

    }
    view->notify(msg);
}

QString Model::getState()
{
    return state;
}
