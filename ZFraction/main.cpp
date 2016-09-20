#include <iostream>
#include "ZFraction.h"

int main()
{
    ZFraction test(10,5);
    ZFraction testt(2,2);
    ZFraction doot(4,0);
    ZFraction testtt;
    if ( test != doot){std::cout << "TEST";}
    else std::cout << "ELSE BLOCK";
    return 0;
}
