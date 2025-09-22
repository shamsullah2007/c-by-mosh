#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace this_thread;
using namespace chrono;
// structere is know as struct is custom data types made by the programer for complex calculation and so can be used in every functions
struct CustUmer {
    int id;
    string name;
    string address;
    };

int main() {
    CustUmer cust;
    cout<<"enter your id# ";
    cin>>cust.id;
    cout<<"enter your name# ";
    cin>>cust.name;
    cout<<"enter your address# ";
    cin>>cust.address;
    cout<<cust.id<<endl<<cust.name<<endl<<cust.address;

    return 0;
}
