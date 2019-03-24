#pragma once
#include "Samochod.h"
#include "Silnik.h"


// klasa opisujaca Mercedes ktora dziedziczy z klasy Samochod
class Mercedes:public Samochod{
public:
    // Konstruktor dla klasy Mercedes
    Mercedes(std::string paliwo, int moc, int poj);  
    
    // funkcja zaprzyjazniona sluzaca do wypisywania obiektu typu Mercedes
    friend std::ostream& operator<<(std::ostream& out, const Mercedes& other);
};


Mercedes::Mercedes(std::string paliwo, int moc, int poj)
:Samochod(paliwo, moc, poj)
{}   // paliwo, moc [kW], pojemnosc [cm^3]



std::ostream& operator<<(std::ostream& out, const Mercedes& other)
{
    out << "[INFO] Mercedes A\n";
    out << "[INFO] Stan licznika " << other.GetLicznik() << " [km]\n";
    out << "[INFO] Kolor " << s_kolor <<"\n";
    return out;
}
/* Wynik dzialania programu:
[INFO] Mercedes A
[INFO] Stan licznika 0 [km]
[INFO] Kolor Czerwony
*/