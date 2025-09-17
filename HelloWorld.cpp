#include <iostream>
#include <iterator> // for std::size
using namespace std;
//arithemetics with pointers
int main(){
    int price[]={1,5,3,4,5};
    int* ptr=price;
    // why it not increase 1+1 becuse evey integer is 4 bytes to it increase by 1 int = 4bytes
    //imagin we have 1 at address of 100->103 this doenst  make sence to read from the mid of integer

    ptr++;
    ptr--;
    // in other word we can say it increament by sizeof(datatype)
    cout<<*ptr;
    // we can do only addition and subtraion with pointer
    int arr[]={1,5,3,4,5};
    int* ptr2=arr;
    cout<<*(ptr2+1);
    cout<<arr[1];// this three are same expersion ok but under the hood  is using the *(ptr2+1)
    ptr2++;
    cout<<*ptr2<<endl;
    int number=100;
    int* ptr3=&number;
    ptr3++;
    cout<<*ptr3;
    /*why it return 1 because we have to say that the 100 is store in the memory address
     * 1000 so our handred kep the 1000->1003 in memory b/c int have 4 bytes in meory
     * when i inciment it by 1 so it move to the next memory that i don't allocated so
     * it return an garbage value
     */







    return 0;




}
