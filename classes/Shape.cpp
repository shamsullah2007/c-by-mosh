//
// Created by Shams Ullah on 10/20/2025.
//

#include "Shape.h"

void Shape::setBackground(string & colour) {
    background = colour;
}

void Shape::draw() const {
    cout<<"Drawing Shape"<<endl;
}

string Shape::getBackground() {
    return background;
}
