//
// Created by Administrator on 6/3/2020.
//

#ifndef MY_CPP_DESIGNPATTONS_STRAGETY_H
#define MY_CPP_DESIGNPATTONS_STRAGETY_H
#include <iostream>
#include <vector>
#include <algorithm>

class Mystragety {

public:
    virtual ~Mystragety();
    virtual std::string DoAlgorithm(const std::vector<std::string> &data) const = 0;

};

class Context {
private:
    Mystragety *m_strategy;

public:
    Context(Mystragety* stragety = nullptr);
    ~Context();

    void set_stragety(Mystragety* stragety);

    void DoSomeBussinessLogic() const;
};

class ConcreateStragetyA : public Mystragety
{
public:
    std::string DoAlgorithm(const std::vector<std::string> &data) const override;



};

class ConcreteStrategyB : public Mystragety
{
    std::string DoAlgorithm(const std::vector<std::string> &data) const override;

};

#endif //MY_CPP_DESIGNPATTONS_STRAGETY_H
