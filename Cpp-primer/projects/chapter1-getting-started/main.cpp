#include <iostream>
/*
 * A multiline
 * comment example
 */
int main()
{
    int value = 0, sum = 0;
    while (std::cin >> value)   // end-of-file is Ctrl + Z
        sum += value;
    std::cout << sum << std::endl;
    return 0;
}