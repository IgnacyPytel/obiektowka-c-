#ifndef ZLAB06_H
#define ZLAB06_H

#include "zlab03.h"
#include <string>
#include <iostream>
using namespace std;

class Obliczenia
{
protected:
    const double pi = 3.14;
public:
    virtual double promienKolaWgPola() = 0;
    virtual double promenOkreguWgObwodu() = 0;
    virtual ~Obliczenia();
};


class Kwadrat: public Prostokat, public Obliczenia
{
public:
    Kwadrat(string nazwa = "?", double bok =0)
        :Prostokat(nazwa,bok,bok){}
    ~Kwadrat()
    {
        cout << "Kwadrat: " << nazwa
             <<" kończy działanie" << endl;
    }

    string doTekstu();

    double promienKolaWgPola();
    double promenOkreguWgObwodu();

    bool operator==(const Kwadrat & innyKwadrat);

    Kwadrat& operator=(const Kwadrat & innyKwadrat);

    Kwadrat(const Kwadrat & innyKwadrat);

};

ostream &operator<<(ostream& os, Kwadrat& kwadrat);



#endif // ZLAB06_H
