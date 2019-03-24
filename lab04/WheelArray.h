#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "Wheel.h"



// klasa opisujaca kola w samochodzie
class WheelArray{
public:
    // konstruktor
    WheelArray();
    // destruktor
    ~WheelArray();
    // metoda wypisujaca cisnienia we wszystkich kolach
    void PressureInfo()const;
    
    // getter dla wektora kół
    std::vector<Wheel*>& GetVector();

private:
    std::vector<Wheel*> m_wheel;
};
