//
// Created by Shams Ullah on 10/8/2025.
//

#ifndef C___PRAC_SMARPTR_H
#define C___PRAC_SMARPTR_H


class Smarptr {
private:
    int* ptr;
public:
    Smarptr(int* ptr);
    ~Smarptr();
    int& operator*();


};


#endif //C___PRAC_SMARPTR_H