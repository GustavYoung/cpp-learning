#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "shuffle.h"

int main()
{
    int trials(0);
    std::string word, trial(""), scramble;
    std::cout << "Entrez le mot : " << std::endl;
    std::cin >> word ;
    scramble = shuffleWord(word);
    do{
        std::cout << "Quel est ce mot ? " << scramble << std::endl;
        std::cin >> trial;
        if (trial.compare(word) != 0) trials++;
    }while(trial.compare(word) != 0);
    std::cout << "Congrats, it took you " << trials << " attempts !" << std::endl;
    return 0;
}

