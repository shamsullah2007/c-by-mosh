//
// Created by Shams Ullah on 10/8/2025.
//

#include "Length.h"
Length::Length(int value): value(value) {

}

// bool Length::equal(const Length &other) const {
//     return value == other.value;
bool Length::operator==(const Length &other) const {
    return value == other.value;
}

