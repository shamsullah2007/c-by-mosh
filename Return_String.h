//
// Created by Shams Ullah on 9/30/2025.
//

#ifndef C___PRAC_RETURN_STRING_H
#define C___PRAC_RETURN_STRING_H
#include <string>
using namespace std;

class REctangle {
    public:
    REctangle()=default;


    REctangle(int width, int hight);
    REctangle(int width, int hight,const string &text);

    int getwidth();
    void setwidth(int width);
    int gethight();
    void sethight(int hight);


    static int getobject();

    ~REctangle();// distructor are called automaticaly when tho obj goes out of scop it take no perameters
private:
    int hight;
    int width;
    string text;
    static int Objcount;
};


#endif //C___PRAC_RETURN_STRING_H