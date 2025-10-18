//
// Created by Shams Ullah on 10/17/2025.
//

#ifndef C___PRAC_ARRAY_H
#define C___PRAC_ARRAY_H
#include <cstddef>


class Array {
    public:
    explicit Array(size_t size);
    ~Array();
    int& operator[](size_t index);
private:
    int* valuess;
    size_t size;
};


#endif //C___PRAC_ARRAY_H