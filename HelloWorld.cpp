#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace this_thread;
using namespace chrono;
// structere is know as struct is custom data types made by the programer for complex calculation and so can be used in every functions
struct CustUmer {
    int id=0;
    string name;
    string address="shamsullajdjfdlkfja;";
    };

int main() {
    CustUmer cust; // we make an instance of the custUmer so we can get the data type inside of it by .
    cout<<"enter your id# ";
    cin>>cust.id;
    cout<<"enter your name# ";
    cin>>cust.name;
    cout<<"enter your address# ";
    cin>>cust.address;
    cout<<cust.id<<endl<<cust.name<<endl<<cust.address<<endl;
    CustUmer cust2{5,"shams"};
    cout<<cust2.id<<endl<<cust2.name<<endl<<cust2.address;


    return 0;
}
