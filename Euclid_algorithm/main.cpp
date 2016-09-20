#include <iostream>


int pgdc(int &a, int &b)
{
    int mod;
    while(a % b != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    return b;
}
int main()
{
    int a,b;
    std::cout << "Hello world!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << pgdc(a,b) << std::endl;
    return 0;
}
