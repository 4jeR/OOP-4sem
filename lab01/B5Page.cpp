#include "Page.h"
#include "B5Page.h"

B5Page::B5Page(const B5Page& other)
:Page(other)
{}
B5Page::B5Page(std::string header, std::string text)
:Page(header,text)
{}

void B5Page::Print()const{
    std::cout << "[Page::header]  " << m_header << std::endl;
    std::cout << "[Page::text]    " << m_text << std::endl;
}

B5Page* B5Page::Copy()const{
    B5Page* newPage = new B5Page(m_header + " (Copy)", m_text);
    return newPage;
}