#ifndef PROJEKT_PO_PRACOWNIK_H
#define PROJEKT_PO_PRACOWNIK_H
#include "Osoba.h"

class Pracownik: virtual public Osoba{

private:
    string stanowisko;
public:
    void setStanowisko(string stanowisko);
    string getStanowisko();
    void showAll();
};


#endif //PROJEKT_PO_PRACOWNIK_H
