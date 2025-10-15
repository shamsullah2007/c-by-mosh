//
// Created by Shams Ullah on 10/15/2025.
//

#include "Poiint.h"
#include <ostream>

Poiint::Poiint(int x, int y) : x(x), y(y) {
}

Poiint Poiint::operator+(const Poiint& p)const {
    return Poiint(x+p.x,y+p.y);
}

Poiint Poiint::operator+(const int  p) const {
    return Poiint(x+p,y+p);
}

std::ostream & operator<<(std::ostream &os, const Poiint &p) {
    os<<p.x<<" "<<p.y;
}
