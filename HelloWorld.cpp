#include <iostream>
#include <iterator> // for std::size
using namespace std;
int main() {
    int number;
    cout<<"enter a number to check it is prime or not"<<endl;
    cin>>number;
    bool isPrime=true;
    if (number<=1){
        cout<<number<<" is not prime"<<endl;
        isPrime=false;
}
    else {
        for(int i=2;i<number;i++) {
            if(number%i==0) {
                isPrime=false;
                break;
            }


        }
    }
    if(isPrime) {
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;


    return 0;
}
