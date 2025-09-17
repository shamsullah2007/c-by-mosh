#include <iostream>
#include <iterator> // for std::size
using namespace std;
int main(){
    // pointer is a veriable that holds the addrees of another veriabel {type*} and we have to initialize it must
    int number=40;
    // this pointer
    int* pointer=&number;
    //de refrencing(indirection) through this we go to the address and pick the value
    *pointer=100;
    cout<<*pointer;

    int x=23;
    int y=100;
    int* ptr=&x;
    *ptr*=100;
    cout<<*ptr;
    ptr=&y;
    *ptr*=100;
    cout<<*ptr;

    return 0;




}
