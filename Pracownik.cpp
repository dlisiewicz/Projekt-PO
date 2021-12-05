#include "Pracownik.h"

void Pracownik::setStanowisko(string stanowisko)
{
    this->stanowisko=stanowisko;
};
string Pracownik::getStanowisko()
{
    return stanowisko;
};
void Pracownik::showAll()
{
    std::cout<<getImie()<<" "<<getNazwisko()<<" "<<getWiek()<<" "<<getmiesiecznaPensja()<<" "<<getStanowisko()<<std::endl;
};