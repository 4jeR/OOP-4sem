#pragma once
#include "Silnik.h"
#include <vector>
#include <iostream>
#include "Wheel.h"


// statyczna zmienna opisujaca defaultowy kolor samochodow
static std::string s_kolor;

// klasa reprezentujaca samochod
class Samochod{
public:
    // Konstruktory dla klasy samochodu
    Samochod(std::string paliwo = "ON" ,int moc = 1,int pojemnosc = 1);   
    virtual ~Samochod(){};

    // Gettery dla poszczegolnych zmiennych klasy Samochod
    Silnik GetSilnik()const{return m_silnik;}
    int GetLicznik()const{return m_licznik;}
    
    // getter na dynamiczna tablice wskaznikow na obiekt typu Wheel 
    std::vector<Wheel*>& Wheels(){return m_bar;}
    
    // statyczna metoda ustawiajaca defaultowy samochodow
    static void DefaultColor(std::string kolor);
    
    // metoda wypisujaca cisnienie w kolach samochodu
    void WheelsPressureInfo()const;


    // funkcja zaprzyjazniona sluzaca do wypisywania obiektu typu Samochod
    friend std::ostream& operator<<(std::ostream& out, const Samochod& other);
protected:
    Silnik m_silnik;
    int m_kola = 4;
    int m_licznik = 0;
    std::vector<Wheel*> m_bar;
   
};

Samochod::Samochod(std::string paliwo,int moc ,int pojemnosc)
{ 
    
    m_silnik.SetPaliwo(paliwo);
    m_silnik.SetMoc(moc);
    m_silnik.SetPojemnosc(pojemnosc);   

    for(int i=0;i<m_kola;i++){
        m_bar.push_back(new Wheel());
    }
    
}


std::ostream& operator<<(std::ostream& out, const Samochod& other)
{
    out << "[INFO] Mercedes A\n";
    out << "[INFO] Stan licznika " << other.GetLicznik() << " [km]\n";
    out << "[INFO] Kolor " << s_kolor <<"\n";
    return out;
}

void Samochod::DefaultColor(std::string kolor){
    s_kolor = kolor;
}

void Samochod::WheelsPressureInfo()const{
    for(int i=0; i<4; i++){
        std::cout << "[INFO] Mercedes A :: Wheel [" << i << "] :: Pressure " << m_bar.at(i)->m_pressure << " [bar]\n";
    }

}

