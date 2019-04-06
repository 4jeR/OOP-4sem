#include "Car.h"
#include "Mercedes.h"



Mercedes::Mercedes(std::string name , Engine engine, GPS gps )
:Car(name,engine, gps)
{}

std::string Mercedes::GpsInfo()const{
    return m_gps.GetName();
}