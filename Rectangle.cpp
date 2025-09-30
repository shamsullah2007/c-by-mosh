//
// Created by Shams Ullah on 9/29/2025.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;
void Rectangle::draw(int x,int y) {
    width=x;
    height=y;
    cout<<"width:"<<width<<endl<<"height:"<<height<<endl;
}
// this is definition of the function

int Rectangle::area(int x,int y) {
    width=x;
    height=y;
    return x * y;
}
