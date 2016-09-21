#include <iostream>
#include "ZFraction.h"

int main()
{
    ZFraction test(6,3);
    ZFraction doot(666,0);
    ZFraction f1(test+doot);
    ZFraction f2(test/doot);
    ZFraction f3(test*doot);
    ZFraction f4(test-doot);
    std::cout << "+ : " << test+doot << "    " << f1 << std::endl;
    std::cout << "/ : " << test/doot << "    " << f2 << std::endl;
    std::cout << "* : " << test*doot << "    " << f3 << std::endl;
    std::cout << "- : " << test-doot << "    " << f4 << std::endl;
}
