#pragma once
#include "Page.h"


class B5Page : public Page{
public:
    B5Page(const B5Page& other);
    B5Page(std::string header = "empty", std::string text = "empty");

    void Print()const override;
    B5Page* Copy()const;
};


