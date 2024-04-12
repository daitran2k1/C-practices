#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, item;   // default value is "" 0 0
    
    while (std::cin >> item)
    {
        if (sum.isbn() == "")
            sum = item;
        else
            sum += item;
    }

    std::cout << "The sum is " << std::endl << sum << std::endl;

    return 0;
}