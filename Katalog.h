#ifndef PROJEKT_PO_KATALOG_H
#define PROJEKT_PO_KATALOG_H

#include <iostream>
#include <vector>
#include "Osoba.h"

using std::string;

class Katalog {
private:
    string nazwa;
    std::vector <Osoba> osoby;
public:

    void dodaj(Osoba *osoba);
    void odczytaj();
    void aktualizuj();
    void usun();

};


#endif //PROJEKT_PO_KATALOG_H
