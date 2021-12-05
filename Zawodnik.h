#ifndef PROJEKT_PO_ZAWODNIK_H
#define PROJEKT_PO_ZAWODNIK_H
#include "Osoba.h"

class Zawodnik: virtual public Osoba{
private:
    float watoscRynkowa;
    int nrZawodnika;
public:
    void setwatoscRynkowa(float watoscRynkowa);
    float getwatoscRynkowa();
    void setnrZawodnika(int watoscRynkowa);
    int getnrZawodnika();
    void showAll();
};


#endif //PROJEKT_PO_ZAWODNIK_H
