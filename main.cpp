#include "funcionario.h"
#include "consultor.h"

int main () {
    int m, opcao;
    string n;
    float s;
    while (opcao != 3) {
        cout << "Inserir informacoes para qual tipo:" << endl
        << "Funcionario Geral  [1]" << endl
        << "Consultor          [2]" << endl
        << "Sair               [3]" << endl
        << ">> ";
        cin >> opcao;
    switch(opcao) {
        case 1:
            cout << "Digite a matricula do funcionario:" << endl << ">> ";
            cin >> m;
                while (m <= 0) {
                    cout << "Numero de matricula invalida." << endl << ">> ";
                    cin >> m;
                }
            cout << "Digite o nome do funcionario:" << endl << ">> ";
            cin >> n;
            cout << "Digite o salario do funcionario:" << endl << ">> ";
            cin >> s;
                while (s <= 0) {
                    cout << "Valor de salario invalido." << endl << ">> ";
                    cin >> s;
                }
            cout << endl << endl;
            break;
        case 2:
            cout << "Digite a matricula do funcionario:" << endl << ">> ";
            cin >> m;
                while (m <= 0) {
                    cout << "Numero de matricula invalida.";
                    cin >> m;
                }
            cout << "Digite o nome do funcionario:" << endl << ">> ";
            cin >> n;
            cout << "Digite o salario do funcionario:" << endl << ">> ";
            cin >> s;
                while (s <= 0) {
                    cout << "Valor de salario invalido.";
                    cin >> s;
                }
            cout << endl << endl;
            break;
    }
    if (opcao == 1) {
        Funcionario padrao (m,n,s);
        padrao.setSal(s);
        cout << "Funcionario: " << padrao.getNome() << endl
        << "Matricula: " << padrao.getMat() << endl
        << "Salario: R$ " <<padrao.getSal() << endl << endl << "--------------" << endl << endl;
    }
    if (opcao == 2) {
        Consultor consult(m,n,s);
        consult.setSalario();
        cout << "Funcionario: " << consult.getNome() << endl
        << "Matricula: " << consult.getMat() << endl
        << "Novo salario: R$ " << consult.getSal() << endl << endl << "--------------" << endl << endl;
    }
    if (opcao == 3){
        return 0;
    }
    return main();
    }
}
