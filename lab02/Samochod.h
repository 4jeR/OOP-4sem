#pragma once
#include "Silnik.h"

class Samochod:public Pojazd{
public:
    Samochod(Silnik silnik = Silnik(), std::string kolor = "czarny", float licznik = 0.0,int kola = 4);
    Samochod& operator=(const Samochod& right);
    virtual void Print(std::ostream& out)const override; 
protected:
    std::string m_kolor;
    int m_kola;
};

Samochod::Samochod(Silnik silnik , std::string kolor , float licznik, int kola)
:Pojazd(silnik,licznik),m_kolor(kolor), m_kola(kola)
{
}

void Samochod::Print(std::ostream& out)const{
    out << "\nLiczba kol " << m_kola << "\n";
    out << "Stan licznika " << m_licznik << " [km]\n";
    out << "Kolor " << m_kolor << "\n";
}

Samochod& Samochod::operator=(const Samochod& right){

    this->Pojazd::operator=(right);
    return *this;
}