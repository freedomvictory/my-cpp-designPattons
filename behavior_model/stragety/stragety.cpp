//
// Created by Administrator on 6/3/2020.
//

#include "stragety.h"


Mystragety::~Mystragety()
{


}



Context::Context(Mystragety *stragety) : m_strategy(stragety)
{

}
void Context::set_stragety(Mystragety *stragety)
{
    delete this->m_strategy;

    this->m_strategy = stragety;
}

void Context::DoSomeBussinessLogic() const
{
    // ...
    std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
    std::string result = this->m_strategy->DoAlgorithm(std::vector<std::string>{"a", "e", "c", "b", "d"});
    std::cout << result << "\n";
    // ...

}
Context::~Context()
{

}


std::string ConcreateStragetyA::DoAlgorithm(const std::vector<std::string> &data) const
{

    std::string result;
    std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
        result += letter;
    });
    std::sort(std::begin(result), std::end(result));

    return result;
}

std::string ConcreteStrategyB::DoAlgorithm(const std::vector<std::string> &data) const
{
    std::string result;
    std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
        result += letter;
    });
    std::sort(std::begin(result), std::end(result));
    for (int i = 0; i < result.size() / 2; i++)
    {
        std::swap(result[i], result[result.size() - i - 1]);
    }

    return result;

}