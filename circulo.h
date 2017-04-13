#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "figgeometrica.h"
#define PI 3.14

class Circulo: public FiguraGeometrica {

private:
    float raio;

public:
    Circulo (float r);
    void setRaio(float);
    virtual void CalculaArea();
    float getRaio();
};
#endif // CIRCULO_H_INCLUDED
