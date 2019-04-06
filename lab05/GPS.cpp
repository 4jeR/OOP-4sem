#include "GPS.h"




GPS::GPS(std::string name)
:m_name(name)
{

}

std::string GPS::GetName()const{
    return m_name;
}