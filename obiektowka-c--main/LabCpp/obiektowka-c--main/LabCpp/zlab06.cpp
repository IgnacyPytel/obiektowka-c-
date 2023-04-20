#include "zlab06.h"

string Kwadrat::doTekstu()
{
    string napis ="";
    napis = "Kwadrat o nazwie: " + nazwa
            + " bok=" + to_string(bok1);
    if(poprawny) napis += " obwod=" + to_string(obwod)
            + " pole=" + to_string(pole);
    else napis +=" !Figura niepoprawna.";
    return napis;
}


Obliczenia::~Obliczenia()
{

}

#include <cmath>
double Kwadrat::promienKolaWgPola()
{
    return  sqrt(pole / pi);
}

double Kwadrat::promenOkreguWgObwodu()
{
    return obwod / (2*pi);
}

bool Kwadrat::operator==(const Kwadrat &innyKwadrat)
{
    return this->bok1 == innyKwadrat.bok1 &&
           this->nazwa == innyKwadrat.nazwa;
}

Kwadrat &Kwadrat::operator=(const Kwadrat &innyKwadrat)
{
    this->nazwa =innyKwadrat.nazwa + "_kopia";
    this->bok1 = innyKwadrat.bok1;
    this->bok2 = innyKwadrat.bok2;
    this->pole = innyKwadrat.pole;
    this->obwod = innyKwadrat.obwod;
    this->poprawny = innyKwadrat.poprawny;

    return *this;
}

Kwadrat::Kwadrat(const Kwadrat &innyKwadrat)
    :Kwadrat("_kopia_inna",innyKwadrat.bok1)
{
}



ostream &operator<<(ostream &os, Kwadrat &kwadrat) //const
{
    os << kwadrat.doTekstu();
    return os;
}


