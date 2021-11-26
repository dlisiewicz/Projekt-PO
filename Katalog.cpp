#include "Katalog.h"

Katalog::Katalog(string nazwa)
{
    this->nazwa=nazwa;
};
void Katalog::dodaj(Osoba osoba)
{
    osoby.push_back(osoba);
};
void Katalog::odczytaj()
{
    for( int  i = 0; i < osoby.size(); i++ )
    {
        std::cout<<osoby[i].getImie()<<" "<<osoby[i].getNazwisko()<<std::endl;
    }
};
void Katalog::aktualizuj(int index, Osoba osoba)
{
    osoby[index]=osoba;
};
void Katalog::usun(int index)
{
    osoby.erase(osoby.begin()+index);
};