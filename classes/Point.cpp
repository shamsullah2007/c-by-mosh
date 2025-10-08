//
// Created by Shams Ullah on 10/8/2025.
//

#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {
}

bool Point::operator==(const Point &other) const {
    return (x==other.x )&& (y==other.y);
}

bool Point::operator==(int other) const {
    return (x==other) && (y==other);
}

bool Point::operator!=(const Point &other) const {
    return !((x==other.x )&& (y==other.y));
}
