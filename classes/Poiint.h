//
// Created by Shams Ullah on 10/15/2025.
//

#ifndef C___PRAC_POIINT_H
#define C___PRAC_POIINT_H
#include <memory>
#include <ostream>


class Poiint {
    int x;
    int y;
    friend std::ostream& operator<<(std::ostream& os, const Poiint& p);
    public:
    Poiint();
    // Poiint(const Poiint& p)= delete  ;
    Poiint(int x, int y);
    Poiint operator+(const Poiint &p)const;
    Poiint operator+(const int p)const;
    Poiint& operator+=(const Poiint p);
    Poiint& operator=(const Poiint& p);
    Poiint& operator++();
    Poiint operator++(int);
};
std::ostream& operator<<(std::ostream& os, const Poiint& p);



#endif //C___PRAC_POIINT_H