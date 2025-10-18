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
    // int y;
    friend ostream& operator<<(ostream& stream,const Length& other);
    friend istream& operator>>(istream &stream, Length &other);
    //by using friend of a class we can access the private attributes of the class without defining the getter and the setter

public:
    explicit Length(int value);

    Length operator+(const Length& other);
    Length operator+(int& other)const;
    // bool equal(const Length &other) const;
    // bool operator==(const Length &other) const;
    // bool operator<(const Length &other) const;
    // bool operator>(const Length &other) const;
    // bool operator<=(const Length &other) const;
    // auto operator>=(const Length &other) const;
    // strong_ordering operator<=>(const Length & other) const;
    void setValue(int value);
    int getValue() const;
    Length& operator++();
    Length operator++(int);
    explicit  operator int()const;
};

ostream& operator<<(ostream& stream,const Length& other);
istream& operator>>(istream& stream,Length& other);

#endif //C___PRAC_LENGTH_H