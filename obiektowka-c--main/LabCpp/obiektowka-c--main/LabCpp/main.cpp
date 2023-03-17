#include <iostream>
#include "ZLab03.h"
#include "organizm.cpp"
#include "organizm.h"
#include "Zlab03.cpp"

using namespace std;
//int main() {
//    cout << "Laboratorium 03" <<endl;
//   Prostokat p1;
//   Prostokat p2(" koc ",1.4,2.2);
//   Prostokat p3(" pulapka ", -2,-3);
//   cout.precision(2);
//   cout<< p1.doTekstu()<<endl;
//   cout<<p2.doTekstu()<<endl;
//   cout<<p3.doTekstu()<<endl;
//
//   p3.zmienBoki(2,3);
//   cout<<endl<<p3.doTekstu()<<endl;
//
//   cout<<endl<<"Uzycie metod obiektu: "<<endl;
//   cout<<" Nazwa: "<<p2.jakaNazwa()<<endl
//      <<" Poprawny: "<<p2.czyPoprawny()<<endl
//     <<" Obwod = "<<p2.podajObwod()<<endl
//    <<" Pole = "<<p2.podajPole()<<endl;
//
//    return 0;
//}
void drukujOrganizm(const Organizm & o){
    cout << "licznikZycia: "
     << o.stanLicznikaZycia()
     << " licznikPosilkow: "
     << o.stanLicznikaPosilkow() << endl
     << "limitPosilkow: "
     << o.limitPosilkow
     << " kosztPotomka: "
     << o.kosztPotomka << endl
     << "glodny: " << o.glodny()
     << " paczkujacy: "
     << o.paczkujacy() << endl << endl;
}

int main(){
//    1. test kreacji obiektow
    Organizm organizm1(8,3,2);
    Organizm organizm2 = organizm1;
    Organizm organizm3(organizm1);

    cout<<"Wyniki tesu kreacji obiektow:"<<endl<<endl;
    cout<<"Organizm1:"<<endl;
    drukujOrganizm(organizm1);
    cout<<"Organizm2:"<<endl;
    drukujOrganizm(organizm2);
    cout<<"Organizm3:"<<endl;
    drukujOrganizm(organizm3);

  //  2. test niezaleznosci obiektow
    organizm1.posilek();
    organizm2.posilek();
    organizm3.posilek();
    organizm3.krokSymulacji();

    cout<<"wynik testu niezaleznosci obiektow:"<<endl<<endl;
    cout<<"Organizm1:"<<endl;
    drukujOrganizm(organizm1);
    cout<<"Organizm2:"<<endl;
    drukujOrganizm(organizm2);
    cout<<"Organizm3:"<<endl;
    drukujOrganizm(organizm3);

    //3. test symulacji
    Organizm organizm4(8,3,2);
    cout<<"Wynik testu symulacji:"<<endl<<endl;
    cout<<"Stan poczatkowy:"<<endl;
    drukujOrganizm(organizm4);

    for(int i =1; i<11; i++){
        organizm4.krokSymulacji();
        if(organizm4.paczkujacy()){
            organizm4.potomek();
            cout<<"---> Potomek"<<endl;
        }else organizm4.posilek();

        cout<< "Po wykonaniu kroku symulacji: "<< i << endl;
        drukujOrganizm(organizm4);

    }

    return 0;
}
