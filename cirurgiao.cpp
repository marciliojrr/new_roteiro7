#include "cirurgiao.h"

Cirurgiao::Cirurgiao(string n, float a, float p) {
    /*cout << "Digite o nome do medico:" << endl << ">> ";
    cin >> n;
    cout << "Digite a altura do medico:" << endl << ">> ";
    cin >> a;
    cout << "Digite o peso do medico:" << endl << ">> ";
    cin >> p;
    cout << "Digite a especializacao do medico:" << endl << ">> ";
    cin >> e;
    cout << endl << endl << endl;*/
    setNome(n);
    setAltura(a);
    setPeso(p);
    //setEspec(e);
    atend = "O cirurgiao atende as SEGUNDAS e QUARTAS, das 10h as 17h.";
    espec = "Neurocirurgiao Veterinario";
}

//void Cirurgiao::setEspec (string e) {
 //   espec = e;
//}
string Cirurgiao::getEspec() {
    return espec;
}
string Cirurgiao::getAtend() {
    return atend;
}
