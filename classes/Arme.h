#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include <string>

class Arme
{
public:

    Arme();

    Arme(std::string, int);

    void changeWeapon(std::string, int);

    void showInfo();

private:

    std::string m_name;

    int m_damage;

};

#endif // ARME_H_INCLUDED
