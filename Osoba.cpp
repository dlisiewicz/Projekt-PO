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

void Osoba::setMiesiecznaPesja(float MiesiecznaPesja)
{
    this->miesiecznaPesja=miesiecznaPesja;
};
float Osoba::getmiesiecznaPesja()
{
    return miesiecznaPesja;
};