#include <iostream>

int main()
{
    int sum = 0;
    std::cout << "Enter some numbers:" << std::endl;
    int v;
    while (std::cin >> v)
        sum += v;

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}