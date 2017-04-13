#include "consultor.h"

Consultor::Consultor(int m, string n, float s) {
    setMat(m);
    setNome(n);
    setSal(s);
}
void Consultor::setSal(float s) {
    s = (110/100)*s;
    sal = s;
}
void Consultor::setSalario() {
    sal = sal+0.1*sal;
}
float Consultor::getSal() {
    return sal;
}
float Consultor::getSalario() {
    return sal;
}
