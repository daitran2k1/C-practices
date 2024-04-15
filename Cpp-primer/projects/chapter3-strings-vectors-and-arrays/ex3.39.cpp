#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1("Hello World!"), s2("Hello, World!");
    if (s1 < s2)
        cout << s1 << " is smaller than " << s2 << endl;
    else if (s1 > s2)
        cout << s1 << " is larger than " << s2 << endl;
    else
        cout << s1 << " is equal to " << s2 << endl;

    char s3[] = "Hello World!", s4[] = "Hello, World!";

    if (strcmp(s3, s4) < 0)
        cout << s3 << " is smaller than " << s4 << endl;
    else if (strcmp(s3, s4) > 0)
        cout << s3 << " is larger than " << s4 << endl;
    else
        cout << s3 << " is equal to " << s4 << endl;

    return 0;
}