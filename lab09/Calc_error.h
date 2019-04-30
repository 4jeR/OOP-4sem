#pragma once
#include <stdexcept>
#include <string>
#include <iostream>
#include <vector>
#include "LicznikPoziomow.h"


// klasa Calc_error opisujaca wyrzucany blad
class Calc_error : public std::runtime_error{
public:
    // konstruktor klasy calc_error, ktory dodaje nowy error do statycnzego wektora runtime_error'ow
    Calc_error(std::runtime_error* err, std::string name, std::string file, int line);

    // statyczna metoda: handler ktora obsluguje wyrzucone wyjatki oraz czysci pamiec
    static void handler();
private:
    // statyczny wektor wskaznikow na runtime_error'y
    static std::vector<std::runtime_error*> m_vec;    
};

std::vector<std::runtime_error*> Calc_error::m_vec;


void Calc_error::handler(){
    std::cout << " Zlapano wyjatek: " << std::endl;
    
    for(int i = m_vec.size()-1; i>=0; --i){
        std::cout << " -- Z powodu: " << m_vec.at(i) -> what() << std::endl;
        delete m_vec.at(i);
    }    
}

Calc_error::Calc_error(std::runtime_error* err, std::string name, std::string file, int line)
:std::runtime_error(name + ", [plik = " + file + ", linia = " + std::to_string(line) + "]")
{   
    if(LicznikPoziomow::s_counter == 1){
        m_vec.push_back(err);
    } 
    m_vec.push_back(this);   
   
}


