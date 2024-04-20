#include <string>

using std::string;

string (&(func)(const string *))[10];

int main()
{
    return 0;
}