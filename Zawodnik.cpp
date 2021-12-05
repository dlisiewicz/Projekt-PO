#include "Zawodnik.h"

void Zawodnik::setwatoscRynkowa(float watoscRynkowa)
{
    this->watoscRynkowa=watoscRynkowa;
};
float Zawodnik::getwatoscRynkowa()
{
    return watoscRynkowa;
};
void Zawodnik::setnrZawodnika(int nrZawodnika)
{
    this->nrZawodnika=nrZawodnika;
};
int Zawodnik::getnrZawodnika()
{
    return nrZawodnika;
};
void Zawodnik::showAll()
{
    std::cout<<getImie()<<" "<<getNazwisko()<<" "<<getWiek()<<" "<<getmiesiecznaPensja()<<" "<<getwatoscRynkowa()<<" "<<getnrZawodnika()<<std::endl;
};

