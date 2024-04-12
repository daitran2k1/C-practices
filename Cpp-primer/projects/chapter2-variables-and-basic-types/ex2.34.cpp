#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << ", e=" << e << ", g=" << g
              << ", i=" << i << ", r=" << r << ", ci=" << ci << ", cr=" << cr << std::endl;
    // a=0, b=0, c=0, d=0x5ffe64, e=0x5ffe60, g=0, i=0, r=0, ci=0, cr=0

    // a = 42;
    // std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << ", e=" << e << ", g=" << g
    //           << ", i=" << i << ", r=" << r << ", ci=" << ci << ", cr=" << cr << std::endl;
    // // a=42, b=0, c=0, d=0x5ffe64, e=0x5ffe60, g=0, i=0, r=0, ci=0, cr=0

    // b = 42;
    // std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << ", e=" << e << ", g=" << g
    //           << ", i=" << i << ", r=" << r << ", ci=" << ci << ", cr=" << cr << std::endl;
    // // a=0, b=42, c=0, d=0x5ffe64, e=0x5ffe60, g=0, i=0, r=0, ci=0, cr=0

    // c = 42;
    // std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << ", e=" << e << ", g=" << g
    //           << ", i=" << i << ", r=" << r << ", ci=" << ci << ", cr=" << cr << std::endl;
    // // a=0, b=0, c=42, d=0x5ffe64, e=0x5ffe60, g=0, i=0, r=0, ci=0, cr=0

    // d = 42; // a value of type "int" cannot be assigned to an entity of type "int *"

    // e = 42; // a value of type "int" cannot be assigned to an entity of type "const int *"

    // g = 42; // expression must be a modifiable lvalue

    return 0;
}