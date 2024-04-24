#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::string;

class Employee
{
    public:
        Employee() = default;
        Employee(const string &n):
            name(n) {}
        Employee(const string &n, unsigned yoe):
            name(n), years_of_experience(yoe) {}
        Employee(const string &n, unsigned yoe, double s):
            name(n), years_of_experience(yoe), salary(s) {}

    private:
        string name;
        unsigned years_of_experience = 2;
        double salary = 1600.0;
};

int main()
{
    return 0;
}