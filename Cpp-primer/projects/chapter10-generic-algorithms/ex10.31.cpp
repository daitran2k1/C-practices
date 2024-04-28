#include <iterator>
#include <algorithm>
#include <iostream>
#include <vector>

using std::istream_iterator;
using std::ostream_iterator;
using std::sort;
using std::unique_copy;
using std::cin;
using std::cout;
using std::vector;

int main()
{
    istream_iterator<int> in(cin), end;
    vector<int> ivec(in, end);

    sort(ivec.begin(), ivec.end());

    ostream_iterator<int> out(cout, " ");

    unique_copy(ivec.begin(), ivec.end(), out);

    return 0;
}