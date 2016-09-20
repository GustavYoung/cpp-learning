#include "ZFraction.h"
#include <iostream>

int pgdc(int a, int b)
{
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
    int diviseur = pgdc(num, denom);
    m_numerateur = num / diviseur;
    m_denominateur = denom / diviseur;
}

void ZFraction::getZFraction() const
{
    std::cout << m_numerateur << "/" << m_denominateur << std::endl;
}
