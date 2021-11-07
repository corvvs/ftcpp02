#ifndef CPP02_EX00_FIXED_HPP_
# define CPP02_EX00_FIXED_HPP_

#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(int const val);
        Fixed(float const val);
        ~Fixed();
        Fixed(const Fixed &from);
        Fixed& operator=(const Fixed &rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;

    private:
        int                 bits_;
        static const int    kFractionalBits = 8;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& value);

#endif
