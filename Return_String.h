//
// Created by Shams Ullah on 9/30/2025.
//

#ifndef C___PRAC_RETURN_STRING_H
#define C___PRAC_RETURN_STRING_H
#include <string>
using namespace std;

class REctangle {
    public:
    // just like function overloading we have contructor overloading as well
    REctangle()=default;
    REctangle(int width, int hight);

    int getwidth();
    void setwidth(int width);
    int gethight();
    void sethight(int hight);
private:
    int hight;
    int width;
};


#endif //C___PRAC_RETURN_STRING_H