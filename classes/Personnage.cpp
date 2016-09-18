#include "Personnage.h"
#include <iostream>


void Personnage::attack(Personnage &target){
    target.takeDamage(m_weaponDamage);
}

void Personnage::takeDamage(int damage)
{
    m_life -= damage;
    m_life = (m_life < 0) ? 0 : m_life;
}

void Personnage::drinkHealthPotion(int recovery)
{
    m_life += recovery;
    m_life = (m_life > 100) ? 100 : m_life;
}

void Personnage::useSpell(int spellCost)
{
    m_mana -= spellCost;
    m_mana = (m_mana < 0) ? 0 : m_mana ;
}

void Personnage::drinkManaPotion(int recovery)
{
    m_mana += recovery;
    m_mana = (m_mana > 100 ) ? 100 : m_mana;
}

void Personnage::changeWeapon(std::string name, int newWeaponDamage)
{
    m_weaponName = name;
    m_weaponDamage = newWeaponDamage;
}

bool Personnage::isAlive() const
{
    return ( m_life > 0 );
}


Personnage::Personnage()
:m_life(100), m_mana(100), m_weaponDamage(50), m_name("Vagabond"), m_weaponName("Eppée de merde")
{}


Personnage::Personnage(std::string fname, std::string weapon_name, int weaponDmg)
:m_life(100), m_mana(100), m_weaponDamage(weaponDmg), m_name(fname), m_weaponName(weapon_name)
{}

