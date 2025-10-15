//
// Created by Shams Ullah on 10/10/2025.
//

#ifndef C___PRAC_OPERATION_ON_POINTS_H
#define C___PRAC_OPERATION_ON_POINTS_H
#include <iosfwd>

#include <iostream>
using namespace std;

class operation_on_points {
    int x;
    int y;
    public:
    operation_on_points(int& x, int& y);
    int get_x()const;
    int get_y()const;
    void set_x(int& x);
    void set_y(int y);

};
ostream& operator<<(ostream& os, const operation_on_points& op);


#endif //C___PRAC_OPERATION_ON_POINTS_H