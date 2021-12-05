#include "Osoba.h"

void Osoba::setImie(string imie)
{
    this->imie=imie;
}
string Osoba::getImie()
{
    return imie;
}
void Osoba::setNazwisko(string nazwisko)
{
    this->nazwisko=nazwisko;
}
string Osoba::getNazwisko()
{
    return nazwisko;
}
void Osoba::setWiek(int wiek)
{
    this->wiek=wiek;
};
int Osoba::getWiek()
{
    return wiek;
};

void Osoba::setMiesiecznaPensja(float miesiecznaPensja)
{
    this->miesiecznaPensja=miesiecznaPensja;
};
float Osoba::getmiesiecznaPensja()
{
    return miesiecznaPensja;
};