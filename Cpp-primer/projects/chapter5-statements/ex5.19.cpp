#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string rsp;
    do
    {
        string s1, s2;
        cout << "Enter two strings: " << endl;
        cin >> s1 >> s2;
        if (s1 < s2)
            cout << s1 << " is less than " << s2 << endl;
        else if (s1 > s2)
            cout << s2 << " is less than " << s1 << endl;
        else
            cout << "Two strings are equal" << endl;
        cout << "Do you want more? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');

    return 0;
    
}