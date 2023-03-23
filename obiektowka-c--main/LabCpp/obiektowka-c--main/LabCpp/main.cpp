#include <iostream>
#include "ZLab03.h"
#include "organizm.cpp"
#include "Organizm.h"
#include "Zlab03.cpp"
#include "UstawieniaSymulacji.h"
#include "generatorlosowy.h"
#include "generatorlosowy.cpp"

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
//void drukujOrganizm(const Organizm & o){
//    cout << "licznikZycia: "
//     << o.stanLicznikaZycia()
//     << " licznikPosilkow: "
//     << o.stanLicznikaPosilkow() << endl
//     << "limitPosilkow: "
//     << o.limitPosilkow
//     << " kosztPotomka: "
//     << o.kosztPotomka << endl
//     << "glodny: " << o.glodny()
//     << " paczkujacy: "
//     << o.paczkujacy() << endl << endl;
//}

//int main(){
//    1. test kreacji obiektow
//    Organizm organizm1(8,3,2);
//    Organizm organizm2 = organizm1;
//    Organizm organizm3(organizm1);
//
//    cout<<"Wyniki tesu kreacji obiektow:"<<endl<<endl;
//    cout<<"Organizm1:"<<endl;
//    drukujOrganizm(organizm1);
//    cout<<"Organizm2:"<<endl;
//    drukujOrganizm(organizm2);
//    cout<<"Organizm3:"<<endl;
//    drukujOrganizm(organizm3);
//
//    2. test niezaleznosci obiektow
//    organizm1.posilek();
//    organizm2.posilek();
//    organizm3.posilek();
//    organizm3.krokSymulacji();
//
//    cout<<"wynik testu niezaleznosci obiektow:"<<endl<<endl;
//    cout<<"Organizm1:"<<endl;
//    drukujOrganizm(organizm1);
//    cout<<"Organizm2:"<<endl;
//    drukujOrganizm(organizm2);
//    cout<<"Organizm3:"<<endl;
//    drukujOrganizm(organizm3);
//
//    3. test symulacji
//    Organizm organizm4(8,3,2);
//    cout<<"Wynik testu symulacji:"<<endl<<endl;
//    cout<<"Stan poczatkowy:"<<endl;
//    drukujOrganizm(organizm4);
//
//    for(int i =1; i<11; i++){
//        organizm4.krokSymulacji();
//        if(organizm4.paczkujacy()){
//            organizm4.potomek();
//            cout<<"---> Potomek"<<endl;
//        }else organizm4.posilek();
//
//        cout<< "Po wykonaniu kroku symulacji: "<< i << endl;
//        drukujOrganizm(organizm4);
//
//    }
//
//    return 0;
//}
//void wyswietl(UstawieniaSymulacji & UST){
//    cout<<"Znak glon: "<<UST.znakGlon
//    <<" zycieMin = "<<UST.glonZycieMin
//    <<" zycieMax = "<< UST.glonZycieMax<<endl;
//
//}
//int main(){
//    1. dostep do obiektu klasy UstawieniaSymulacji
//    UstawieniaSymulacji & UST1
//        = UstawieniaSymulacji::pobierzUstawienia();
//    UstawieniaSymulacji & UST2
//        = UstawieniaSymulacji::pobierzUstawienia();
//    UstawieniaSymulacji & UST3
//        = UstawieniaSymulacji::pobierzUstawienia();
//
//    cout<<"Pobieranie ustawien 3x"<<endl;
//    cout<< "UST1: "; wyswietl(UST1);
//    cout<<"UST2: "; wyswietl(UST2);
//    cout<<"UST3: "; wyswietl(UST3);
//
//    cout<<endl<< "Zmiana wartosci tylko 1x"<<endl;
//    UST2.glonZycieMax = 100;
//    cout<<"UST1: "; wyswietl(UST1);
//    cout<<"UST2: "; wyswietl(UST2);
//    cout<<"UST3: "; wyswietl(UST3);
//    return 0;
//}

//int main(){
//    cout<<"Liczby losowe typu int:"<<endl;
//    cout<<" od 0 do 5: ";
//    for(int i =0; i<10; i++){
//        cout<< GEN::losujOdZeraDo(5)<< " ";
//    }
//    cout<<endl<<" od 0 do 3: ";
//    for (int i = 0; i<10; i++){
//        cout<<GEN::losujOdZeraDo(3)<< " ";
//    }
//    cout<<endl<<" od 0 do 20: ";
//    for(int i=0; i<10; i++){
//        cout<< GEN::losujOdZeraDo(20)<<" ";
//    }
//    cout<<endl<<endl;
//
//    cout<<"Liczby losowe typu long: "<<endl;
//    cout<<" od -2 do 2: ";
//    for(int i =0; i<10; i++){
//        cout<< GEN::losujPomiedzy(-2L,2L)<<" ";
//    }
//    cout<<endl<<endl;
//
//    cout<<"Losuj liczby typu unsigned short: "<<endl;
//    cout<<" od 2 do 6: ";
//    unsigned short min=2, max=6;
//    for(int i=1; i<10;i++){
//        cout<< GEN::losujPomiedzy(min,max)<<" ";
//    }
//   cout<<endl<<endl;
//
//   return 0;
//}