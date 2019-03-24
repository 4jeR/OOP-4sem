#pragma once
#include <string>
#include <iostream>


// klasa opisujaca silnik w samochodzie
class Engine{
public:
    // konstruktor 
    Engine(std::string fuel = "ON", int cap = 1598, int power = 65);

    // operator wypisujacy parametry silnika
    friend std::ostream& operator<<(std::ostream& out, const Engine& engine);


private:
    std::string m_fuel;
    int m_capacity;
    int m_power;


};

