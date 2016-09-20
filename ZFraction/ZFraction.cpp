#include "ZFraction.h"
#include <iostream>
#include <string>
#include <sstream>

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
    if (diviseur == 0)
    {
        m_defini = false;
    }
    else
    {
        m_numerateur = num / diviseur;
        m_denominateur = denom / diviseur;
    }
}

std::string ZFraction::getString() const
{
    if(!m_defini)
        return "Fraction non definie !";
    if(m_denominateur == 1)
    {
        std::string result;
        std::ostringstream convert;
        convert << m_numerateur;
        result = convert.str();
        return result;
    }
    std::string result;
    std::ostringstream convert,denom;
    convert << m_numerateur;
    result = convert.str();
    result += "/";
    denom << m_denominateur;
    result += denom.str();
    return result;

}

bool ZFraction::estEgal(ZFraction const& b) const
{
    if (!(m_defini) || !(b.m_defini)) return false;
    return (m_denominateur == b.m_denominateur && m_numerateur == b.m_numerateur);
}

bool ZFraction::estPlusPetit(ZFraction const& b) const
{
    double nombre = static_cast<double>(m_numerateur) / static_cast<double>(m_denominateur);
    double nombre2 = static_cast<double>(b.m_numerateur) / static_cast<double>(b.m_denominateur);
    return nombre < nombre2;
}

ZFraction ZFraction::performeAddition(ZFraction const& b) const
{
    int resultat_num(m_numerateur * b.m_denominateur + b.m_numerateur * m_denominateur);
    int resultat_denom(m_denominateur*b.m_denominateur);
    ZFraction resultat(resultat_num,resultat_denom);
    return resultat;
}

ZFraction ZFraction::performeSoustraction(ZFraction const& b) const
{
    int resultat_num(m_numerateur * b.m_denominateur - b.m_numerateur * m_denominateur);
    int resultat_denom(m_denominateur*b.m_denominateur);
    ZFraction resultat(resultat_num,resultat_denom);
    return resultat;
}

ZFraction ZFraction::performeMultiplication(ZFraction const& b) const
{
    int resultat_num(m_numerateur * b.m_numerateur);
    int resultat_denom(m_denominateur*b.m_denominateur);
    ZFraction resultat(resultat_num,resultat_denom);
    return resultat;
}

ZFraction ZFraction::performeDivision(ZFraction const& b) const
{
    int resultat_num(m_numerateur * b.m_denominateur);
    int resultat_denom(m_denominateur*b.m_numerateur);
    ZFraction resultat(resultat_num,resultat_denom);
    return resultat;
}


bool operator==(ZFraction const& a, ZFraction const& b)
{
    return a.estEgal(b);
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
    return (!(a == b));
}

bool operator<(ZFraction const& a, ZFraction const& b)
{
    return a.estPlusPetit(b);
}

bool operator<=(ZFraction const& a, ZFraction const& b)
{
    return ( a < b || a == b);
}

bool operator>(ZFraction const& a, ZFraction const& b)
{
    return (!(a < b) && a != b);
}

bool operator>=(ZFraction const& a, ZFraction const& b)
{
    return (a > b || a == b);
}

ZFraction operator+ (ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat;

    resultat = a.performeAddition(b);

    return resultat;
}


ZFraction operator-(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat;

    resultat = a.performeSoustraction(b);

    return resultat;
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat;

    resultat = a.performeMultiplication(b);

    return resultat;
}

ZFraction operator/(ZFraction const& a, ZFraction const& b)
{
    ZFraction resultat;

    resultat = a.performeDivision(b);

    return resultat;
}
