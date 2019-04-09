#pragma once
#include "Gps.h"
#include "TrackingSystem.h"

/**
 * 
 * @class TrackingUnit
 * @brief       klasa opisujaca TrackingUnit, dziedziczaca po klasach Gps oraz TrackingSystem
 * 
*/
class TrackingUnit: public Gps, public TrackingSystem{
public:
    /**
     * @fn TrackingUnit
     * @brief           konstruktor
     * @param string    dir - kierunek swiata
    */
    TrackingUnit(std::string dir = "South");
    
    /**
     * @fn CompassDirection
     * @brief       metoda override zwracajaca kierunek swiata
     * @return      string - kierunek swiata 
    */
    std::string CompassDirection()const override;

    /**
     * @fn Location 
     * @brief       ustawia wspolrzedne geograficzne na podane w argumencie       
     * @param Coordinate&       loc - nowe wspolrzedne geograficzne
    */
    void Location(const Coordinate& loc);

    /**
     * @fn Start
     * @brief   ustawia obecne wspolrzedne Gps jako punkt startowy
    */
    void Start();

    /**
     * @fn Distance
     * @brief       metoda zwracajaca pokonany obecnie dystans od punktu startowego
     * @return      float - dystans zmierzony miedzy dwoma punktami mierzonymi
    */
    float Distance()const;

    /**
     * @fn LocationInfo
     * @brief           metoda zwraca informacje o polozeniu 
     * @return string   informacja o polozeniu
    */
    std::string LocationInfo()const;


    /**
     * @fn Go
     * @brief           metoda ktora pokonuje dystans w wybranym kierunku
     * @param float     distance - dystans ktory ma zostac pokonany
     * @param string    dir - kierunek w ktorym ma zostac przebyta droga
    */
    void Go(float distance, std::string dir);
private:
    float m_distance = 0; ///< pokonany obecnie dystans
    Coordinate m_start; ///< punkt poczatkowy 
};