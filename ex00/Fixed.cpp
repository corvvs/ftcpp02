#include "Fixed.hpp"

Fixed::Fixed(): bits_(0) {
    std::cout << "Fixed() Called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "~Fixed() Called" << std::endl;
}

Fixed::Fixed(const Fixed &from) {
    std::cout << "Fixed(const Fixed &from) Called" << std::endl;
    bits_ = from.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "= Called" << std::endl;
    bits_ = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits Called" << std::endl;
    return bits_;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits Called" << std::endl;
    bits_ = raw;
}
