#pragma once
#include "Car.h"

class Ford:public Car{
public:
    Ford(const std::string& fuel = "Pb98", const int power = 45, const int capacity = 1398);  

};

Ford::Ford(const std::string& fuel, const int power, const int capacity)
:Car(fuel,power,capacity)
{
    m_type = "Ford";
}

