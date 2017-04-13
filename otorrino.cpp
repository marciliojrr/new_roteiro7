#include "otorrino.h"

Otorrino::Otorrino(string n, float a, float p) {
    setNome(n);
    setAltura(a);
    setPeso(p);
    atend = "O otorrino atende aos SABADOS, das 10h as 15h.";
    espec = "Otorrinolaringologista Veterinario";
}
string Otorrino::getEspec() {
    return espec;
}
string Otorrino::getAtend() {
    return atend;
}

