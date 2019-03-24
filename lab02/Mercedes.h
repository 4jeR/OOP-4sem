#pragma once
#include "Samochod.h"

class Mercedes:public Samochod{
public:
    Mercedes(Silnik silnik = Silnik(),float licznik = 0.0);   
    virtual void Print(std::ostream& out)const override; 
    Mercedes& operator=(const Mercedes& right);
};

Mercedes::Mercedes(Silnik silnik,float licznik)
:Samochod(silnik,"czarny metallic",licznik)
{  
}

Mercedes& Mercedes::operator=(const Mercedes& right){
    (*this).Samochod::operator=(right);
    m_kola = right.m_kola;
    m_kolor = right.m_kolor;
    m_licznik = right.m_licznik;
    m_silnik = right.m_silnik;
    

    return *this;
}
void Mercedes::Print(std::ostream& out)const{
    out << "\nLiczba kol " << m_kola << "\n";
    out << "Stan licznika " << m_licznik << " [km]\n";
    out << "Kolor " << m_kolor << "\n";
}