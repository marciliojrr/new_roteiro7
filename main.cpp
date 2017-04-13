#include "figgeometrica.h"
#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"

int main () {
    int opcao = 0;
    int b, a;
    float r;

    while (opcao != 4) {
    cout << "Digite a opcao desejada para calcular sua area:" << endl
    << "- Retangulo [1]" << endl
    << "- Triangulo [2]" << endl
    << "- Circulo   [3]" << endl
    << "- Sair      [4]" << endl
    << endl <<
    ">> ";
    cin >> opcao;
    switch(opcao) {
    case 1:
        cout << "Digite o valor da base: ";
        cin >> b;
        while (b <= 0) {
            cout << "Valor de base invalida!";
            cin >> b;
        }
        cout << "Digite o valor da altura: ";
        cin >> a;
        while (a <= 0) {
            cout << "Valor de altura invalido!";
            cin >> a;
        }
        break;
    case 2:
        cout << "Digite o valor da base: ";
        cin >> b;
        while (b <= 0) {
            cout << "Valor de base invalida!";
            cin >> b;
        }
        cout << "Digite o valor da altura: ";
        cin >> a;
        while (a <= 0) {
            cout << "Valor de altura invalido!";
            cin >> a;
        }
        break;
    case 3:
        cout << "Digite o valor do raio: ";
        cin >> r;
        while (r <= 0) {
            cout << "Valor de raio invalida!";
            cin >> r;
        }
        break;
    }
    if (opcao == 1) {
        Retangulo retang(b, a);
        retang.CalculaArea();
        cout << "A figura e um: " << retang.getNome() << endl;
        }
    if (opcao == 2) {
        Triangulo triang(b, a);
        triang.CalculaArea();
        cout << "A figura e um: " << triang.getNome() << endl;
        }
    if (opcao == 3) {
        Circulo circ(r);
        circ.CalculaArea();
        cout << "A figura e um: " << circ.getNome() << endl;
        }
    }
    return 0;
}

