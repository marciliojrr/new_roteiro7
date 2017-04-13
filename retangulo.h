#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED
#include "figgeometrica.h"

class Retangulo: public FiguraGeometrica {

private:
    int base, altura;

public:
    Retangulo(int b, int a);

    void setBase(int b);
    void setAltura(int a);

    virtual void CalculaArea();

    int getBase();
    int getAltura();
};
#endif // RETANGULO_H_INCLUDED
