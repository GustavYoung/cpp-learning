#include "ZFraction.h"
#include <iostream>

ZFraction::ZFraction()
{

}


ZFraction::ZFraction(int num, int denom)
{
    m_numerateur = num;
    m_denominateur = denom;
}

void ZFraction::getZFraction() const
{
    std::cout << m_numerateur << "/" << m_denominateur << std::endl;
}
