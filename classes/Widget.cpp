//
// Created by Shams Ullah on 10/20/2025.
//

#include "Widget.h"

#include <iostream>
#include <ostream>
using namespace std;

// Widget::Widget() {
//     cout<<"Widget constructor are being called"<<endl;
// }

// void Widget::enable() {
//     enabled = true;
// }
//
// void Widget::disable() {
//     enabled = false;
// }
void Widget::setEnabled(bool enabled) {
    this->enabled = enabled;
}
Widget::Widget(bool enabled): enabled(enabled) {
    cout<<enabled<<endl<<"the base class constructor are being called"<<endl;

}


bool Widget::isEnabled() {
    return enabled;
}
