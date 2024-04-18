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
        if (v < 60)
            grade = letter_grades[0];
        else
        {
            grade = letter_grades[(v - 50) / 10];
            if (v != 100)
            {
                if (v % 10 > 7)
                    grade += '+';
                else if (v % 10 < 3)
                   grade += '-';
            }
        }

        cout << grade << endl;
    }

}