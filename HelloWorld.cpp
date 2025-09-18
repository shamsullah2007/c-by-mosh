#include <iostream>
#include <iterator> // for std::size
using namespace std;
//arithemetics with pointers

int main(){
    int a=45;
    int b=59;
    int* p1=&a;
    int* p2=&b;
    cout<<boolalpha<<(p1==p2)<<endl;
    cout<<boolalpha<<(p1>p2)<<endl;

    int numbers[]={1,2,3,4,5,6,7,8,9};
    int* ptr=numbers;
    cout<<boolalpha<<(ptr[4]>=ptr[1])<<endl;










    return 0;




}
