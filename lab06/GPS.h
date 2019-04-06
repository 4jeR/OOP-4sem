#pragma once
#include "Haversine.h"
#include <string>


/**
 * 
 * @class GPS
 * @brief       klasa opisujaca GPS ktory jest skladnikiem klasy Car
 * 
*/
class GPS{
public:
    /**
     * @fn GPS
     * @brief       konstruktor dla klasy GPS
     * @param string    name - nazwa GPS
    */
    GPS(std::string name = "null");


    /**
     * @fn GetName
     * @brief           getter dla nazwy GPS
     * @return string   nazwa gps
     * 
    */
    std::string GetName()const;

    /**
     * @fn SetName
     * @brief           setter dla nazwy modelu GPS
    */
    void SetName(std::string& name);


    void UpdateLocation(float longitude, float latitude);

    Coordinate& Coords();

    std::string GpsLoc()const;

private:
    std::string m_name;  
    Coordinate m_coords;
};