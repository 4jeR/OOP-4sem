#pragma once
#include <string>
#include <iostream>


class Page{
public:
    Page(const Page& other);
    Page(std::string header = "empty", std::string text = "empty");
    virtual ~Page(){}

    virtual void Print()const;
    virtual void SetHeader(std::string header);
    
    std::string GetHeader()const{return m_header;}
    std::string GetText()const{return m_text;}
protected:
    std::string m_header;
    std::string m_text;
};