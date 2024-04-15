#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
    char s1[] = "Hello, ", s2[] = "World!";
    char s3[13];

    strcpy(s3, s1);
    strcat(s3, s2);

    cout << s3 << endl;

    return 0;
}