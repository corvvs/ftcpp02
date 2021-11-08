#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const c(5.05f);
    Fixed const d(2);
    Fixed const b( c * d );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "max(a, b): " << Fixed::max( a, b ) << std::endl;
    std::cout << "min(a, b): " << Fixed::min( a, b ) << std::endl;
    std::cout << "max(a, b) + c: " << Fixed::max( a, b ) + c << std::endl;
    std::cout << "max(a, b) - d: " << Fixed::min( a, b ) - d << std::endl;
    std::cout << "c / d: " << c / d << std::endl;
    std::cout << "d / c: " << d / c << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << (c <= d) << std::endl;
    std::cout << (c >= d) << std::endl;
    std::cout << (c < d) << std::endl;
    std::cout << (c > d) << std::endl;
    std::cout << (c == d) << std::endl;
    std::cout << (c != d) << std::endl;
}
