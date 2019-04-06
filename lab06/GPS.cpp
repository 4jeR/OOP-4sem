#include "GPS.h"




GPS::GPS(std::string name)
:m_name(name)
{

}

std::string GPS::GetName()const{
    return m_name;
}


void GPS::UpdateLocation(float longitude, float latitude){
    m_coords.Longitude(longitude);
    m_coords.Latitude(latitude);
}

Coordinate& GPS::Coords(){
    return m_coords;
}

std::string GPS::GpsLoc()const{
    return "Longitude: " + std::to_string(m_coords.Longitude()) + " Latitude: " + std::to_string(m_coords.Latitude());
}