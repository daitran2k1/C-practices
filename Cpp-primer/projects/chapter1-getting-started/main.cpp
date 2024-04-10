#include <iostream>
/*
 * A multiline
 * comment example
 */
int main()
{
    int value = 0, sum = 0;

    while (std::cin >> value)   // read unknown number of inputs, end-of-file is Ctrl + Z/D 
        sum += value;

    std::cout << sum << std::endl;  // flush buffer, useful for debugging
    
    return 0;
}