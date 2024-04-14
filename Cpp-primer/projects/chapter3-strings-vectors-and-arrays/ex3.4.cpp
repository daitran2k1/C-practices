#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    // if (s1 == s2)
    //     cout << s1 << " and " << s2 << " are equal" << endl;
    // else if (s1 > s2)
    //     cout << s1 << " is larger than " << s2 << endl;
    // else
    //     cout << s2 << " is larger than " << s1 << endl;

    auto len1 = s1.size(), len2 = s2.size();
    if (len1 == len2)
        cout << s1 << " and " << s2 << " have the same length" << endl;
    else if (len1 > len2)
        cout << s1 << " is longer than " << s2 << endl;
    else
        cout << s2 << " is longer than " << s1 << endl;

    return 0;
}