#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

class Duree
{
public:

    Duree(int heures = 0,int minutes = 0,int secondes = 0);

    ~Duree();

    void getDuree();

    bool estEgal(Duree const& b) const;

    bool estPlusPetitQue(Duree const& b) const;


private:
    int m_heures;
    int m_min;
    int m_sec;
};


bool operator==(Duree const& a, Duree const& b);

bool operator!=(Duree const& a, Duree const& b);

bool operator<(Duree const& a, Duree const& b);

bool operator>(Duree const& a, Duree const& b);

bool operator<=(Duree const& a, Duree const& b);

bool operator>=(Duree const& a, Duree const& b);


#endif // DUREE_H_INCLUDED
