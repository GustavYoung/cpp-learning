#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>
#include "Arme.h"

class Personnage
{
public:
    Personnage();

    ~Personnage();

    Personnage(std::string name, std::string weapon_name, int weaponDamage);

    void showStats() const;

    void attack(Personnage&);

    void takeDamage(int);

    void drinkHealthPotion(int);

    void useSpell(int);

    void drinkManaPotion(int);

    void changeWeapon(std::string, int);

    bool isAlive() const;

private:

    int m_life;

    int m_mana;

    std::string m_name;

    Arme m_arme;

};


#endif // PERSONNAGE_H_INCLUDED
