#pragma once
#include "Silnik.h"
#include <iostream>

class Pojazd{
public:
    Pojazd(Silnik silnik = Silnik(), float licznik = 0.0);
   
    virtual void Print(std::ostream& out)const = 0;
    Pojazd& operator=(const Pojazd& right);
    void Przebieg(float nowyLicznik);
    friend std::ostream& operator<<(std::ostream& out, const Pojazd& other);
    
protected:
    Silnik m_silnik;
    float m_licznik;
};

Pojazd::Pojazd(Silnik silnik,float licznik)
:m_silnik(silnik),m_licznik(licznik)
{}

void Pojazd::Przebieg(float nowyLicznik){
    m_licznik = nowyLicznik;
}

std::ostream& operator<<(std::ostream& out, const Pojazd& other){
    other.Print(out);    
    return out;
}

Pojazd& Pojazd::operator=(const Pojazd& right){
    m_licznik = right.m_licznik;
    m_silnik = right.m_silnik;
    return *this;
}