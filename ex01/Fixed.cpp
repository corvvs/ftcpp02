#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): bits_(0) {
    std::cout << "Fixed() Called" << std::endl;
}

Fixed::Fixed(int const val) {
    std::cout << "Fixed(int const) Called" << std::endl;
    int shifted = val << Fixed::kFractionalBits;
    int reshifted = shifted >> Fixed::kFractionalBits;
    if (val != reshifted) {
        bits_ = val > 0 ? INT_MAX : INT_MIN;
    } else {
        bits_ = shifted;
    }
}

Fixed::Fixed(float const val) {
    std::cout << "Fixed(float const) Called" << std::endl;
    double fb2 = (double)(1 << Fixed::kFractionalBits);
    double pval = val * fb2;
    if (pval >= INT_MAX) {
        bits_ = INT_MAX;
    } else if (pval <= INT_MIN) {
        bits_ = INT_MIN;
    } else {
        bits_ = roundf(pval);
    }
}

Fixed::~Fixed() {
    std::cout
        << "~Fixed() Called: "
        << "rawbit is: "
        << bits_
        << std::endl;
}

Fixed::Fixed(const Fixed &from) {
    std::cout << "Fixed(const Fixed &from) Called" << std::endl;
    bits_ = from.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed &rhs) {
    std::cout << "= Called" << std::endl;
    bits_ = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return bits_;
}

void    Fixed::setRawBits(int const raw) {
    bits_ = raw;
}

int     Fixed::toInt(void) const {
    return bits_ >> Fixed::kFractionalBits;
}

float   Fixed::toFloat(void) const {
    double fb2 = (double)(1 << Fixed::kFractionalBits);
    return bits_ / fb2;
}

std::ostream&   operator<<(std::ostream& stream, const Fixed& value) {
    return stream << value.toFloat();
}
