#include <iostream>
#include "ZFraction.h"

int main()
{
    ZFraction test(4,7);
    ZFraction frac(4,5);
    ZFraction doot(45,81);
    ZFraction testtt;
    if (frac < test)
        {
            std::cout << "TEST" << std::endl;
        }
    else
        std::cout << "ELSE BLOCK" << std::endl;

    std::cout << doot.getString() << std::endl;

    return 0;
}
