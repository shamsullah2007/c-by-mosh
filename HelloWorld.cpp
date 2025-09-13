#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

double squre_root(int digits,double power=0.5) {
    if (digits<0) {
        cout<<pow(digits,power)<<"i";
    }
    else
        cout<<pow(-digits,power);
}

int main() {
    unsigned int kamla=-10;
    cout<<squre_root(kamla);




    return 0;
}