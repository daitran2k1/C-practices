#include <vector>

using std::vector;

int func(int, int);

int main()
{
    vector<decltype(func) *> fvec;
    return 0;
}