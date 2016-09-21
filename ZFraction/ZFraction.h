#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED

#include <string>


class ZFraction
{
public:

    ZFraction(int num = 0, int denom = 1);

    std::string getString() const;

    ZFraction performeAddition(ZFraction const& b) const;

    ZFraction performeSoustraction(ZFraction const& b) const;

    ZFraction performeMultiplication(ZFraction const& b) const;

    ZFraction performeDivision(ZFraction const& b) const;

    void afficher(std::ostream &flux) const;

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

ZFraction operator+(ZFraction const& a, ZFraction const& b);

ZFraction operator-(ZFraction const& a, ZFraction const& b);

ZFraction operator*(ZFraction const& a, ZFraction const& b);

ZFraction operator/(ZFraction const& a, ZFraction const& b);

std::ostream &operator<<(std::ostream &flux, ZFraction const& b);







#endif // ZFRACTION_H_INCLUDED
