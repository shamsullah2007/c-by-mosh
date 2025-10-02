//
// Created by Shams Ullah on 10/1/2025.
//

#include "Textbox.h"
#include <string>

Textbox::Textbox(const string& name):name(name) {
}
string Textbox::getText() {
    return name;
}
