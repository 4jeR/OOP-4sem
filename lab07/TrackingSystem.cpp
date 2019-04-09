#include "TrackingSystem.h"

TrackingSystem::TrackingSystem(std::string dir)
:Compass(dir) 
{}

std::string TrackingSystem::CompassDirection()const{
    return "TS/" + m_direction;
}