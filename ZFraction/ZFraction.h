#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED

#include <string>


class ZFraction
{
public:

    ZFraction(int num = 0, int denom = 1);

    std::string getString() const;

    bool estEgal(ZFraction const& b) const;

    bool estPlusPetit(ZFraction const& b) const;

private:

    int m_numerateur;

    int m_denominateur;

    bool m_defini;
};

bool operator==(ZFraction const& a, ZFraction const& b);

bool operator!=(ZFraction const& a, ZFraction const& b);

bool operator<(ZFraction const& a, ZFraction const& b);

bool operator<=(ZFraction const& a, ZFraction const& b);

bool operator>(ZFraction const& a, ZFraction const& b);

bool operator>=(ZFraction const& a, ZFraction const& b);






#endif // ZFRACTION_H_INCLUDED
