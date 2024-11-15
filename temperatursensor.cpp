#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor()
{
    //Erzeuge 10 Zufallswerte
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++ )
    {
        data[i] = (double) (-40.0 + rand() %1001)/10.0;
    }
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double d[])
{
    for(int i = 0; i < 10 ; i++ )
        d[i] = data[i];
}

int TemperaturSensor::dataSize()
{
    return 10;
}
