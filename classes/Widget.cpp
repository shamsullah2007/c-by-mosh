//
// Created by Shams Ullah on 10/20/2025.
//

#include "Widget.h"

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


bool Widget::isEnabled() {
    return enabled;
}
