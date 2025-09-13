#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

double squre_root(int digits,double power=0.5) {
    return pow(digits,power);
}

int main() {
    double result=squre_root(10);
    cout<<result<<endl;



    return 0;
}