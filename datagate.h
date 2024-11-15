#ifndef DATAGATE_H
#define DATAGATE_H
#include <iostream>
using namespace std;

class DataGate
{
public:
    DataGate();
    virtual string getSensorType() = 0;
    virtual void fetchData(double d[]) = 0;
    virtual int dataSize() = 0;
};

#endif // DATAGATE_H
