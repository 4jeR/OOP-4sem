#include "Gps.h"
   
Gps::Gps(std::string name, float longi, float lati)
:m_name(name)
{
    m_coords.Longitude(longi);
    m_coords.Latitude(lati);
}

std::string Gps::GetName()const{
    return m_name;
}


void Gps::UpdateLocation(float longitude, float latitude){
    m_coords.Longitude(longitude);
    m_coords.Latitude(latitude);
}

Coordinate& Gps::Coords(){
    return m_coords;
}

std::string Gps::GpsLoc()const{
    return "Longitude: " + std::to_string(m_coords.Longitude()) + " Latitude: " + std::to_string(m_coords.Latitude());
}

std::string Gps::CompassDirection()const {
    return "G/" + m_direction;
}

Coordinate Gps::Location()const{
    return m_coords;
}