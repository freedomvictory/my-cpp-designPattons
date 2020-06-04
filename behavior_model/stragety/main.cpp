//
// Created by Administrator on 6/3/2020.
//

#include <iostream>
#include "stragety.h"
/*created by victory 2020/06/04 */

/*reference https://refactoring.guru/design-patterns/strategy/cpp/example*/

void ClientCode()
{
    Context *context = new Context(new ConcreateStragetyA);
    std::cout << "Client: Strategy is set to normal sorting.\n";
    context->DoSomeBussinessLogic();
    std::cout << "\n";
    std::cout << "Client: Strategy is set to reverse sorting.\n";
    context->set_stragety(new ConcreteStrategyB);
    context->DoSomeBussinessLogic();
    delete context;
}

int main()
{
    ClientCode();
    return 0;
}