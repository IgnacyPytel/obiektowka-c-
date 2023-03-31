//
// Created by pytlu on 31.03.2023.
//

#ifndef OBIEKTOWKA_C_MAIN_SASIEDZTWO_H
#define OBIEKTOWKA_C_MAIN_SASIEDZTWO_H
#include <iostream>
#include "ustawienia.h"
#include "Organizm.h"
#include "UstawieniaSymulacji.h"
#include "GeneratorLosowy.h"

class Sasiedztwo{

private:
    RodzajMieszkanca sasiad[3][3];

    RodzajMieszkanca * elementWewnetrzny(
            Polozenie polozenie);

    static Polozenie losujPolozenie();

public:
    Sasiedztwo(RodzajMieszkanca rodzaj = NIEZNANE);

    void okreslSasiada(Polozenie polozenie,
                       RodzajMieszkanca rodzaj);


    RodzajMieszkanca ktoJestSasiadem(Polozenie polozenie);

    unsigned short ile(RodzajMieszkanca rodzaj) const;

    Polozenie losujSasiada(RodzajMieszkanca rodzaj);

    static void zmienIdeksyWgPolozenia(
            Polozenie polozenie,long & wiersz, long & kolumna);

    static void zmienIdeksyWgPolozenia(
            Polozenie polozenie, unsigned int & wiersz,
            unsigned int & kolumna);

};


#endif //OBIEKTOWKA_C_MAIN_SASIEDZTWO_H
