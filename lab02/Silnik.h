#pragma once
#include <string>

class Silnik{
public:
    Silnik(int moc = 1,float pojemnosc = 1.0,std::string paliwo = "ON");                 // moc, pojemnosc, paliwo
protected:
    int m_moc;
    float m_pojemnosc;
    std::string m_paliwo;
};

Silnik::Silnik(int moc ,float pojemnosc,std::string paliwo)
:m_moc(moc),m_pojemnosc(pojemnosc),m_paliwo(paliwo)
{}