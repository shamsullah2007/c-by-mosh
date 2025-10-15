//
// Created by Shams Ullah on 10/15/2025.
//

#include "Poiint.h"
#include <ostream>
#include <iostream>


Poiint::Poiint(int x, int y) : x(x), y(y) {
}

Poiint Poiint::operator+(const Poiint& p)const {
    return Poiint(x+p.x,y+p.y);
}

Poiint Poiint::operator+(const int  p) const {
    return Poiint(x+p,y+p);
}

Poiint& Poiint::operator+=(const Poiint p) {
    x+=p.x;
    y+=p.y;
    return *this;
}

Poiint & Poiint::operator=(const Poiint &p) {
    std::cout<<"assignment done";
    x=p.x;
    y=p.y;
    return *this;
}

std::ostream & operator<<(std::ostream &os, const Poiint &p) {
    os<<p.x<<" "<<p.y;
}
