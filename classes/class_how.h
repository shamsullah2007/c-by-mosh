//
// Created by Shams Ullah on 10/7/2025.
//

#ifndef C___PRAC_CLASS_HOW_H
#define C___PRAC_CLASS_HOW_H

#include <iostream>
using namespace std;
class Rectangle{

    // int width=0;
    // int height=0;
    // string name;
    static int obj;
    public:
    int width=0;
    int height=0;
    string name;
    static int getObj();
    Rectangle()=default;
    Rectangle(int width,int height);
    Rectangle(int width,int height,const string& name);
    Rectangle(const Rectangle& r)=delete;
    //THE GRTTER
    int getWidth() const ;
    //THE MUTATOR
    void setWidth(int width);
    int getheight() const;
    void setheight(int height);


};


#endif //C___PRAC_CLASS_HOW_H