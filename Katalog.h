#ifndef PROJEKT_PO_KATALOG_H
#define PROJEKT_PO_KATALOG_H

#include <iostream>
#include <vector>


using std::string;

template<typename T>
class Katalog{
private:
    string nazwa;
    std::vector <T> osoby;
public:
    Katalog(string nazwa)
    {
        this->nazwa=nazwa;
    };
    void dodaj(T osoba)
    {
        osoby.push_back(osoba);
    };
    void odczytaj()
    {
        for( int  i = 0; i < osoby.size(); i++ )
        {
            osoby[i].showAll();
        }
    };
    void aktualizuj(int index, T osoba)
    {
        osoby[index-1]=osoba;
    };
    void usun(int index)
    {
        osoby.erase(osoby.begin()+index-1);
    };

};

#endif //PROJEKT_PO_KATALOG_H
