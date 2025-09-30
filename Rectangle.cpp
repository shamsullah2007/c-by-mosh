//
// Created by Shams Ullah on 9/29/2025.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;
int Rectangle::getwidth() {
   return width;
}
// this is definition of the function

void Rectangle::setwidth(int width) {
   if (width<0)
      throw invalid_argument("width cannot be negative");
   this->width = width;
}
int Rectangle::getheight() {
   return height;
}
void Rectangle::setheight(int height) {
   (*this).height = height;
}