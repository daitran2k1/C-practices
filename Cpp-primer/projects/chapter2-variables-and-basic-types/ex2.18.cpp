#include <iostream>

int main()
{
    int *pi, i = 0;
    pi = &i;
    *pi = 10;

    std::cout << pi << " " << i << std::endl;

    return 0;
}