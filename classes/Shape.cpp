//
// Created by Shams Ullah on 10/20/2025.
//

#include "Shape.h"

void Shape::setBackground(string & colour) {
    background = colour;
}

Shape::~Shape() {
    cout<<"destroying shape\n";
}


string Shape::getBackground() {
    return background;
}
