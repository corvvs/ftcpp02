#ifndef CPP02_EX03_POINT_HPP_
# define CPP02_EX03_POINT_HPP_

#include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(float const xf, float const yf);
        Point(const Fixed& xf, const Fixed& yf);
        ~Point();
        Point(const Point &from);
        Point& operator=(const Point &rhs);

        const Fixed&   GetX(void) const;
        const Fixed&   GetY(void) const;

        static Fixed    cross_prod(
            const Point& v1,
            const Point& v2
        );

    private:
        Fixed const x;
        Fixed const y;
};

std::ostream& operator<<(std::ostream& stream, const Point& value);

Point operator+(const Point& lhs, const Point& rhs);
Point operator-(const Point& lhs, const Point& rhs);

#endif
