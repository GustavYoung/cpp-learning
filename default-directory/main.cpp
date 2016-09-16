#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream my("./testing.txt");
    if(!my){
        cout << "Great !" << endl;
    }
    my << "Test !";
    cout << "Hello world!" << endl;
    return 0;
}
