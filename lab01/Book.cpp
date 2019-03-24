#include "Book.h"
#include "Page.h"
#include "B5Page.h"

Book::Book(std::string title, std::string autor, int pagesCount)
:Page(autor,title), m_pagesCount(pagesCount)
{}

void Book::AddPage(B5Page* b5page){
    for(Page* p : m_pages){
        if(p == b5page){
            std::cout << "[WARNING]:: Trying to add already existing page!" << std::endl;
            return;
        }
    }
    // add page to the book
    m_pages.push_back(b5page);
    
}
void Book::Print()const {
    std::cout << std::endl;
    std::cout << "[Book::autor]     " << m_header << std::endl;
    std::cout << "[Page(0)::text]   " << m_text << std::endl;
    int i=1;
    for(Page* p : m_pages){
        std::cout << "[Page(" << i << ")::header]   " << p->GetHeader() << std::endl;
        std::cout << "[Page(" << i << ")::text]     " << p->GetText() << std::endl;
        i++;
    }
}
void Book::SetHeader(std::string header){
    int i = 1;
    for(Page* p : m_pages){
        if(i==1)continue;
        p->SetHeader("empty");
        i++;
    }
}