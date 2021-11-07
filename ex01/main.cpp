#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    Fixed const e( -3.1415926535979f );
    Fixed const f( 1000000000 );
    Fixed const g( -1000000000 );
    Fixed const h( 0.0000001f );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "e is " << e << std::endl;
    std::cout << "f is " << f << std::endl;
    std::cout << "g is " << g << std::endl;
    std::cout << "h is " << h << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    std::cout << "e is " << e.toInt() << " as integer" << std::endl;
    std::cout << "f is " << f.toInt() << " as integer" << std::endl;
    std::cout << "g is " << g.toInt() << " as integer" << std::endl;
    std::cout << "h is " << h.toInt() << " as integer" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;
    std::cout << "e is " << e.toFloat() << " as float" << std::endl;
    std::cout << "f is " << f.toFloat() << " as float" << std::endl;
    std::cout << "g is " << g.toFloat() << " as float" << std::endl;
    std::cout << "h is " << h.toFloat() << " as float" << std::endl;
    return 0;
}
