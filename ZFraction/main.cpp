#include <iostream>
#include "ZFraction.h"

int main()
{
    ZFraction test(4,87);
    ZFraction frac(15,48);
    ZFraction doot(45);
    ZFraction fuck = test / frac;
    std::cout << fuck.getString() << std::endl;

    return 0;
}
