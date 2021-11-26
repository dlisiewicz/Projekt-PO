#ifndef PROJEKT_PO_KATALOG_H
#define PROJEKT_PO_KATALOG_H

#include <iostream>
#include <vector>
#include "Osoba.h"

using std::string;

class Katalog : virtual public Osoba{
private:
    string nazwa;
    std::vector <Osoba> osoby;
public:
    Katalog(string nazwa);
    void dodaj(Osoba osoba);
    void odczytaj();
    void aktualizuj(int index, Osoba osoba);
    void usun(int index);

};

#endif //PROJEKT_PO_KATALOG_H
