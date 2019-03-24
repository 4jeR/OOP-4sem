#pragma once
#include <vector>
#include "Engine.h"
#include "WheelArray.h"

/* statyczna zmienna opisujaca defaultowy kolor produkowanych samochodow */
static std::string s_kolor = "Red";


// klasa opisujaca samochody
class Car{
public:
    // konstruktor dla klasy Car
    Car(std::string name = "car", Engine engine = Engine());
    // destruktor dla klasy Car
    virtual ~Car();
    
    // statyczna metoda zwracajaca wskaznik na nowo wyprodukowany obiekt typu Car
    static Car* Create(std::string name);
    // statyczna metoda ustawiajaca kolor produkowanych samochodow na podany w argumencie
    static void DefaultColor(std::string color);

    // metoda zwracajaca wskaźnik na obiekt WheelArray
    WheelArray* Wheels()const;

    // metoda zwracajaca wektor kół
    std::vector<Wheel*>& WheelsVector()const;

    // operator wypisujacy parametry samochodu
    friend std::ostream& operator<<(std::ostream& out, const Car& car);


protected:
    std::string m_name;
    Engine m_engine;
    WheelArray* m_wheelarray;
    
};

