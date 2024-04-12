#include <iostream>

int main()
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &v2, &r2 = v2;

    r1 = v2;
    // p1 = p2;    // a value of type "const int *" cannot be assigned to an entity of type "int *"
    p2 = p1;
    // p1 = p3;    // a value of type "const int *" cannot be assigned to an entity of type "int *"
    p2 = p3;

    return 0;
}