//
// Created by Shams Ullah on 10/10/2025.
//

#include "operation_on_points.h"

operation_on_points::operation_on_points(int &x, int &y):x{x},y(y) {
}

int operation_on_points::get_x()const {
    return x;
}

int operation_on_points::get_y()const {
    return y;
}

void operation_on_points::set_x(int &x){
    this->x = x;
}

void operation_on_points::set_y(int y) {
    this->y = y;
}
ostream &operator<<(ostream &os, const operation_on_points &p) {
    os<<p.get_x()<<" "<<p.get_y();
    return os;
}
