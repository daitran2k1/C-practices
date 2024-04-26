#include <iostream>

using std::cout;
using std::endl;



int main()
{
    int v = 10;

    auto f = [&v] () -> bool { if (v == 0) return true; --v; return v == 0; };
    while (!f())
        cout << v << endl;
    
    cout << v << endl;
    return 0;
}