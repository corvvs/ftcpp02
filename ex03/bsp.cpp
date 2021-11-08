#include "Point.hpp"

int FixedSign(const Fixed f) {
    Fixed zero(0);
    if (f > zero) { return +1; }
    if (f < zero) { return -1; }
    return 0;
}

bool    bsp(
    Point const a,
    Point const b,
    Point const c,
    Point const point
) {
    Point a2b = b - a;
    Point b2c = c - b;
    Point c2a = a - c;

    Point a2p = point - a;
    Point b2p = point - b;
    Point c2p = point - c;
    
    Fixed cpa = Point::cross_prod(a2b, a2p);
    Fixed cpb = Point::cross_prod(b2c, b2p);
    Fixed cpc = Point::cross_prod(c2a, c2p);

    int sign_a = FixedSign(cpa);
    int sign_b = FixedSign(cpb);
    int sign_c = FixedSign(cpc);
    if (sign_a > 0 && sign_b > 0 && sign_c > 0) {
        return true;
    }
    if (sign_a < 0 && sign_b < 0 && sign_c < 0) {
        return true;
    }
    return false;
}
