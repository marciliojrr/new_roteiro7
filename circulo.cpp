#include "circulo.h"

Circulo::Circulo(float r) {
    setRaio(r);
    setNome("Circulo");
}

void Circulo::setRaio(float r) {
    if (r <= 0) {
            cout << "Valor de raio incorreto, tente um valor maior que zero!" << endl;
            raio = 1;
        } else {
            raio = r;
        }
    }
void Circulo::CalculaArea() {
        float area = PI*(raio*raio);
        cout << "A area e: " << area << endl;
    }

