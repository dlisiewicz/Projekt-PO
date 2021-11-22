#include "Katalog.h"

void Katalog::dodaj(Osoba *osoba)
{
    osoby.push_back(*osoba);
};
void Katalog::odczytaj()
{
    for(Osoba i : osoby)
    {
        std::cout<<i.getImie()<<" "<<i.getNazwisko()<<std::endl;
    }
};