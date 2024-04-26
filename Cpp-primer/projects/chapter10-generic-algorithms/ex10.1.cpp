#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::count;
using std::ifstream;

int main()
{
    vector<int> ivec;
    int val;
    ifstream ifs("ex10.1.txt");
    
    while (ifs >> val)
        ivec.push_back(val);

    cout << "What value do you want to count?: ";
    cin >> val;
    cout << count(ivec.begin(), ivec.end(), val) << endl;

    return 0;
}