#pragma once
#include "Haversine.h"
#include <string>
#include "Compass.h"

/**
 * 
 * @class Gps
 * @brief       klasa opisujaca Gps ktory jest skladnikiem klasy Car
 * 
*/
class Gps: public virtual Compass{
public:
    /**
     * @fn Gps
     * @brief       konstruktor dla klasy Gps
     * @param string    name - nazwa gps
     * @param float    longi - dlugosc geograficzna
     * @param float    lati - szerokosc geograficzna
    */
    Gps (std::string name ="East", float longi = 0, float lati = 0);

    /**
     * @fn GetName
     * @brief           getter dla nazwy Gps
     * @return string   nazwa Gps
     * 
    */
    std::string GetName()const;

    /**
     * @fn SetName
     * @brief           setter dla nazwy modelu Gps
    */
    void SetName(std::string& name);

    /**
     * @fn UpdateLocation       
     * @brief            aktualizuje wspolrzedne Gps
     * @param float      longitude - dlugosc geograficzna
     * @param float      latitude - szerokosc geograficzna
    */
    void UpdateLocation(float longitude, float latitude);

    /**
     * @fn Coords      
     * @brief               getter dla m_coords
     * @return Coordinate&  wspolrzedne Gps w postaci Coordinate
    */
    Coordinate& Coords();

    /**
     * @fn GpsLoc
     * @brief               wypisuje informacje o polozeniu Gps
     * @return string       informacja o polozeniu Gps
    */
    std::string GpsLoc()const;


    /**
     * @fn CompassDirection
     * @brief               metoda zwracajca informacje o polozeniu kompasu
     * @return string       kierunek kompasu
    */
    std::string CompassDirection()const override;

    /**
     * @fn Location
     * @brief               metoda zwraca obecne polozenie Gps
     * @return Coordinate   wspolrzedne geograficzne Gps
    */
    Coordinate Location()const;

protected:
    std::string m_name;  ///< model Gps
    Coordinate m_coords;///< polozenie kompasu
};