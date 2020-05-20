//
// Created by Administrator on 5/20/2020.
//

#include "BookGroup.h"


BookGroup::BookGroup(std::string groupName)
:m_groupName(groupName){

}

BookGroup::~BookGroup()
{
    std::vector<BookComponent*>::iterator pos;

    for(pos = m_bookCompoents.begin(); pos != m_bookCompoents.end(); ++pos)
    {
        BookComponent *deleteElement = *pos;
        delete deleteElement;
    }
    m_bookCompoents.clear();

}

void BookGroup::Add(BookComponent *newComponent)
{
    m_bookCompoents.push_back(newComponent);
}

void BookGroup::Remove(BookComponent *oldComponent)
{
    std::vector<BookComponent*>::iterator pos;

    for(pos = m_bookCompoents.begin(); pos != m_bookCompoents.end(); ++pos)
    {
        if(*pos == oldComponent)
        {

            m_bookCompoents.erase(pos);

            delete oldComponent;
            break;
        }
    }

}

void BookGroup::DisplayInfo()
{
    std::string spaces = "    ";
    std::cout << "group_name:" << m_groupName << "\n";

    std::vector<BookComponent*>::iterator pos;

    for(pos = m_bookCompoents.begin(); pos != m_bookCompoents.end(); ++pos)
    {
        std::cout << spaces;
        BookComponent *elementPrint = *pos;
        elementPrint->DisplayInfo();
    }
    std::cout << "\n";
}