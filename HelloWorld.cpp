#include <iostream>
#include <iterator> // for std::size
using namespace std;
//arithemetics with pointers

int main(){

    int* arr=new int[4];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;

   int* tem=new int[7];
    for (int i=0;i<4;i++) {
        tem[i]=arr[i];
    }
    delete[] arr;
    tem[4]=5;
    tem[5]=6;
    tem[6]=7;
    for (int i=0;i<7;i++) {
        cout<<tem[i]<<" ";
    }












    return 0;




}
