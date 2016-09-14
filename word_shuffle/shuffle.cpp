#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "shuffle.h"


std::string shuffleWord(std::string word)
{
    int pos(0);
    std::string reversed("");
    while(word.size()>0)
    {
        srand(time(0));
        pos = rand() % word.size();
        reversed += word[pos];
        word.erase(pos,1);
    }
    return reversed;
}
