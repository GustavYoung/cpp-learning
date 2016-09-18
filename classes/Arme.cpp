#include "Arme.h"
#include <iostream>

Arme::Arme()
:m_name("Eppée de merde"), m_damage(25)
{}

Arme::~Arme()
{}


Arme::Arme(std::string name,int newDamage)
:m_name(name), m_damage(newDamage)
{}

void Arme::changeWeapon(std::string name, int damage)
{
    m_name = name;
    m_damage = damage;
}

void Arme::showInfo() const
{
    std::cout << "Name of weapon is : " << m_name << ", and it deals " << m_damage << std::endl;
}

int Arme::getDamage() const
{
   return m_damage;
}

