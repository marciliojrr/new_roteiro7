#include "oftalmologista.h"

Oftalmo::Oftalmo(string n, float a, float p) {
    setNome(n);
    setAltura(a);
    setPeso(p);
    //setEspec(e);
    atend = "O oftalmo atende as TERCAS e QUARTAS, das 09h as 15h.";
    espec = "Oftalmologista Veterinario";
}
//void Oftalmo::setEspec (string e) {
//    espec = e;
//}
string Oftalmo::getEspec() {
    return espec;
}
string Oftalmo::getAtend() {
    return atend;
}

