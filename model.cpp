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
        double values[100];

        foreach(d, dG )
        {
            d->fetchData(values);
            state.append(d->getSensorType()+"\n");
            for(int i = 0 ; i < d->dataSize(); i++)
                state.append((QString::number(values[i])) + "\n");
        }
        msg = "GET_SENSOR_LIST";

    }
    view->notify(msg);
}

QString Model::getState()
{
    return state;
}
