//
// Created by Administrator on 5/20/2020.
//

#include "Book.h"


Book::Book(std::string bookTitle, std::string author)
:m_title(bookTitle),
m_author(author)
{
}

Book::~Book()
{



}

void Book::DisplayInfo()
{
    std::cout << "Book: " << m_title << "by " << m_author << "\n";
}