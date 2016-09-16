#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <ctype.h>

std::string shuffle(std::string word)
{

    /** \brief Fonction qui mélange les lettres d'un mot.
     *
     * \param word : std::string Le mot(chaine de caractere) qui devrait être mélangés
     * \param
     * \return Cette fonction retourne une chaine de caracteres du mot mélangé.
     *
     */
    std::string randomized("");
    int random_pos(0);


    srand(time(0)); // On ré-initialise le 'seed' chaque fois que la fonction est appelée

    while(word.size()>0)
    {
        random_pos = rand() % word.size(); // Génére une valeur aléatoire entre 0 et la taille de l'argument.

        randomized.push_back(word[random_pos]); // On ajoute la lettre aléatoire à un autre std::string.

        word.erase(random_pos,1); // On efface la premiere instance de la lettre !

    }
    return randomized;
}


void nouvelle_partie(int essai){

    /** \brief Fonction qui gére une nouvelle partie de mot mystere.
     *
     * \param int: essai, le nombre d'essai l'utilsateur a pour deviner le mot mélangé?
     * \return Cette fonction ne retourne rien.
     *
     */

    srand(time(0)); // Generez un seed

    system("cls"); // Clear console !

    int choix(0), attempt(essai); /* Déclaration de variable 'choix' pour le choix entre saisir le mot ou utiliser le dictionnaire
                                et la variable 'attempt' qui se décrementera apres chaque assai.*/

    std::string motchoisi,shuffled,guess;
    /*
        motchoisi = Le mot mystere
        shuffled = Le mot qui s'affichera à l'utilisateur
        guess = La variable temporaire qui acceuillera les essais de l'utilisateur
    */
    std::vector<std::string> mots; // Tableau dynamique qui receuillera les mots trouvé dans le dossier
    std::ifstream dicto("./dict.txt"); // Ouvrir le dossier

    if(dicto){
        std::string temp;
        while(getline(dicto,temp)){
            mots.push_back(temp); // Ajoute le mots au tableau dynamique.
        }
    }
    else
        std::cout << "Erreur le de 'louverture du dictionnaire" << std::endl;
    std::cout << "Voulez-vous ...\n1)Tapez le mot ?\n2)Auto-générez le mot a l'aide du dictionnaire ? " << std::endl;
    do{
       std::cin >> choix;
    }while(choix<1 || choix>2);
    if(choix==1){
        std::cout << "Tapez le mot : " << std::endl;
        std::cin >> motchoisi;
    }
    else{
        motchoisi = mots[rand() % mots.size()]; // Choisir un mot aléatoire entre les mots du dictionnaire et le mettre dans la variable 'motchoisi'
    }
    shuffled = shuffle(motchoisi); // On passe le mot choisi comme argument a la fonction qui mélange.
    while(attempt > 0)
    {
        std::cout << "Quel est ce mot ? " << shuffled << std::endl;
        std::cin >> guess;
        if(guess == motchoisi) { std::cout << "Bravo ! vous avez gagnez la partie !" << std::endl;return;}
        attempt--;
        std::cout << "Faux !" << std::endl;
        std::cout << "Il vous reste " << attempt << " essai !" << std::endl;
    }
    std::cout << "Vous avez perdu ! " << std::endl;
    std::cout << "Le mot etait " << motchoisi << "!" << std::endl;
}

int main()
{
    /** \brief La fonction principale
     *
     * \param Aucun
     * \return 0 si tout se passe bien, sinon un autre entier naturel
     *
     */

    int mode;/* Mode 1 = Facile;
    Mode 2 = Moyen;
    Mode 3 = Difficile;
    */
    char cont;
    do{
    system("cls"); // Clear console !
    std::cout << "Nouvelle partie de mot mystere, quelle mode de jeu voulez vous ?" << std::endl;
    std::cout << "1 - Facile (12 essais)." << std::endl;
    std::cout << "2 - Moyen (8 essais)." << std::endl;
    std::cout << "3 - Difficile (3 essai)." << std::endl;
    do{std::cin >> mode;}while(mode<1 || mode>3);
    switch(mode){
    case 1 : nouvelle_partie(12);break;
    case 2 : nouvelle_partie(8);break;
    case 3 : nouvelle_partie(3);break;
    }
    std::cout << "Continuez ? (o/n)" << std::endl;
    do{std::cin >> cont;}while(cont != 'o' && cont != 'O' && cont != 'n' && cont != 'N');
    }while(cont == 'o' || cont == 'O');
    return 0;
}
