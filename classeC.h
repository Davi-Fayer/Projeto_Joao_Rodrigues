#ifndef CLASSEC_H
#define CLASSEC_H

#include <iostream>
#include <string>

class C
{
private:
    std::string C1;
    int C2;

public:
    void MC1()
    {
        std::cout << "MC1" << std::endl;
    }

    void MC2()
    {
        std::cout << "MC2" << std::endl;
    }
};

#endif