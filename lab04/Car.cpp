#include "Car.h"


Car::Car(std::string name, Engine engine )
:m_name(name),m_engine(engine)
{
    m_wheelarray = new WheelArray();
}


Car::~Car()
{
    delete m_wheelarray;
}

Car* Car::Create(std::string name){
    if(name == "Mercedes"){
        return new Car("Mercedes A",Engine("ON",1598,65));
    }
    else if(name == "Ford"){
        return new Car("Ford Fiesta",Engine("Pb98",1398,45));
    }
    else return nullptr;
}


void Car::DefaultColor(std::string color){
    s_kolor = color;
}

WheelArray* Car::Wheels()const{
    return m_wheelarray;
}

std::vector<Wheel*>& Car::WheelsVector()const{
    return m_wheelarray->GetVector();
}   


std::ostream& operator<<(std::ostream& out, const Car& car){
    std::cout << "[INFO] Car:: Type " << car.m_name << std::endl;
    std::cout << "[INFO] Car:: Color " << s_kolor << std::endl;
    std::cout << car.m_engine;
    return out;
}
