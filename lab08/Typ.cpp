#include "Typ.h"


void typ1::PrzedstawSie()const{
    std::cout << "Nazywam sie 1 (adres obiektu: <"<< this << ">)" << std::endl;
}

void typ2::PrzedstawSie()const{
    std::cout << "Nazywam sie 2 (adres obiektu: <"<< this << ">)" << std::endl;
}

void typ3::PrzedstawSie()const{
    std::cout << "Nazywam sie 3 (adres obiektu: <"<< this << ">)" << std::endl;
}

void typ4::PrzedstawSie()const{
    std::cout << "Nazywam sie 4 (adres obiektu: <"<< this << ">)" << std::endl;
}


typ4::typ4(ObiektMiotajacy* ptr)
:m_ptr(ptr)
{

}

typ4::~typ4(){
    delete m_ptr;
}
