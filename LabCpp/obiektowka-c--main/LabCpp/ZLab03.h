//
// Created by student on 17.03.2023.
//

#ifndef LABCPP_ZLAB03_H
#define LABCPP_ZLAB03_H

#include <string>
using namespace std;
class Prostokat{
private:
    string nazwa;
    double bok1, bok2;
    bool poprawny;
    double obwod, pole;

    bool czyPoprawny(double bok1, double bok2);
    void obliczObwod();
    void obliczPole();

public:
    Prostokat(string n = "?", double a=1, double b=2);
    Prostokat(const string &nazwa, double bok1, double bok2, bool poprawny, double obwod, double pole);
    ~Prostokat();
    bool czyPoprawny();
    const string& jakaNazwa();
    double podajPole();
    double podajObwod();
    bool zmienBoki(double a, double b);
    std::string doTekstu();
};



#endif //LABCPP_ZLAB03_H
