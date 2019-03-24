#pragma once



// klasa opisujaca pojedyncze kolo w samochodzie
class Wheel{
public:
    // konstruktor
    Wheel(float pressure = 2.2f);
    
    // getter dla cisnienia w kole
    float Pressure()const;
private:
    float m_pressure;
};
