#ifndef CONSULTOR_H_INCLUDED
#define CONSULTOR_H_INCLUDED
#include "funcionario.h"

class Consultor: public Funcionario {

private:
    int mat;
    string nome;
    float sal;

public:
    Consultor (int m, string n, float s);
    void setSal(float s);
    void setSalario();
    float getSal();
    float getSalario();
};
#endif // CONSULTOR_H_INCLUDED
