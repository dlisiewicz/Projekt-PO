#ifndef PROJEKT_PO_OSOBY_H
#define PROJEKT_PO_OSOBY_H
#include <iostream>
using std::string;

class Osoba {
private:
    string imie;
    string nazwisko;
    int wiek;
    float miesiecznaPensja;
public:


    void setImie(string imie);
    string getImie();

    void setNazwisko(string nazwisko);
    string getNazwisko();

    void setWiek(int wiek);
    int getWiek();

    void setMiesiecznaPensja(float miesiecznaPensja);
    float getmiesiecznaPensja();
};


#endif //PROJEKT_PO_OSOBY_H
