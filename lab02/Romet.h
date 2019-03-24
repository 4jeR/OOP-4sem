#pragma once
#include "Motorower.h"
#include "Silnik.h"

class Romet:public Motorower{
public:
    Romet(Silnik silnik = Silnik(),float licznik = 0.0); 
    Romet(const Romet& other);

    virtual void Print(std::ostream& out)const override; 
};

Romet::Romet(Silnik silnik,float licznik)
:Motorower(silnik,"czerwony metallic",licznik)
{  
}

Romet::Romet(const Romet& other){
    m_kola = other.m_kola;
    m_kolor = other.m_kolor;
    m_licznik = other.m_licznik;
    m_silnik = other.m_silnik;
}

void Romet::Print(std::ostream& out)const{
    out << "\nLiczba kol " << m_kola << "\n";
    out << "Stan licznika " << m_licznik << " [km]\n";
    out << "Kolor " << m_kolor << "\n";
}