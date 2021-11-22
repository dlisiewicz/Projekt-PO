#include "Menu.h"
#include "Osoba.h"
#include "Katalog.h"
#include <iostream>

void Menu::petla() {
    while(loop)
    {
        Katalog k1;

        std::cout<<"1-Dodaj, 2-Odczytaj, 3-Aktualizuj, 4-Usun, 5-Wyjdz"<<std::endl;
        std::cin>>wybor;

        switch(wybor) {
            case 1: {
                dodawanie(k1);
                break;
            }
            case 2: {
                odczytywanie(k1);
                break;
            }
            case 3: {
                aktualizowanie();
                break;
            }
            case 4: {
                usuwanie();
                break;
            }
            case 5: {
                loop = false;
                break;
            }
        }
    }
}

void Menu::dodawanie(Katalog k1) {
    system( "cls");

    Osoba *osoba = new Osoba();
    std::string tmp;
    std::cout<<"Podaj imie "; std::cin>>tmp; osoba->setImie(tmp);

    k1.dodaj(osoba);
};
void Menu::odczytywanie(Katalog k1) {
    k1.odczytaj();
}
void Menu::aktualizowanie() {

}
void Menu::usuwanie() {

}

