//
// Created by Shams Ullah on 10/7/2025.
//
#include "class_how.h"
#include <iostream>
#include <memory>
#include "Smarptr.h"
using namespace std;
// when ever the obj get out of the scope the the memory alocated for this(and it store at stock)
// obj are get released but some time we need it to stay in the memory where heep memory come into the rescue
// void show(Rectangle rectangle) {
//
// }
int main() {
    Smarptr ptr(new int);

    // auto rectangle= make_unique<Rectangle>(10,10,"Hello World");   ;
    // cout<<rectangle->getObj();

    // we have smart pointer that take care of the freeing up the heapmeomry
    // const Rectangle rectangle;
    // Rectangle::getObj();

    // auto* ptr= new Rectangle(23,34,"shams");
    // cout<<ptr->getObj();
    // cout<<ptr->getWidth();
    // delete ptr;
    // ptr=nullptr;



    // Rectangle rectangle{34,34,"shams"};
    // Rectangle rectangl{34,34,"shams"};
    // cout<<Rectangle::getObj();
    // rectangle.setWidth(101);
    // cout << "Hello World!\n";
    // show(rectangle);
    // cout<<&rectangle;
    // cout<<&show;
    // cout << rectangle.getWidth() << endl;
    // show(rectangle);

}