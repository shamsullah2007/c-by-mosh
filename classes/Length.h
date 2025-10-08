//
// Created by Shams Ullah on 10/8/2025.
//

#ifndef C___PRAC_LENGTH_H
#define C___PRAC_LENGTH_H


class Length {
private:
    int value;
    public:
    Length(int value);
    // bool equal(const Length &other) const;
    bool operator==(const Length &other) const;
};


#endif //C___PRAC_LENGTH_H