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
    Point const point
) {
    bool result = bsp(a, b, c, point);
    std::cout
        << "Triangle is: "
        << a
        << " - "
        << b
        << " - "
        << c
        << std::endl;
    std::cout
        << "Testing Point is: "
        << point
        << std::endl;
    std::cout
        << (expected == result ? "\x1B[92m[ok] " : "\x1B[91m[KO] ")
        << "Result is: "
        << (result ? "True" : "False")
        << "\x1B[m"
        << std::endl;
}

int main( void ) {
    const Point A(1, 1);
    const Point B(3, 5);
    const Point C(7, -1);

    test(false, A, B, C, A);
    test(false, A, B, C, B);
    test(false, A, B, C, C);
    test(false, A, B, C, Point(2, 3));
    test(false, A, B, C, Point(2.0f, 3.0f));
    test(true,  A, B, C, Point(2.1f, 3.0f));
    test(true,  A, B, C, Point(2.01f, 3.0f));
    test(true,  A, B, C, Point(2.001f, 3.0f));
    test(false, A, B, C, Point(1.9f, 3.0f));
    test(false, A, B, C, Point(1.99f, 3.0f));
    test(false, A, B, C, Point(1.999f, 3.0f));
    test(true , A, B, C, Point(4.3333, 3));
    test(false, A, B, C, Point(4.34, 3));
    test(false, A, C, B, A);
    test(false, A, C, B, B);
    test(false, A, C, B, C);
    test(false, A, C, B, Point(2, 3));
    test(false, A, C, B, Point(2.0f, 3.0f));
    test(true,  A, C, B, Point(2.1f, 3.0f));
    test(true,  A, C, B, Point(2.01f, 3.0f));
    test(true,  A, C, B, Point(2.001f, 3.0f));
    test(false, A, C, B, Point(1.9f, 3.0f));
    test(false, A, C, B, Point(1.99f, 3.0f));
    test(false, A, C, B, Point(1.999f, 3.0f));
}
