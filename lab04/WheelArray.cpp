#include "WheelArray.h"




WheelArray::WheelArray(){
    for(int i=0; i<4; i++) 
        m_wheel.push_back(new Wheel(2.2f));
}

WheelArray::~WheelArray(){
    for(auto wheel:m_wheel){
        delete wheel;
    }
}


std::vector<Wheel*>& WheelArray::GetVector(){
    return m_wheel;
}

void WheelArray::PressureInfo()const{
    int i = 0;
    for(auto wheel: m_wheel){
        std::cout <<" [INFO] :: Wheel [" << i << "] :: Pressure " << wheel->Pressure() << " [bar]" << std::endl;
        i++;
    }
}