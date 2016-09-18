#include <iostream>
#include <string>
#include "Personnage.h" // Ordre d'initialisation : Nom, Nom d'arme, attaque d'arme !


int main()
{
    Personnage amine;
    Personnage zenAndroid("Amine", "Gun", 50);
    amine.attack(zenAndroid);
    zenAndroid.attack(amine);
    zenAndroid.attack(amine);
    amine.showStats();
    return 0;
}
