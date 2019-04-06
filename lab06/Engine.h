#pragma once
#include <string>
#include <iostream>


/**
 * @class Engine
 * @brief       klasa opisujaca silnik w samochodzies
*/
class Engine{
public:
    /**
     * @fn Engine
     * @brief               konstruktor dla klasy Engine
     * @param string        fuel - nazwa paliwa
     * @param int           cap - pojemnosc
     * @param int           power - moc silnika
    */
    Engine(std::string fuel = "ON", int cap = 1598, int power = 65);

    /**
     * 
     * @fn operator<<
     * @brief            operator wypisujacy parametry silnika
     * @param ostream&   out - standardowy strumien wyjscia do zwrocenia
     * @param Engine&    engine - silnik, ktory ma byc wypisany
     * @return ostream&  standardowy strumien
     * 
    */
    friend std::ostream& operator<<(std::ostream& out, const Engine& engine);

private:
    std::string m_fuel;
    int m_capacity;
    int m_power;
};
