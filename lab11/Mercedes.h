#pragma once
#include "Car.h"

class Mercedes: public Car{
public:
    Mercedes(const std::string& fuel = "ON", const int power = 65, const int capacity = 1598);

   

};





Mercedes::Mercedes(const std::string& fuel, const int power, const int capacity)
:Car(fuel,power,capacity)
{
    m_type = "Mercedes";
}