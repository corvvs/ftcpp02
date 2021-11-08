#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(float const xf, float const yf): x(Fixed(xf)), y(Fixed(yf)) {}

Point::Point(const Fixed& xf, const Fixed& yf): x(xf), y(yf) {}

Point::~Point() {}

Point::Point(const Point &from): x(Fixed(from.x)), y(Fixed(from.y)) {}

const Fixed&    Point::GetX(void) const {
    return x;
}

const Fixed&    Point::GetY(void) const {
    return y;
}

Fixed   Point::cross_prod(
    const Point& v1,
    const Point& v2
) {
    Fixed xy = v1.x * v2.y;
    Fixed yx = v1.y * v2.x;
    return xy - yx;
}


Point& Point::operator=(const Point &rhs) {
    (Fixed)x = rhs.x;
    (Fixed)y = rhs.y;
    return *this;
}

std::ostream& operator<<(std::ostream& stream, const Point& value) {
    return stream << "(" << value.GetX() << ", " << value.GetY() << ")";
}

Point operator+(const Point& lhs, const Point& rhs) {
    return Point(lhs.GetX() + rhs.GetX(), lhs.GetY() + rhs.GetY());
}

Point operator-(const Point& lhs, const Point& rhs) {
    return Point(lhs.GetX() - rhs.GetX(), lhs.GetY() - rhs.GetY());
}
