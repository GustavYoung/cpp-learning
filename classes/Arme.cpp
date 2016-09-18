#include "Arme.h"
#include <iostream>

Arme::Arme()
:m_name("Eppée de merde"), m_damage(25)
{}

Arme::Arme(std::string name,int newDamage)
:m_name(name), m_damage(newDamage)
{
    /* Noot Noot */
}

void Arme::changeWeapon(std::string name, int damage)
{
    m_name = name;
    m_damage = damage;
}

void Arme::showInfo()
{
    std::cout << "Name of weapon is : " << m_name << ", and it deals " << m_damage << std::endl;
}
