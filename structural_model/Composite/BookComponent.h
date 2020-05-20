//
// Created by Administrator on 5/20/2020.
//

#ifndef MY_CPP_DESIGNPATTONS_BOOKCOMPONENT_H
#define MY_CPP_DESIGNPATTONS_BOOKCOMPONENT_H


class BookComponent {

public:
    BookComponent()
    {

    }
    virtual  ~BookComponent()
    {

    }

    virtual  void Add(BookComponent *newComponent)
    {

    }

    virtual void Remove(BookComponent * newComponent)
    {

    }

    virtual  void DisplayInfo() = 0;

};


#endif //MY_CPP_DESIGNPATTONS_BOOKCOMPONENT_H
