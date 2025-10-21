//
// Created by Shams Ullah on 10/20/2025.
//

#ifndef C___PRAC_CIRCLE_H
#define C___PRAC_CIRCLE_H
#include "Shape.h"

class Circle:public Shape{
    int radius;
    public:
    void draw()const ;
    void setRadius(int r);
    int getRadius();

    float area(int r);

};



#endif //C___PRAC_CIRCLE_H
