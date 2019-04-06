#pragma once

#include "Car.h"

/**
 * @class Ford
 * @brief       klasa opisujaca Forda dziedziczaca po klasie Car
*/
class Ford:public Car{
public:
    /**
     * @fn      Ford       
     * @brief             konstruktor dla klasy Ford
     * @param   string    name - nazwa Forda
     * @param   Engine    engine - obiekt opisujacy silnik Forda
     * @param   GPS       gps - model GPS dla Forda
    */
    Ford(std::string name = "Ford Fiesta", Engine engine =Engine("ON",1398,45), GPS gps = GPS("F/Google/No.000.000"));

    /**
     * @fn      GpsInfo     
     * @brief             metoda override zwracajaca stringa - info o gps Forda
     * @return string     nazwa modelu gps Forda
    */
    std::string GpsInfo()const override;
};