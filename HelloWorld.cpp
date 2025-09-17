#include <iostream>
#include <iterator> // for std::size
using namespace std;
// by passing function to a pointer  is old way
void swap(int* first,int* second) {
    int temp=*second;
    *second=*first;
    *first=temp;



}
// passing value to a function by refrence is modern way
void swaping(int& price) {
    price*=2;


}
int main(){
    //senerio where data is constant and pointer is not

    int x=100;

    // int y=200;;
    // swap(&x,&y);
    // cout<<x<<" "<<y<<endl;
    swaping(x);
    cout<<x<<endl;






    return 0;




}
