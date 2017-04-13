#ifndef FIGGEOMETRICA_H_INCLUDED
#define FIGGEOMETRICA_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class FiguraGeometrica {

private:
    std::string nome;

public:
    void setNome(std::string);
    std::string getNome(){ return nome; }
    virtual void CalculaArea() = 0;
};
#endif // FIGGEOMETRICA_H_INCLUDED
