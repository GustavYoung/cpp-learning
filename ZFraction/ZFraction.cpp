#include "ZFraction.h"
#include <iostream>

int pgdc(int a, int b)
{
    /** \brief Fonction qui retourne le PlusGrandDiviseurCommun
     *          de deux nombres.
     *         Si le deuxième nombre est nul, la fonction retourne 0.
     * \param int a = Premier nombre
     * \param int b = Deuxieme nombre
     * \return pgcd
     */

    if (b == 0) return 0;
    int mod(0);
    while( a % b != 0 )
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    return b;
}

ZFraction::ZFraction(int num, int denom)
{
    m_defini = true;
    int diviseur = pgdc(num, denom);
    if (diviseur == 0) {m_defini = false;}
    else{
    m_numerateur = num / diviseur;
    m_denominateur = denom / diviseur;
    }
}

void ZFraction::getZFraction() const
{
    if(m_defini)std::cout << m_numerateur << "/" << m_denominateur << std::endl;
    else std::cout << "Cette fraction est indefinie !" << std::endl;
}

bool ZFraction::estEgal(ZFraction const& b) const
{
    if (!(m_defini) || !(b.m_defini)) return false;
    return (m_denominateur == b.m_denominateur && m_numerateur == b.m_numerateur);
}


bool operator==(ZFraction const& a, ZFraction const& b)
{
    return a.estEgal(b);
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
    return (!(a == b));
}
