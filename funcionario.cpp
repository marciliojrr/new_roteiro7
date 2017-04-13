#include "funcionario.h"

Funcionario::Funcionario(int m, string n, float s) {
    setMat(m);
    setNome(n);
    setSal(s);
}
void Funcionario::setMat(int m) {
    mat = m;
}
void Funcionario::setNome(string n) {
    nome = n;
}
void Funcionario::setSal(float s) {
    sal = s;
}
int Funcionario::getMat() {
    return mat;
}
string Funcionario::getNome() {
    return nome;
}
float Funcionario::getSal() {
    return sal;
}
