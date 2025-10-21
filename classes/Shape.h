//
// Created by Shams Ullah on 10/20/2025.
//

#ifndef C___PRAC_SHAPE_H
#define C___PRAC_SHAPE_H
#include <iostream>
using namespace std;

class Shape {
private:
    string background;
    public:
    virtual  void draw()const=0;
    string getBackground();
    void setBackground(string& colour);
    virtual ~Shape();
};


#endif //C___PRAC_SHAPE_H