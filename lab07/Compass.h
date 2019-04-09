#pragma once
#include <string>
#include "Haversine.h"


/**
 * @class Compass
 * @brief       klasa opisujaca kompas
*/
class Compass{
public:
    /**
     * @fn Compass
     * @brief           konstruktor ustawiajacy domyslny kierunek swiata
     * @param string    dir - domyslny kierunek swiata
    */
    Compass(std::string dir ="West");

     /**
     * @fn CompassDirection
     * @brief       metoda wirtualna zwracajaca kierunek swiata
     * @return      string - kierunek swiata 
    */
    virtual std::string CompassDirection()const;
    
    /**
     * @fn {North, West, East, South}
     * @brief       statyczne metody zwracajace kierunek swiata
     * @return string   kierunek swiata
    */
    static std::string North(){return "North";}
    static std::string West(){return "West";}
    static std::string East(){return "East";}
    static std::string South(){return "South";}
protected:
    std::string m_direction; ///< kierunek swiata
};