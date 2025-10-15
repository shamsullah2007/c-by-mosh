//
// Created by Shams Ullah on 10/8/2025.
//

#ifndef C___PRAC_LENGTH_H
#define C___PRAC_LENGTH_H
#include <compare>
#include <iosfwd>
#include <istream>
using namespace std;


class Length {
private:
    int value;
public:
    Length(int value);
    // bool equal(const Length &other) const;
    // bool operator==(const Length &other) const;
    // bool operator<(const Length &other) const;
    // bool operator>(const Length &other) const;
    // bool operator<=(const Length &other) const;
    // auto operator>=(const Length &other) const;
    // strong_ordering operator<=>(const Length & other) const;
    void setValue(int value);
    int getValue() const;
};

ostream& operator<<(ostream& stream,const Length& other);
istream& operator>>(istream& stream,Length& other);

#endif //C___PRAC_LENGTH_H