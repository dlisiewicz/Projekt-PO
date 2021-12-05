#include "Menu.h"
#include <iostream>

Katalog<Zawodnik> k1("Zawodnicy");
Katalog<Pracownik> k2("Pracownicy");

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
            default:{
                std::cout<<"Niepoprawna wartosc"<<std::endl;
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
        default:{
            std::cout<<"Niepoprawna wartosc"<<std::endl;
        }
    };
};

std::string tmp;
int tmpWiek;
float tmpPensja;

void Menu::dodawanie_zawodnikow() {
    Zawodnik z1;
    std::string tmp;

    std::cout<<"Podaj imie"<<std::endl;
    std::cin>>tmp;
    z1.setImie(tmp);

    std::cout<<"Podaj nazwisko"<<std::endl;
    std::cin>>tmp;
    z1.setNazwisko(tmp);

    std::cout<<"Podaj wiek"<<std::endl;
    std::cin>>tmpWiek;
    z1.setWiek(tmpWiek);

    std::cout<<"Podaj miesieczna pensje"<<std::endl;
    std::cin>>tmpPensja;
    z1.setMiesiecznaPensja(tmpPensja);

    std::cout<<"Podaj wartosc rynkowa"<<std::endl;
    std::cin>>tmpPensja;
    z1.setwatoscRynkowa(tmpPensja);

    std::cout<<"Podaj nr zawodnika"<<std::endl;
    std::cin>>tmpWiek;
    z1.setnrZawodnika(tmpWiek);

    k1.dodaj(z1);
};
void Menu::dodawanie_pracownikow() {
    Pracownik p1;

    std::cout<<"Podaj imie"<<std::endl;
    std::cin>>tmp;
    p1.setImie(tmp);

    std::cout<<"Podaj nazwisko"<<std::endl;
    std::cin>>tmp;
    p1.setNazwisko(tmp);

    std::cout<<"Podaj wiek"<<std::endl;
    std::cin>>tmpWiek;
    p1.setWiek(tmpWiek);

    std::cout<<"Podaj miesieczna pensje"<<std::endl;
    std::cin>>tmpPensja;
    p1.setMiesiecznaPensja(tmpPensja);

    std::cout<<"Podaj stanowisko"<<std::endl;
    std::cin>>tmp;
    p1.setStanowisko(tmp);

    k2.dodaj(p1);
};
void Menu::odczytywanie() {
    std::cout<<"Odczytaj:"<<std::endl;
    std::cout<<"1-zawodnicy 2-pracownicy"<<std::endl;
    std::cin>>wybor;
    switch(wybor) {
        case 1:{
            std::cout<<"Imie Nazwisko Wiek miesiecznaPensja wartoscRynkowa nrZawodnika"<<std::endl;
            k1.odczytaj();
            break;
        };
        case 2:{
            std::cout<<"Imie Nazwisko Wiek miesiecznaPensja Stanowisko"<<std::endl;
            k2.odczytaj();
            break;
        };
        default:{
            std::cout<<"Niepoprawna wartosc"<<std::endl;
        }
    };

}
void Menu::aktualizowanie() {
    std::cout<<"Zaktualizuj:"<<std::endl;
    std::cout<<"1-zawodnicy 2-pracownicy"<<std::endl;
    std::cin>>wybor;
    int tmpI;
    switch(wybor) {
        case 1:{
            Zawodnik z1;
            std::cout<<"Podaj nr zawodnika do zaktualizowania"<<std::endl;
            std::cin>>tmpI;

            std::cout<<"Podaj imie"<<std::endl;
            std::cin>>tmp;
            z1.setImie(tmp);

            std::cout<<"Podaj nazwisko"<<std::endl;
            std::cin>>tmp;
            z1.setNazwisko(tmp);

            std::cout<<"Podaj wiek"<<std::endl;
            std::cin>>tmpWiek;
            z1.setWiek(tmpWiek);

            std::cout<<"Podaj miesieczna pensje"<<std::endl;
            std::cin>>tmpPensja;
            z1.setMiesiecznaPensja(tmpPensja);

            std::cout<<"Podaj wartosc rynkowa"<<std::endl;
            std::cin>>tmpPensja;
            z1.setwatoscRynkowa(tmpPensja);

            std::cout<<"Podaj nr zawodnika"<<std::endl;
            std::cin>>tmpWiek;
            z1.setnrZawodnika(tmpWiek);

            k1.aktualizuj(tmpI, z1);
            break;
        };
        case 2:{
            Pracownik p1;
            std::cout<<"Podaj nr pracownika do zaktualizowania"<<std::endl;
            std::cin>>tmpI;

            std::cout<<"Podaj imie"<<std::endl;
            std::cin>>tmp;
            p1.setImie(tmp);

            std::cout<<"Podaj nazwisko"<<std::endl;
            std::cin>>tmp;
            p1.setNazwisko(tmp);

            std::cout<<"Podaj wiek"<<std::endl;
            std::cin>>tmpWiek;
            p1.setWiek(tmpWiek);

            std::cout<<"Podaj miesieczna pensje"<<std::endl;
            std::cin>>tmpPensja;
            p1.setMiesiecznaPensja(tmpPensja);

            std::cout<<"Podaj stanowisko"<<std::endl;
            std::cin>>tmp;
            p1.setStanowisko(tmp);

            k2.aktualizuj(tmpI, p1);
            break;
        };
        default:{
            std::cout<<"Niepoprawna wartosc"<<std::endl;
        }
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
        default:{
            std::cout<<"Niepoprawna wartosc"<<std::endl;
        }
    };

}

