#include "medico.h"
#include "cirurgiao.h"
#include "oftalmologista.h"
#include "otorrino.h"
#include "ginecologista.h"

int main () {
    string n, e;
    float a, p;
    int opcao;
    cout << "O programa funciona da seguinte maneira: Digite apenas o primeiro nome e para numeros, separe com '.' e nao ','" << endl << endl;
    while (opcao != 4) {
        cout << "Digite a opcao correspondente a informacao que deseja inserir:" <<
        endl << "Medico          [1]" <<
        endl << "Cirurgiao       [2]" <<
        endl << "Oftalmologista  [3]" <<
        endl << "Otorrino        [4]" <<
        endl << "Ginecologista   [5]" <<
        endl << "Sair            [6]" <<
        endl << ">> ";
        cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            /*Não se pode chamar o construtor dentro de um switch se houver mais de 1 case

            Medico med(n, a, p);
            cout << endl << endl;
            cout << "Nome: " << med.getNome() <<
            endl << "Altura: " << med.getAltura() <<
            endl << "Peso: " << med.getPeso() << endl << endl;*/
            break;
        case 2:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            /*Cirurgiao ciru(n, a, p, e);
            cout << endl << endl;
            cout << "Nome: " << ciru.getNome() <<
            endl << "Altura: " << ciru.getAltura() <<
            endl << "Peso: " << ciru.getPeso() <<
            endl << "Especializacao: " << ciru.getEspec() << endl << endl;*/
            break;
        case 3:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            break;
        case 4:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            break;
        case 5:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            break;
    }
    if (opcao == 1) {
        Medico med(n, a, p);
        cout << endl << endl;
        cout << "Nome: " << med.getNome() <<
        endl << "Altura: " << med.getAltura() <<
        endl << "Peso: " << med.getPeso() << endl << endl;
        return main();
    }
    if (opcao == 2) {
        Cirurgiao ciru(n, a, p);
        cout << endl << endl;
        cout << "Nome: " << ciru.getNome() <<
        endl << "Altura: " << ciru.getAltura() <<
        endl << "Peso: " << ciru.getPeso() << endl <<
        endl << "Especializacao: " << ciru.getEspec() <<
        endl << endl << ciru.getAtend() << endl << endl;
        return main();
    }
    if (opcao == 3) {
        Oftalmo ofta(n, a, p);
        cout << endl << endl;
        cout << "Nome: " << ofta.getNome() <<
        endl << "Altura: " << ofta.getAltura() <<
        endl << "Peso: " << ofta.getPeso() << endl <<
        endl << "Especializacao: " << ofta.getEspec() <<
        endl << endl << ofta.getAtend() << endl << endl;
        return main();
    }
    if (opcao == 4) {
        Otorrino oto(n, a, p);
        cout << endl << endl;
        cout << "Nome: " << oto.getNome() <<
        endl << "Altura: " << oto.getAltura() <<
        endl << "Peso: " << oto.getPeso() << endl <<
        endl << "Especializacao: " << oto.getEspec() <<
        endl << endl << oto.getAtend() << endl << endl;
        return main();
    }
    if (opcao == 5) {
        Ginecologista gine(n, a, p);
        cout << endl << endl;
        cout << "Nome: " << gine.getNome() <<
        endl << "Altura: " << gine.getAltura() <<
        endl << "Peso: " << gine.getPeso() << endl <<
        endl << "Especializacao: " << gine.getEspec() <<
        endl << endl << gine.getAtend() << endl << endl;
        return main();
    }
    if (opcao == 6) {
        return 0;
    }
    }
}
