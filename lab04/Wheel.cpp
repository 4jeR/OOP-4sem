#include "Wheel.h"




Wheel::Wheel(float pressure ){
    m_pressure = pressure;
}

float Wheel::Pressure()const{
    return m_pressure;
}