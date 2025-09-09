#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //nasting if and else statment
    bool iscitizen =true
     ;
    short tuition=0;
    bool caresident=false;
    if (iscitizen) {
        if (!caresident)
            tuition=1000;
        else
            tuition=1000;
            // cout<<tuition;
    }
    else
        tuition=3000;
    cout << "Tuition is: " << tuition << endl;


    return 0;
}