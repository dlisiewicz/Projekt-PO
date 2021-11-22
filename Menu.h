#ifndef PROJEKT_PO_MENU_H
#define PROJEKT_PO_MENU_H
#include "Katalog.h"

class Menu {
private:
    bool loop = true;
    int wybor;
public:
    void petla();
    void dodawanie(Katalog katalog);
    void odczytywanie(Katalog katalog);
    void aktualizowanie();
    void usuwanie();
};


#endif //PROJEKT_PO_MENU_H
