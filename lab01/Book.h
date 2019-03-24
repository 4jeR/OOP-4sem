#pragma once

#include <string>
#include "Page.h"
#include "B5Page.h"
#include <iostream>
#include <vector>

class Book: public Page{
public:
    Book(std::string title = "Programowanie Obiektowe 1", std::string autor = "Anonym", int pagesCount = 0);
    void AddPage(B5Page* b5page);
    void Print()const override;

    virtual void SetHeader(std::string header)override;

    int GetPagesCount()const{return m_pagesCount;}
private:
    std::vector<Page*> m_pages;
    int m_pagesCount;
};