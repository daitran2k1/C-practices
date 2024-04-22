#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::string;

class Employee
{
    public:
        Employee() = default;
        Employee(const string &fn, const string &ln):
            first_name(fn), last_name(ln) {}
        Employee(const string &fn, const string &ln, unsigned yoe):
            first_name(fn), last_name(ln), years_of_experience(yoe) {}
        Employee(const string &fn, const string &ln, unsigned yoe, double s):
            first_name(fn), last_name(ln), years_of_experience(yoe), salary(s) {}

    private:
        string first_name, last_name;
        unsigned years_of_experience = 0;
        double salary = 0.0;
};

int main()
{
    return 0;
}