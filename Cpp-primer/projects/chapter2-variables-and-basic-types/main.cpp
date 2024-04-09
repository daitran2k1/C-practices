#include <iostream>

int main()
{
    int i = 0;
    long long j = 0;
    double k = 3.14L;
    std::cout << "Hello world"
              << ", I'm Dai" << std::endl;
    int a{0}, b(0), c = {0};
    extern int d;
    int &refVal = a;
    int *p = nullptr;
    void *p1;
    return 0;
}