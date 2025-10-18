//
// Created by Shams Ullah on 10/17/2025.
//

#include "Array.h"
#include <stdexcept>

Array::Array(size_t size) {
    valuess=new int[size];
    this->size=size;

}

Array::~Array() {
    delete[]  valuess;
}

int & Array::operator[](size_t index) {
    if (index>=size) throw std::invalid_argument("index out of bounds");
    return valuess[index];
}
