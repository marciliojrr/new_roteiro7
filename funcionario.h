#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Funcionario {

private:
    int mat;
    string nome;
    float sal;

public:
    Funcionario(){}
    Funcionario (int m, string n, float s);
    void setMat(int m);
    void setNome (string n);
    void setSal(float s);
    int getMat();
    string getNome();
    float getSal();
};
#endif // FUNCIONARIO_H_INCLUDED
