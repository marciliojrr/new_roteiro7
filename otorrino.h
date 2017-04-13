#ifndef OTORRINO_H_INCLUDED
#define OTORRINO_H_INCLUDED
#include "oftalmologista.h"

class Otorrino: public Medico {
private:
   string nome, espec, atend;
   float altura, peso;

public:
    Otorrino (string n, float a, float p);
    string getEspec();
    string getAtend();
};
#endif // OTORRINO_H_INCLUDED
