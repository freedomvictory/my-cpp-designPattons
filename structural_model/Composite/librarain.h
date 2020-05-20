//
// Created by Administrator on 5/20/2020.
//

#ifndef MY_CPP_DESIGNPATTONS_LIBRARAIN_H
#define MY_CPP_DESIGNPATTONS_LIBRARAIN_H
#include "BookComponent.h"
#include <iostream>

class librarain {

public:
    librarain();
    virtual ~librarain();

    void DisplayBookCollection();

private:

    void BuildBookCollection();
    BookComponent * BuildFictionGroup();
    BookComponent * BuildNonfictionGroup();

    BookComponent * BuildKidsGroup();
    BookComponent * BuildKidsAges3To5Group();
    BookComponent * BuildBiographyGroup();

    void AddBookToGroup(BookComponent* group, std::string bookTitle, std::string author);

    BookComponent* m_pBookCollection;
};


#endif //MY_CPP_DESIGNPATTONS_LIBRARAIN_H
