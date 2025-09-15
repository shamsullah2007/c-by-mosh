#include <iostream>
using namespace std;
void calculateTax(double sale);//this is declaration of fuction that tells the compiler hey ther is function of the and the perameters
int main() {
    double sale=10000;

    calculateTax(sale);
    cout<<sale;

}
const double taxrate=0.5;
// this is the definition of function the actual function
void calculateTax(double sale) {
    cout<<taxrate*sale<<endl;
}

