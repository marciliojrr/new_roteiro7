#include "ginecologista.h"

Ginecologista::Ginecologista(string n, float a, float p) {
    setNome(n);
    setAltura(a);
    setPeso(p);
    atend = "O Ginecologista atende as SEGUNDAS, a partir das 15h.";
    espec = "Ginecologista Veterinario";
}
string Ginecologista::getEspec() {
    return espec;
}
string Ginecologista::getAtend() {
    return atend;
}
