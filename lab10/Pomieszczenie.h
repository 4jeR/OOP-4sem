#pragma once
#include <string>
#include <iostream>

class Pomieszczenie{
public:
    Pomieszczenie(const std::string& name);

    void zetrzyj_kurze()const;
    void umyj_podloge()const;
    void odkurz()const;

    template <typename T>
    void wstaw(const T& furniture);

    std::string Name()const{return m_name;}
private:
    std::string m_name;
};

Pomieszczenie::Pomieszczenie(const std::string& name)
:m_name(name)
{ 
    std::cout << " Tworze pomieszcznie: " << m_name << std::endl;
}


void Pomieszczenie::zetrzyj_kurze()const{
    std::cout << " Scieram kurze w pomieszczeniu: " << m_name << std::endl;
}


void Pomieszczenie::umyj_podloge()const{
    std::cout << " Myje podloge w pomieszczeniu:: " << m_name << std::endl;
}

void Pomieszczenie::odkurz()const{
    std::cout << " Odkurzam pomieszczenie: " << m_name << std::endl;
}

template <typename T>
void Pomieszczenie::wstaw(const T& furniture){
    std::cout << " Wstawiam " << furniture << " do pomieszczenia: " << m_name << std::endl;
}

template <void (Pomieszczenie::*funptr)()const>
void Lokaj(Pomieszczenie& pom){
    (pom.*funptr)();
}

template <void (Pomieszczenie::*funptr)()const>
void Lokaj(const Pomieszczenie& pom){
    std::cout << " Pomieszczenie " << pom.Name() << " jest zamknięte. "<< std::endl;
}


template <char>
void Lokaj(const Pomieszczenie& pom){
    std::cout << "Nic nie robie." << std::endl;
}