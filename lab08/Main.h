#pragma once


#include "Typ.h"
#include "ObiektMiotajacy.h"


void Przetworz(typ1* wyjatek){
    std::cout << "Przetworz - wyjatek typu 1 o adresie: "<< wyjatek << std::endl;
    throw ; 

}

void Przetworz(typ2* wyjatek){
    std::cout << "Przetworz - wyjatek typu 2 o adresie: "<< wyjatek << std::endl;
    throw ;
}