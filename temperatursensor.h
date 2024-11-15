#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include "datagate.h"

class TemperaturSensor : public DataGate
{
private:
    double data[10];
public:
    TemperaturSensor();
    string getSensorType();
    void fetchData(double d[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H
