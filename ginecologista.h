#ifndef GINECOLOGISTA_H_INCLUDED
#define GINECOLOGISTA_H_INCLUDED
#include "otorrino.h"

class Ginecologista: public Medico {
private:
   string nome, espec, atend;
   float altura, peso;

public:
    Ginecologista (string n, float a, float p);
    string getEspec();
    string getAtend();
};
#endif // GINECOLOGISTA_H_INCLUDED
