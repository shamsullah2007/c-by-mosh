//
// Created by Shams Ullah on 10/20/2025.
//

#include "Widget.h"

#include <iostream>
#include <ostream>
using namespace std;

void Widget::setEnabled(bool enabled) {
    this->enabled = enabled;
}

void Widget::draw() const {
    cout<<"widget::draw(2345678)"<<endl;
}

Widget::~Widget() {
    // cout << "Widget::~Widget" << endl;
}




bool Widget::isEnabled() {
    return enabled;
}
