//
// Created by Shams Ullah on 10/8/2025.
//

#include "Length.h"

#include <iostream>
#include <stdexcept>
#include <string>
#include <ostream>

Length::Length(int value): value(value) {

}

Length Length::operator+(const Length &other) {
    return Length(value+other.value);
}

Length Length::operator+(int& other)const {
    return Length(value+other);
}

// bool Length::equal(const Length &other) const {
//     return value == other.value;
// bool Length::operator==(const Length &other) const {
//     return value == other.value;
// }
//
// strong_ordering Length::operator<=>(const Length &other) const {
//     return value<=>other.value;
// }

void Length::setValue(int value)  {
    if (value>100) {
        throw invalid_argument("Value is greater than 100");
    }
    this->value = value;
}
int Length::getValue() const {
    return value;
}

Length& Length::operator++() {
    ++value;
    return *this;

}
Length Length::operator++(int) {
    Length copy = *this;
    // ++value;
    operator++();
    return copy;

}

ostream& operator<<(ostream& stream,const Length& other)  {
    stream<<other.value<<endl;
    return stream;
}

istream & operator>>(istream &stream, Length &other) {
    int value;
    int y;
    cin>>value;
    other.value = value;
    // other.y = y;
    return stream;
}

//
// bool Length::operator<(const Length &other) const {
//     return value < other.value;
// }
//
// bool Length::operator>(const Length &other) const {
//     return value > other.value;
// }
//
// bool Length::operator<=(const Length &other) const {
//     return !(value >other.value);
// }
//
// bool Length::operator>=(const Length &other) const {
//     return !(value<other.value);
// }



