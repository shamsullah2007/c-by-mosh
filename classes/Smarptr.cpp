//
// Created by Shams Ullah on 10/8/2025.
//

#include "Smarptr.h"

Smarptr::Smarptr(int *ptr) : ptr(ptr){

}

Smarptr::~Smarptr() {
    delete ptr;
    ptr = nullptr;
}
