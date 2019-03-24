#pragma once
#include <string>

// klasa reprezentujaca silnik
class Silnik{
public:
    // konstruktor dla klasy Silnik
    Silnik(std::string paliwo = "ON", int moc = 1, int pojemnosc = 1);

    // gettery dla skladowych silnika
    std::string GetPaliwo()const {return m_paliwo;}
    int GetMoc()const {return m_moc;}
    int GetPojemnosc()const {return m_pojemnosc;}

    // settery dla skladowych silnika
    void SetPaliwo(std::string paliwo){m_paliwo = paliwo;}
    void SetMoc(int moc){m_moc = moc;}
    void SetPojemnosc(int poj){m_pojemnosc = poj;}

private:
    std::string m_paliwo;
    int m_moc;
    int m_pojemnosc;
};

Silnik::Silnik(std::string paliwo, int moc, int pojemnosc)
:m_paliwo(paliwo),m_moc(moc),m_pojemnosc(pojemnosc)
{}



  
