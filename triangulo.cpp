#include "triangulo.h"

Triangulo::Triangulo(int b, int a) {
    setBase(b);
    setAltura(a);
    setNome("Triangulo");
}
void Triangulo::setBase(int b) {
        if (b <= 0) {
            cout << "Valor de base incorreto, tente um valor maior que zero!" << endl;
            base = 1;
        } else {
            base = b;
        }
    }
    void Triangulo::setAltura(int a) {
        if (a <= 0) {
            cout << "Valor de altura incorreto, tente um valor maior que zero!" << endl;
            altura = 1;
        } else {
            altura = a;
        }
    }
    void Triangulo::CalculaArea() {
        int area = (base*altura)/2;
        cout << "A area e: " << area << endl;
    }

    int Triangulo::getBase() {
        return base;
    }
    int Triangulo::getAltura() {
        return altura;
    }
