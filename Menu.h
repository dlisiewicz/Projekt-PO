#ifndef PROJEKT_PO_MENU_H
#define PROJEKT_PO_MENU_H
#include "Katalog.h"
#include "Osoba.h"
#include "Katalog.h"
#include "Zawodnik.h"
#include "Pracownik.h"

class Menu{
private:
    bool loop = true;
    int wybor;
public:
    void petla();
    void dodawanie();
    void odczytywanie();
    void aktualizowanie();
    void usuwanie();

    void dodawanie_zawodnikow();
    void dodawanie_pracownikow();
};


#endif //PROJEKT_PO_MENU_H
