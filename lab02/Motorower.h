#pragma once
#include "Pojazd.h"


class Motorower:public Pojazd{
public:
    Motorower(Silnik silnik = Silnik(), std::string kolor = "czarny", float licznik = 0.0,int kola = 2);
    
    virtual void Print(std::ostream& out)const override; 
protected:
    std::string m_kolor;
    int m_kola;
};

Motorower::Motorower(Silnik silnik , std::string kolor , float licznik, int kola)
:Pojazd(silnik,licznik),m_kolor(kolor), m_kola(kola)
{
}

void Motorower::Print(std::ostream& out)const{
    out << "\nLiczba kol " << m_kola << "\n";
    out << "Stan licznika " << m_licznik << " [km]\n";
    out << "Kolor " << m_kolor << "\n";
}