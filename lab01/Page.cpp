#include "Page.h"
#include "B5Page.h"

Page::Page(const Page& other)
:m_header(other.m_header),m_text(other.m_text)
{
}

Page::Page(std::string header , std::string text)
:m_header(header), m_text(text)
{}

void Page::Print()const{
    std::cout << "[Page::header]  " << m_header << std::endl;
    std::cout << "[Page::text]    " << m_text << std::endl;
}

void Page::SetHeader(std::string header){
    m_header = header;
}

