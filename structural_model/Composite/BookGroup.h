//
// Created by Administrator on 5/20/2020.
//

#ifndef MY_CPP_DESIGNPATTONS_BOOKGROUP_H
#define MY_CPP_DESIGNPATTONS_BOOKGROUP_H

#include "BookComponent.h"
#include <vector>
#include <iostream>

class BookGroup : public BookComponent{

public:
    BookGroup(std::string groupName);
    virtual ~BookGroup();

    virtual void Add(BookComponent* newComponent);
    virtual void Remove(BookComponent* oldComponent);
    virtual void DisplayInfo();



private:
    std::string m_groupName;
    std::vector<BookComponent*> m_bookCompoents;


};


#endif //MY_CPP_DESIGNPATTONS_BOOKGROUP_H
