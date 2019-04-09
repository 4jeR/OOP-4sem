#include "TrackingUnit.h"

TrackingUnit::TrackingUnit(std::string dir)
:Compass(dir)
{
}
std::string TrackingUnit::CompassDirection()const{
    return "TUnit/" +  m_direction;
}

void TrackingUnit::Location(const Coordinate& loc){
    m_coords.Longitude(loc.Longitude());
    m_coords.Latitude(loc.Latitude());
}


void TrackingUnit::Start(){
    m_start = m_coords;
}

float TrackingUnit::Distance()const{
    return m_distance;
}

std::string TrackingUnit::LocationInfo()const{
    return "Longitude: " + std::to_string(m_coords.Longitude()) + " Latitude: " + std::to_string(m_coords.Latitude());
}

void TrackingUnit::Go(float distance, std::string dir){
    m_coords.MoveInDirection(distance, dir);
    
    m_distance = Haversine(m_start.Longitude(),m_start.Latitude(), m_coords.Longitude(), m_coords.Latitude());;
}
