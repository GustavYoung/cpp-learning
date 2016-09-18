#include "Personnage.h"
#include <iostream>


void Personnage::attack(Personnage &target)
{
    target.takeDamage(m_arme.getDamage());
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
    m_arme.changeWeapon(name,newWeaponDamage);
}

bool Personnage::isAlive() const
{
    return ( m_life > 0 );
}

void Personnage::showStats() const
{
    std::cout << "Nom : " << m_name << std::endl;
    std::cout << "HP : " << m_life << std::endl << "Mana : " << m_mana << std::endl;
    m_arme.showInfo();
}


Personnage::Personnage()
:m_life(100), m_mana(100), m_name("Vagabond"), m_arme("Epee rouillée",25)
{}


Personnage::Personnage(std::string fname, std::string weapon_name, int weaponDmg)
:m_life(100), m_mana(100), m_name(fname), m_arme(weapon_name,weaponDmg)
{}

Personnage::~Personnage()
{}

