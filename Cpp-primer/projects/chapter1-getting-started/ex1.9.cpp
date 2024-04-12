#include <iostream>

int main()
{
    int sum = 0, start = 50;
    while (start <= 100)
    {
        sum += start;
        ++start;
    }

    std::cout << sum;

    return 0;
}