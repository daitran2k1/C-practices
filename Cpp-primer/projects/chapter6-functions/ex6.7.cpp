#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int func_call()
{
    static int cnt = 0;
    
    return cnt++;
}

int main()
{
    int v;
    cin >> v;

    for (int i = 0; i < v; ++i)
        cout << func_call() << endl;

    return 0;
}