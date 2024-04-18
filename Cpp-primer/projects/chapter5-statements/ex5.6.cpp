#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> letter_grades = {"F", "D", "C", "B", "A", "A++"};
    vector<int> ivec = {30, 60, 63, 78, 85, 94, 100};

    for (int v : ivec)
    {
        string grade;
        grade = (v < 60) ? letter_grades[0] : (v == 100) ? letter_grades[(v - 50) / 10] : (v % 10 > 7) ?  letter_grades[(v - 50) / 10] + '+' : (v % 10 < 3) ? letter_grades[(v - 50) / 10] + '-' : letter_grades[(v - 50) / 10];

        cout << grade << endl;
    }

}