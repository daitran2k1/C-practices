#include <iostream>

using std::cout;

int main()
{
    int sum = 0, start = 50;
    while (start <= 100)
    {
        sum += start;
        ++start;
    }

    cout << sum;

    return 0;
}