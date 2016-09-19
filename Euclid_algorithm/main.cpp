#include <iostream>

int main()
{
    int a,b,c;
    std::cout << "Hello world!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "";
    c = 1;
    int div(1),mod(1);
    while(a % b != 0)
    {

        mod = a % b;
        a = b;
        b = mod;
    }
    std::cout << b << std::endl;
    return 0;
}
