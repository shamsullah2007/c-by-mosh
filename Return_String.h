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
    // if we remove this line the compiler automatically generate the copy constructor for us but we don't want it right
    REctangle(const REctangle& source)=delete;//some time we wanna the source object is not copied while passing it by value we have to delete the copy constructor and as well as it definition
    REctangle(int width);
    REctangle(int width, int hight);
    REctangle(int width, int hight,const string &text);

    int getwidth();
    void setwidth(int width);
    int gethight();
    void sethight(int hight);
private:
    int hight;
    int width;
    string text;
};


#endif //C___PRAC_RETURN_STRING_H