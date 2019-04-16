#pragma once
#include <iostream>
#include "ObiektMiotajacy.h"

/**
 * 
 * @class Typ
 * @brief   klasa virtualna po ktorej dziedzicza wszystkie typy
 * 
*/
class Typ{
public:
    /**
     * @fn ~Typ
     * @brief   destruktor dla dziedziczenia
    */
    virtual ~Typ(){}

    /**
     * @fn PrzedstawSie
     * @brief   czysto wirtualna metoda przedstawiajaca dany typ
    */
    virtual void PrzedstawSie()const =  0;
};


/**
 * @class typ1
*/
class typ1: virtual public Typ{
public:
    /**
     * @fn PrzedstawSie
     * @brief   wirtualna metoda override przedstawiajaca typ1
    */
    void PrzedstawSie()const override;

};

/**
 * @class typ2
*/
class typ2: virtual public Typ{
public:

    /**
     * @fn PrzedstawSie
     * @brief   wirtualna metoda override przedstawiajaca typ2
    */
    void PrzedstawSie()const override;

};

/**
 * @class typ3
*/
class typ3: virtual public Typ{
public:

    /**
     * @fn PrzedstawSie
     * @brief   wirtualna metoda override przedstawiajaca typ3
    */
    void PrzedstawSie()const override;

};

/**
 * @class typ4
*/
class typ4 : virtual public Typ, public typ1{
public:
    /**
     * @fn typ4                 konstruktor typu4
     * @brief                   potrzebna jest informacja do tego, jaki obiekt miotajacy rzucil tym wyjatkiem,
     *                           by moc zwolnic pamiec
     * @param ObiektMiotajacy   ptr - wskaznik na obiekt, ktory rzucil danym typem-wyjatkiem
    */
    typ4(ObiektMiotajacy* ptr = nullptr);

    /**
     * @fn ~typ4    
     * @brief
    */
    ~typ4();
    /**
     * @fn PrzedstawSie
     * @brief   wirtualna metoda override przedstawiajaca typ4
    */
    void PrzedstawSie()const override;


private:
    ObiektMiotajacy* m_ptr; //< wskaznik na obiekt ktory rzucil danym wyjatkiem
};