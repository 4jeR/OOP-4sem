#include "Compass.h"

Compass::Compass(std::string dir)
:m_direction(dir)
{}
std::string Compass::CompassDirection()const{
    return "C/" + m_direction;
}