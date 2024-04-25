#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10, 1);
    cout << "Initial size: " << ivec.size() << endl;
    cout << "Initial capacity: " << ivec.capacity() << endl;

    for (int i = 0; i < 10; ++i)
    {
        while (ivec.size() != ivec.capacity())
            ivec.push_back(1);
        ivec.push_back(1);

        cout << "###\nStep " << i << ":" << endl;
        cout << "Size: " << ivec.size() << endl;
        cout << "Capacity: " << ivec.capacity() << endl;
    }

    return 0;
}