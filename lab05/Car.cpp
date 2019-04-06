#include "Car.h"
#include "Mercedes.h"
#include "Ford.h"

/* static string s_color   statyczna zmienna przechowujaca defaultowy kolor samochodow*/
std::string Car::s_color = "Red";

Car::Car(std::string name, Engine engine, GPS gps )
:m_name(name),m_engine(engine), m_gps(gps)
{}

Car* Car::Create(std::string name){
    if(name == "Mercedes"){
        return new Mercedes();
    }
    else if(name == "Ford"){
        return new Ford();
    }
    else return nullptr;
}

std::string Car::GetColor(){
    return Car::s_color;
}



std::ostream& operator<<(std::ostream& out, const Car& car){
    std::cout << "[INFO] Car:: Type " << car.m_name << std::endl;
    std::cout << "[INFO] Car:: Color " << Car::s_color << std::endl;
    std::cout << car.m_engine;
    return out;
}

