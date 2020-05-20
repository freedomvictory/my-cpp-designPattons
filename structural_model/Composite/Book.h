//
// Created by Administrator on 5/20/2020.
//

#ifndef MY_CPP_DESIGNPATTONS_BOOK_H
#define MY_CPP_DESIGNPATTONS_BOOK_H

#include "BookComponent.h"
#include <iostream>

class Book : public BookComponent {

public:
    Book(std::string bookTitle, std::string author);
    virtual ~Book();

    virtual  void DisplayInfo();

private:

    std::string m_title;
    std::string m_author;
};


#endif //MY_CPP_DESIGNPATTONS_BOOK_H
