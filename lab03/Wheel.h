#pragma once

// pomocnicza klasa reprezentujaca pojedyncze kolo samochodu
struct Wheel{
    // konstruktor dla kola
    Wheel(float pressure = 2.2f):m_pressure(pressure){}
    
    // metoda aktualizujaca (setter) cisnienie w kole
    void UpdatePressure(float pressure){m_pressure = pressure;}

    // getter dla cisnienia w kole
    float Pressure()const{return m_pressure;}
    float m_pressure;
};