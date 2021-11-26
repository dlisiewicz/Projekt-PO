#include "Menu.h"
#include "Osoba.h"
#include "Katalog.h"
#include "Zawodnik.h"
#include "Pracownik.h"
#include <iostream>

Katalog k1("zawodnicy");
Katalog k2("Pracownicy");

void Menu::petla() {
    while(loop)
    {

        std::cout<<"1-Dodaj, 2-Odczytaj, 3-Aktualizuj, 4-Usun, 5-Wyjdz"<<std::endl;
        std::cin>>wybor;
        switch(wybor) {
            case 1: {
                dodawanie();
                break;
            }
            case 2: {
                odczytywanie();
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

void Menu::dodawanie() {

    std::cout<<"Dodawanie:"<<std::endl;
    std::cout<<"1-zawodnicy 2-pracownicy"<<std::endl;
    std::cin>>wybor;
    switch(wybor) {
        case 1:{
            dodawanie_zawodnikow();
            break;
        };
        case 2:{
            dodawanie_pracownikow();
            break;
        };
    };
};

void Menu::dodawanie_zawodnikow() {
    Zawodnik z1;
    std::string tmp;

    std::cout<<"Podaj imie"<<std::endl;
    std::cin>>tmp;
    z1.setImie(tmp);

    std::cout<<"Podaj nazwisko"<<std::endl;
    std::cin>>tmp;
    z1.setNazwisko(tmp);

    k1.dodaj(z1);
};
void Menu::dodawanie_pracownikow() {
    Pracownik p1;
    std::string tmp;

    std::cout<<"Podaj imie"<<std::endl;
    std::cin>>tmp;
    p1.setImie(tmp);

    std::cout<<"Podaj nazwisko"<<std::endl;
    std::cin>>tmp;
    p1.setNazwisko(tmp);

    k2.dodaj(p1);
};
void Menu::odczytywanie() {
    std::cout<<"Odczytaj:"<<std::endl;
    std::cout<<"1-zawodnicy 2-pracownicy"<<std::endl;
    std::cin>>wybor;
    switch(wybor) {
        case 1:{
            k1.odczytaj();
            break;
        };
        case 2:{
            k2.odczytaj();
            break;
        };
    };

}
void Menu::aktualizowanie() {
    std::cout<<"Zaktualizuj:"<<std::endl;
    std::cout<<"1-zawodnicy 2-pracownicy"<<std::endl;
    std::cin>>wybor;
    switch(wybor) {
        case 1:{
            Zawodnik z1;
            int tmp;
            std::cout<<"Podaj nr zawodnika do zaktualizowania"<<std::endl;
            std::cin>>tmp;
            k1.aktualizuj(tmp, z1);
            break;
        };
        case 2:{
            Pracownik p1;
            int tmp;
            std::cout<<"Podaj nr pracownika do zaktualizowania"<<std::endl;
            std::cin>>tmp;
            k2.aktualizuj(tmp, p1);
            break;
        };
    };
}
void Menu::usuwanie() {
    std::cout<<"Usun:"<<std::endl;
    std::cout<<"1-zawodnicy 2-pracownicy"<<std::endl;
    std::cin>>wybor;
    switch(wybor) {
        case 1:{
            int tmp;
            std::cout<<"Podaj nr osoby do usuniecia"<<std::endl;
            std::cin>>tmp;
            k1.usun(tmp);
            break;
        };
        case 2:{
            int tmp;
            std::cout<<"Podaj nr osoby do usuniecia"<<std::endl;
            std::cin>>tmp;
            k2.usun(tmp);
            break;
        };
    };

}

