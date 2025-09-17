#include <iostream>
#include <iterator> // for std::size
using namespace std;
int main(){
    //senerio where data is constant and pointer is not
    const int x=100;
    const int* p=&x;
    int y=200;
    p=&y;
    cout<<*p<<endl;
    // in this senerio pointer is constant
    int y1=3444;
    int* const p1=&y1;
    *p1=200000;
    int x1=3434;
    cout<<*p1<<endl;

    // senerio wher both are constant
    const int d=7474;
    const int* const p2=&d;
    cout<<*p2<<endl;




    return 0;




}
