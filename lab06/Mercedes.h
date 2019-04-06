#pragma once
#include "Car.h"

/**
 * @class Mercedes
 * @brief       klasa opisujaca Mercedesa  dziedziczaca po klasie Car
*/
class Mercedes:public Car{
public:
    /**
     * @fn      Mercedes       
     * @brief             konstruktor dla klasy Mercedes
     * @param   string    name -nazwa Mercedesa
     * @param   Engine    engine - obiekt opisujacy silnik Mercedesa
     * @param   GPS       gps - model GPS dla Mercedesa
    */
    Mercedes(std::string name = "Mercedes A", Engine engine =Engine("ON",1598,65),GPS gps = GPS("M/Garmin/No.000.000"));

    /**
     * @fn      GpsInfo     
     * @brief             metoda override zwracajaca stringa - info o gps Mercedesa
     * @return string     nazwa modelu gps Mercedesa
    */
    std::string GpsInfo()const override;
};