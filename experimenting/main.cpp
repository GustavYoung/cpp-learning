#include <iostream>
#include <string>

using namespace std;

int foo(int const& n, int const& b);

int main()
{
    int kek(5);

    int kok(54);

    cout << foo(kek,kok) << endl;
}

int foo(int const& n, int const& b)
{
    return n+b;
}
