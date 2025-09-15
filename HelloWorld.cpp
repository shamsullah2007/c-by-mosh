#include <iostream>
using namespace std;
const double taxrate=0.5;
void calculateTax(double sale) {
    cout<<taxrate*sale<<endl;
}
int main() {
    double sale=10000;
    
    calculateTax(sale);
    cout<<sale;

}

