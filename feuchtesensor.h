#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H

#include "datagate.h"

class FeuchteSensor : public DataGate
{
private:
    double data[10];
public:
    FeuchteSensor();
    string getSensorType();
    void fetchData(double d[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H
