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
    cout << "Entrez l'hauteur : " << endl;
    cin >> haut;
    cout << "Entrez la largeur : " << endl;
    cin >> large;
    dessineRectangle(large,haut);
    return 0;
}
