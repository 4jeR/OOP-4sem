#include "Engine.h"



Engine::Engine(std::string fuel, int cap, int power)
:m_fuel(fuel),m_capacity(cap),m_power(power)
{}


std::ostream& operator<<(std::ostream& out, const Engine& engine)
{
    std::cout << "[INFO] Engine:: Fuel " << engine.m_fuel << std::endl;
    std::cout << "[INFO] Engine:: Capacity " << engine.m_capacity << " [cm^3]"<< std::endl;
    std::cout << "[INFO] Engine:: Power " << engine.m_power << " [kW]" << std::endl;
    return out;
}