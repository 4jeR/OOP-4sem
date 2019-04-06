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

    /**
     * @fn UpdateLocation       
     * @brief            aktualizuje wspolrzedne GPS
     * @param float      longitude - dlugosc geograficzna
     * @param float      latitude - szerokosc geograficzna
    */
    void UpdateLocation(float longitude, float latitude);

    /**
     * @fn Coords      
     * @brief               getter dla m_coords
     * @return Coordinate&  wspolrzedne gps w postaci Coordinate
    */
    Coordinate& Coords();

    /**
     * @fn GpsLoc
     * @brief               wypisuje informacje o polozeniu GPS
     * @return string       informacja o polozeniu GPS
    */
    std::string GpsLoc()const;

private:
    std::string m_name;  
    Coordinate m_coords;
};