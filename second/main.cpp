#include <iostream>

using namespace std;

void dessineRectangle(int largeur,int hauteur)
{
    for(int i(1);i<=hauteur;i++)
    {
        for(int j(1);j<=largeur;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int large = 0;
    int haut = 0;
    cout << "Hello world!" << endl;
    do{
        cout << "Entre une hauteur valide (strictement positive) ." << endl;
        cin >> haut;
    }while(haut<=0);
    do{
        cout << "Entrez une valeur de largeur valide (strictement postive) ." << endl;
        cin >> large;
    }while(large<=0);
    dessineRectangle(large,haut);
    return 0;
}
