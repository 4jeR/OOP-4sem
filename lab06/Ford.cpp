#include "Ford.h"
#include "Car.h"


Ford::Ford(std::string name , Engine engine, GPS gps)
:Car(name,engine,gps)
{
}


std::string Ford::GpsInfo()const {
    return m_gps.GetName();
}