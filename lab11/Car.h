#pragma once
#include <iostream>
#include <string>
#include "Engine.h"

class Car{
public:
    Car(const std::string& fuel, const int power, const int capacity);

    friend std::ostream& operator<<(std::ostream& out, const Car& car);
protected:
    std::string m_type = "";
    std::string m_color = "Red";
    Engine m_engine;
};


Car::Car(const std::string& fuel, const int power, const int capacity)
:m_engine(fuel,power,capacity)
{

}

std::ostream& operator<<(std::ostream& out, const Car& car){
    out << "[INFO] Car:: Type " << car.m_type << std::endl;
    out << "[INFO] Car:: Color "<< car.m_color << std::endl;
    out << car.m_engine;
    return out;
}