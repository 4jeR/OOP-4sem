#pragma once


class Factory{
public:
    
    template <typename T>
    void prototype(const T& obj);

    template <typename T>
    T produce();

};



template <typename T>
void Factory::prototype(const T& obj){
    static T temp;
    temp = obj; 
}

template <typename T>
T Factory::produce(){
    static T temp;
    return temp;
}