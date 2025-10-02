//
// Created by Shams Ullah on 9/30/2025.
//

#include "Return_String.h"
#include <iostream>
#include "Textbox.h"
using namespace std;

#include <stdexcept>
// REctangle::REctangle(const REctangle& source) {
//     this->width=source.width;
//     this->hight=source.hight;
//     this->text=source.text;
//     cout<<"copy constructor"<<endl;
//
// }this is definition of the copy constructor


REctangle::REctangle(int width) : REctangle(width,0) {
    cout<< "this is 4 perama contructor deligations\n";
}
int REctangle::getwidth() {
    if (width<0)
       throw invalid_argument("Invalid Input");
    return width;
}

void REctangle::setwidth(int width) {
    this->width = width;
}int REctangle::gethight() {
    if (hight<0)
       throw invalid_argument("Invalid Input");
    return hight;
}
void REctangle::sethight(int hight) {
    this->hight = hight;
}
REctangle::REctangle(int width, int hight) /*: width(width), hight(hight)  this are called member veriable initialization but this is not excclusive and but because of it we loose our velidation*/ {
    setwidth(width);
    sethight(hight);

    cout<<"THIS is 2 CONSTRUCTOR"<<endl;
    cout<<"this is source constructor"<<endl;
 }
REctangle::REctangle(int width, int hight, const string &text): REctangle(width, hight) {
    (*this).text=text;
    cout<< "this is 3 perama contructor deligations\n";
    cout<<"source construtor";

}

// REctangle::REctangle() {
//
// }
// this is default constructor if you need to have default one as the compiler dont make it for you as you have already a
// constructor so yoou have to make it by default
