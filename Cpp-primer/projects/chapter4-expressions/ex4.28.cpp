#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of bool is " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char is " << sizeof(char) << " bytes" << endl;
    cout << "Size of wchar_t is " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char16_t is " << sizeof(char16_t) << " bytes" << endl;
    cout << "Size of char32_t is " << sizeof(char32_t) << " bytes" << endl;
    cout << "Size of short is " << sizeof(short) << " bytes" << endl;
    cout << "Size of int is " << sizeof(int) << " bytes" << endl;
    cout << "Size of long is " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long is " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float is " << sizeof(float) << " bytes" << endl;
    cout << "Size of double is " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double is " << sizeof(long double) << " bytes" << endl;

    return 0;
}