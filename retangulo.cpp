#include "retangulo.h"

Retangulo::Retangulo(int b, int a) {
    setBase(b);
    setAltura(a);
    setNome("Retangulo");
}

void Retangulo::setBase(int b) {
        if (b <= 0) {
            cout << "Valor de base incorreto, tente um valor maior que zero!" << endl;
            base = 1;
        } else {
            base = b;
        }
    }
    void Retangulo::setAltura(int a) {
        if (a <= 0) {
            cout << "Valor de altura incorreto, tente um valor maior que zero!" << endl;
            altura = 1;
        } else {
            altura = a;
        }
    }
    void Retangulo::CalculaArea() {
        int area = (base*altura);
        cout << "A area e: " << area << endl;
    }

    int Retangulo::getBase() {
        return base;
    }
    int Retangulo::getAltura() {
        return altura;
    }
