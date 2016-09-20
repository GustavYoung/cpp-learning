#include <iostream>
#include "ZFraction.h"

int main()
{
    ZFraction test(48,5);
    ZFraction testt(5,8);
    ZFraction doot(4,0);
    ZFraction testtt;
    if ( test == testt){std::cout << "TEST";}
    else std::cout << "ELSE BLOCK";
    return 0;
}
