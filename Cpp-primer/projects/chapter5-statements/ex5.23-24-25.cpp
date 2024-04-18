#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int a, b;
    cin >> a >> b;
    try {
        if (b == 0)
            throw runtime_error("Divided by zero");
        cout << a / b << endl;
    }
    catch (runtime_error err) {
        cout << err.what() << endl;
    }

    return 0;
}