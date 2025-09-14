#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
// Passing an argument by reference means the function can modify
// the variable in the main function directly, since it works on the original.

void numspace(double& price) {
    price*=1.2;

}
int main() {
    double price=100;
    cout<<price<<endl;
    numspace(price);
    cout<<price<<endl;
    cout<<price<<endl;
    return 0;
}