#include "feuchtesensor.h"

FeuchteSensor::FeuchteSensor()
{
    //Erzeuge 10 Zufallswerte
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++ )
    {
        data[i] = (double) (rand() %1001)/10.0;
    }
}

string FeuchteSensor::getSensorType()
{
    return "Feuchte";
}

void FeuchteSensor::fetchData(double d[])
{
    for(int i = 0; i < 10 ; i++ )
        d[i] = data[i];
}

int FeuchteSensor::dataSize()
{
    return 10;
}
