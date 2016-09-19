#include <iostream>
#include "Duree.h"

int main()
{
    Duree une;
    Duree deux(0,0,0);
    std::cout << "Hello world!" << std::endl;
    une.getDuree();deux.getDuree();
    if (une > deux)
        std::cout << "Kek" << std::endl;
    else
        std::cout << "NO TOOT 4 U !" << std::endl;
    return 0;
}
