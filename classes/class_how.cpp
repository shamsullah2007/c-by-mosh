//
// Created by Shams Ullah on 10/7/2025.
//

#include "class_how.h"

#include <stdexcept>
#include <iostream>
using namespace std;

void Rectangle::setWidth(int width){
    if (width > 100)
        throw invalid_argument("Can't set width to 100");
    this->width = width;
}

int Rectangle::getheight() const{

    return height;
}

void Rectangle::setheight(int height) {
    if (height > 100)
        throw invalid_argument("Can't set height to 100");
    this->height = height;

}

int Rectangle::obj;
int Rectangle::getObj() {
    return obj;
}

Rectangle::Rectangle(int width, int height){
    obj++;
    cout<<"constructor are been called\n";
     setWidth(width);
     setheight(height);
}

Rectangle::Rectangle(int width, int height, const string &name): Rectangle(width, height){
    cout<<"constructor are bee called by deligations\n";
    this->name = name;
}

// Rectangle::Rectangle(const Rectangle &r) {
//     cout<<"copy constructor are been called";
//     this->width = r.width;
//     this->height = r.height;
//     this->name = r.name;
// }

int Rectangle::getWidth()const  {
    return width;
}
