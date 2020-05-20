//
// Created by victory on 5/20/2020.
//

/*you can refer to https://www.robertlarsononline.com/2017/05/01/composite-pattern-using-cplusplus/*/
#include <iostream>
#include "librarain.h"

int main() {
    char ch = 0;

    std::cout << "Hello, World!" << std::endl;

    librarain mylibrary;
    mylibrary.DisplayBookCollection();

    std::cin >> ch;
    return 0;
}

