#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include "figgeometrica.h"

class Triangulo: public FiguraGeometrica {

private:
    int base, altura;

public:
    Triangulo(int b, int a);

    void setBase(int b);
    void setAltura(int a);

    virtual void CalculaArea();

    int getBase();
    int getAltura();
};
#endif // TRIANGULO_H_INCLUDED
