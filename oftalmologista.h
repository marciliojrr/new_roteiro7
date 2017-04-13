#ifndef OFTALMOLOGISTA_H_INCLUDED
#define OFTALMOLOGISTA_H_INCLUDED
#include "cirurgiao.h"

class Oftalmo: public Medico {
private:
   string nome, espec, atend;
   float altura, peso;

public:
    Oftalmo (string n, float a, float p);
    //void setEspec (string e);
    string getEspec();
    string getAtend();
};
#endif // OFTALMOLOGISTA_H_INCLUDED
