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
    void draw()const;
    string getBackground();
    void setBackground(string& colour);
};


#endif //C___PRAC_SHAPE_H