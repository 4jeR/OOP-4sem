#pragma once
#include "Compass.h"



/**
 * @class TrackingSystem
 * @brief       klasa reprezentujaca TrackinSystem dziedziczaca z klasy Compass
*/
class TrackingSystem: public virtual Compass {
public:
    /**
     * @fn TrackingSystem
     * @brief           konstruktor inicjalizujacy kierunek domyslny
     * @param string    dir - domyslny kierunek
    */
    TrackingSystem(std::string dir="North");

    /**
     * @fn CompassDirection
     * @brief       metoda override zwracajaca kierunek swiata
     * @return      string - kierunek swiata 
    */
    std::string CompassDirection()const override;
};