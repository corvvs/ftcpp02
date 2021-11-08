#ifndef CPP02_EX00_FIXED_HPP_
# define CPP02_EX00_FIXED_HPP_

# include <iostream>

class Fixed {
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &from);
        Fixed& operator=(const Fixed &rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int                 bits_;
        static const int    kFractionalBits = 8;

};

#endif
