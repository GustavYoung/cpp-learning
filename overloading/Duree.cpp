#include "Duree.h"
#include <iostream>


/// Constructeurs et destructeur


Duree::Duree(int h, int m, int s) : m_heures(h), m_min(m), m_sec(s)
{

}

Duree::~Duree()
{

}

/// Getters

void Duree::getDuree()
{
    std::cout << m_heures << ":" << m_min << ":" << m_sec << std::endl;
}

/// Méthodes publiques de comparaison

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_min == b.m_min && m_sec == b.m_sec);
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
    if (m_heures < b.m_heures) return true;
    if (m_heures == b.m_heures && m_min < b.m_min) return true;
    if (m_heures == b.m_heures && m_min == b.m_min && m_sec < b.m_sec) return true;
    return false;
}


/*
    Overloading operators
*/
bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

bool operator!=(Duree const& a,Duree const& b)
{
    return !(a == b);
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.estPlusPetitQue(b);
}

bool operator>(Duree const& a, Duree const& b)
{
    return !(a.estPlusPetitQue(b)) && a != b;
}

bool operator<=(Duree const& a, Duree const& b)
{
    return a < b || a == b;
}

bool operator>=(Duree const& a, Duree const& b)
{
    return a > b || a == b;
}

