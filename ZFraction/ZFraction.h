#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED

class ZFraction
{
public:

    ZFraction(int num = 0, int denom = 1);

    void getZFraction() const;

private:

    int m_numerateur;

    int m_denominateur;
};
#endif // ZFRACTION_H_INCLUDED
