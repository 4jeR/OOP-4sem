#pragma once
#include <iostream>


// klasa Calc_error opisujaca LicznikPoziomow
class LicznikPoziomow{
public:
    // glosny konstruktor klasy LicznikPoziomow
    LicznikPoziomow();
    // glosny destruktor klasy LicznikPoziomow
    ~LicznikPoziomow();
    
    friend class Calc_error;
private:
    // statyczna zmienna okreslajaca licznik poziomow
    static int s_counter;

};


int LicznikPoziomow::s_counter = 0;



LicznikPoziomow::LicznikPoziomow(){
    ++LicznikPoziomow::s_counter;
    std::cout << "Rozpoczynamy poziom numer " << LicznikPoziomow::s_counter << "." << std::endl;
}

LicznikPoziomow::~LicznikPoziomow(){
    std::cout << "Konczymy poziom numer " << LicznikPoziomow::s_counter << "." << std::endl;
    --LicznikPoziomow::s_counter;
}