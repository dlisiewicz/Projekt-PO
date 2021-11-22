#ifndef PROJEKT_PO_OSOBY_H
#define PROJEKT_PO_OSOBY_H
#include <iostream>
using std::string;

class Osoba {
private:
    string imie;
    string nazwisko;
public:
    void setImie(string imie);
    string getImie();

    void setNazwisko(string nazwisko);
    string getNazwisko();
};


#endif //PROJEKT_PO_OSOBY_H
