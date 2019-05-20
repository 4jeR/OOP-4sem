#pragma once
#include <iostream>
#include <string>


class Engine{
public:
    Engine(const std::string& fuel, const int power, const int capacity);

    friend std::ostream& operator<<(std::ostream& out, const Engine& engine);

private:
    std::string m_fuel;
    int m_power;
    int m_capacity;
};

Engine::Engine(const std::string& fuel, const int power, const int capacity)
:m_fuel(fuel),m_power(power),m_capacity(capacity)
{}

std::ostream& operator<<(std::ostream& out, const Engine& engine){
    out << "[INFO] Engine:: Fuel " << engine.m_fuel << std::endl;
    out << "[INFO] Engine:: Capacity " << engine.m_capacity << " [cm^3] "<< std::endl;
    out << "[INFO] Engine:: Power "<< engine.m_power <<" [kW]" << std::endl;
    return out;
}