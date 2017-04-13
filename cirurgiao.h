#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED
#include "medico.h"

class Cirurgiao: public Medico {
private:
   string nome, espec, atend;
   float altura, peso;

public:
    Cirurgiao (string n, float a, float p);
    //void setEspec (string e);
    string getEspec();
    string getAtend();

};
#endif // CIRURGIAO_H_INCLUDED
