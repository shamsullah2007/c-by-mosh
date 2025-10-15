//
// Created by Shams Ullah on 10/15/2025.
//

#ifndef C___PRAC_POIINT_H
#define C___PRAC_POIINT_H
#include <ostream>


class Poiint {
    int x;
    int y;
    friend std::ostream& operator<<(std::ostream& os, const Poiint& p);
    public:
    Poiint(int x, int y);
    Poiint operator+(const Poiint &p)const;
    Poiint operator+(const int p)const;
};
std::ostream& operator<<(std::ostream& os, const Poiint& p);



#endif //C___PRAC_POIINT_H