//
// Created by Shams Ullah on 9/30/2025.
//

#include "Return_String.h"
#include <iostream>
using namespace std;

#include <stdexcept>

int REctangle::getwidth() {
    if (width<0)
       throw invalid_argument("Invalid Input");
    return width;
}
void REctangle::setwidth(int width) {
    this->width = width;
}int REctangle::gethight() {
    if (hight<0)
       throw invalid_argument("Invalid Input");
    return width;
}
void REctangle::sethight(int hight) {
    this->hight = hight;
}
REctangle::REctangle(int width, int hight) /*: width(width), hight(hight)  this are called member veriable initialization but this is not excclusive and but because of it we loose our velidation*/ {
    setwidth(width);
    sethight(hight);

    cout<<"THIS THE CONSTRUCTOR";
}