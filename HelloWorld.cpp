#include <iostream>
#include <iterator> // for std::size
using namespace std;
int main() {
    int arrays[10]={1,2,3,4,5,6,7,8,9};
    //unpacking : in c++ you need to know the exect size of arry you don't do partial unpacking
    auto [x,y,z,d,g,h,j,e,r,t]=arrays;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"z:"<<z<<endl;


    return 0;
}
