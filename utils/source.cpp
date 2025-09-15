#include  <iostream>
using namespace std;

const double taxrate=0.5;
//if there is the same function in the std namspace so it conflict so we can put our function in the other container called namespace
namespace cct {

    void calculateTax(double sale) {
        cout<<taxrate*sale<<endl;
}
    void oddNumber(int limit) {
        for (int i=1;i<=limit;i++) {
            if (i%2!=0) {
                cout<<i<<endl;
            }
        }
    }
}
