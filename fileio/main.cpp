#include <iostream>
#include <fstream>
#include <string>



int main()
{
    int linenum(0);
    std::string temp;
    std::string test[50];
    std::ofstream stream("C:/Users/Amine/Documents/GitHub/cpp-learning/fileio/test.txt");
    std::ifstream str("C:/Users/Amine/Documents/GitHub/cpp-learning/fileio/ifstream.txt");
    std::ifstream str1("C:/Users/Amine/Documents/GitHub/cpp-learning/fileio/ifstream.txt");
    if(stream){
        std::cout << "All good !" << std::endl;
        stream << "Ayy, lmao !" << std::endl;
        stream << "I want to know how to figure out the path from which this is running from though ;(" << std::endl;
        stream << "I also want to know how to set up the declaration of the stream in such a way that it creates the file ";
        stream << "in the folder this is running from (wherever it might be)" << std::endl;
        stream << "I'll figure it out soon though (i hope) ! " << std::endl;
    }
    else{std::cout << "Erreur lors de l'ouverture du fichier !" << std::endl;}
    if(str){
        while(getline(str,temp))
            linenum++;
        for(int i(0);i<linenum;i++)
            getline(str1,test[i]);
        for(int i(0);i<linenum;i++)
            std::cout << test[i] << std::endl;
    }
    else{std::cout << "Probleme dans la lecture du fichier " << std::endl;}
    std::cout << "All done !" << std::endl;
    return 0;
}
