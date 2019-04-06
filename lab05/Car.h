#pragma once
#include <string>
#include <vector>

#include "Engine.h"
#include "GPS.h"





/**
 * @class Car
 * @brief       wirtualna klasa opisujaca obiekty jakimi są samochody
*/
class Car{
public:
    /**
     * @fn      Car       
     * @brief             konstruktor dla klasy Car
     * @param   string    nazwa modelu samochodu
     * @param   Engine    obiekt opisujacy silnik samochodu
     * @param   GPS       model GPS dla samochodu  
    */
    Car(std::string name = "car", Engine engine = Engine(), GPS gps = GPS());

    /**
     * @fn      ~Car      
     * @brief              destruktor wirtualny dla dziedziczenia po klasie Car    
    */
    virtual ~Car(){}
    
    /**
     * @fn      Create    
     * @brief             statyczna metoda zwracajaca wskaznik na nowo wyprodukowany obiekt typu Car
     * @param   string    nazwa modelu samochodu
     * @return  Car*      wskaznik na nowo utworzony obiekt
    */
    static Car* Create(std::string name);
    
    /**
     * @fn      GetColor  
     * @brief               getter zwracajacy kolor samochodu
     * @return  string   
    */
    static std::string GetColor();

    /**
     * @fn      GpsInfo     
     * @brief             wirtualna metoda zwracajaca stringa - info o gps dla danej klasy pochodnej
     * @return string     nazwa modelu gps samochodu
    */
    virtual std::string GpsInfo()const = 0;

    /**
     * 
     * @fn operator<<
     * @brief               operator wypisujacy parametry samochodu
     * @param ostream&      out - standardowy strumien ostream do zwrocenia
     * @param Car&          car - samochod ktory ma byc wypisany
     * @return ostream&     standardowy strumien
    */
    friend std::ostream& operator<<(std::ostream& out, const Car& car);


protected:
    std::string m_name; ///< nazwa modelu samochodu
    static std::string s_color; ///< kolor produkowanych samochodow
    Engine m_engine;  ///< silnik samochodu
    GPS m_gps; ///< gps samochodu
};


