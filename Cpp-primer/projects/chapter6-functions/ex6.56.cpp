#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int func(int, int);

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    vector<decltype(func) *> fvec;
    fvec.push_back(add);
    fvec.push_back(subtract);
    fvec.push_back(multiply);
    fvec.push_back(divide);

    for (auto f : fvec)
        cout << f(6, 3) << endl;
    
    return 0;
}