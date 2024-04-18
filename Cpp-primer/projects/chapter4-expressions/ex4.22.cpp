#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> grade_arr{30, 60, 75, 80, 90, 95};

    for (int grade : grade_arr)
    {
        string sGrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
        cout << sGrade << endl;
    }

    for (int grade : grade_arr)
    {
        string sGrade;
        if (grade > 90)
            sGrade = "high pass";
        else if (grade > 75)
            sGrade = "pass";
        else if (grade >= 60)
            sGrade = "low pass";
        else
            sGrade = "fail";
        cout << sGrade << endl;
    }
    
    return 0;
}