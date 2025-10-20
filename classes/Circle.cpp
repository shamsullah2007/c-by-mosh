//
// Created by Shams Ullah on 10/20/2025.
//

#include "Circle.h"

void Circle::setRadius(int r) {
    this->radius=r;


}

int Circle::getRadius() {

    return radius;

}

float Circle::area(int r) {
    this->radius=r;
    return radius*radius*3.14;
}
