#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>

class Personnage
{
public:
    Personnage();

    Personnage(std::string name, std::string weapon_name, int weaponDamage);

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

    int m_weaponDamage;

    std::string m_name;

    std::string m_weaponName;
};


#endif // PERSONNAGE_H_INCLUDED
