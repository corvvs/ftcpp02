#include <iostream>
#include "Point.hpp"

bool    bsp(
    Point const a,
    Point const b,
    Point const c,
    Point const point
);

void    test(
    bool expected,
    Point const a,
    Point const b,
    Point const c,
    float px, float py
) {
    Point point(px, py);
    bool result = bsp(a, b, c, point);
    std::cout
        << "Testing Point is: (" << px << ", " << py <<")"
        << std::endl;
    std::cout
        << (expected == result ? "\x1B[92m[ok] " : "\x1B[91m[KO] ")
        << "Result is: "
        << (result ? "True" : "False")
        << "\x1B[m"
        << std::endl;
}

int main( void ) {
    const Point Z = Point();
    std::cout << Z << std::endl;

    const Point A(1, 1);
    Point B(3, 5);
    const Point C(7, -1);
    std::cout
        << "Triangle is: "
        << A
        << " - "
        << B
        << " - "
        << C
        << std::endl;
    test(false, A, B, C, A.GetX().toFloat(), A.GetY().toFloat());
    test(false, A, B, C, B.GetX().toFloat(), B.GetY().toFloat());
    test(false, A, B, C, C.GetX().toFloat(), C.GetY().toFloat());
    test(false, A, B, C, 2, 3);
    test(false, A, B, C, 2.0f, 3.0f);
    test(true,  A, B, C, 2.1f, 3.0f);
    test(true,  A, B, C, 2.01f, 3.0f);
    test(true,  A, B, C, 2.001f, 3.0f);
    test(false, A, B, C, 1.9f, 3.0f);
    test(false, A, B, C, 1.99f, 3.0f);
    test(false, A, B, C, 1.999f, 3.0f);
    test(true , A, B, C, 4.3333, 3);
    test(false, A, B, C, 4.34, 3);
    test(false, A, C, B, A.GetX().toFloat(), A.GetY().toFloat());
    test(false, A, C, B, B.GetX().toFloat(), B.GetY().toFloat());
    test(false, A, C, B, C.GetX().toFloat(), C.GetY().toFloat());
    test(false, A, C, B, 2, 3);
    test(false, A, C, B, 2.0f, 3.0f);
    test(true,  A, C, B, 2.1f, 3.0f);
    test(true,  A, C, B, 2.01f, 3.0f);
    test(true,  A, C, B, 2.001f, 3.0f);
    test(false, A, C, B, 1.9f, 3.0f);
    test(false, A, C, B, 1.99f, 3.0f);
    test(false, A, C, B, 1.999f, 3.0f);

    B = Point(-3, 5);
    std::cout
        << "Triangle is: "
        << A
        << " - "
        << B
        << " - "
        << C
        << std::endl;
    test(false, A, B, C, A.GetX().toFloat(), A.GetY().toFloat());
    test(false, A, B, C, B.GetX().toFloat(), B.GetY().toFloat());
    test(false, A, B, C, C.GetX().toFloat(), C.GetY().toFloat());
    test(false, A, B, C, -1, 4);
    test(true , A, B, C, -1, 3.7);
    test(true , A, B, C, -2.5, 4.7);
    test(true , A, B, C, 0.99, 1.02);
}
