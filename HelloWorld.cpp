#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
// Function overloading:
// Function overloading is the phenomenon where functions have the same name
// but different parameter lists (different number or types of parameters).
//
// Signature:
// A function’s signature is defined by its name and its parameter list
// (types, number, and order of parameters).
// Functions can have the same name but must differ in their signature to be overloaded.
//
// Note: The return type is NOT part of the function signature in C++.

void greet(string name,int all) {
    cout<<"hello"<<all<<name<<endl;
}
void greet(int all,string name) {
    cout<<"hello"<<" "<<all<<"."<<name;
}

int main() {
    greet("shams",5);
    greet(5,"mr");






    return 0;
}