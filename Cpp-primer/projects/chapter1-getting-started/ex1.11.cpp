#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 > v2)
    {
        int tmp = v1;
        v1 = v2;
        v2 = tmp;
    }

    while (v1 <= v2)
    {
        std::cout << v1 << std::endl;
        ++v1;
    }

    return 0;
}