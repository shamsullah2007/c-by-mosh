#include <cmath>
#include <iostream>
#include <math.h>
// passing argument to a function by value  it means the function will work on the copy of the main function veriable and the main fuction veraible is completly independent of the other function local veriabel or you can say perameters
using namespace std;
double numspace(double price) {
    price*=1.2;
    return price;
}
int main() {
    double price=100;
    cout<<price<<endl;
    price=numspace(price);
    cout<<price<<endl;
    cout<<price<<endl;
    return 0;
}