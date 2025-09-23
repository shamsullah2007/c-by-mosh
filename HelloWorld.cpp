#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;
using namespace this_thread;
using namespace chrono;

// structere is know as struct is custom data types made by the programer for complex calculation and so can be used in every functions
struct address {
    string email;
    string city="bannu";
    string state="kpk";
    string country="pakistan";
    int postal_code;
};
struct CustUmer {
    int id=0;
    string name;
    address address;
    string job = "kota karahi";
    };
    bool operator==(const CustUmer & custumers, const CustUmer& custumers2) {
        return (custumers.id==custumers2.id &&
        custumers.name==custumers2.name &&
        custumers.address.city==custumers2.address.city&&
        custumers.job==custumers2.job);
    }
    ostream& operator<<(ostream& stream,CustUmer& custumer) {
        stream<<custumer.name;
        return stream;
    }


int main() {
    auto st3 = high_resolution_clock().now();
    CustUmer custumers{5,"shamsullah", {    "shamsullah@gmail.com",
        "bannu","kpk","pakistan",45},"gaday ka kam kertay hat"};
    CustUmer custumers2{5,"shamsullah", {    "shamsullah@gmail.com",
        "bannu","kpk","pakistan",45,},"gaday ka kam kertay hat"};
    if (custumers==custumers2) {
        cout<<"equal"<<endl;
    }
        cout<<custumers<<endl;

        auto end=high_resolution_clock().now();
        int duration = duration_cast<microseconds>(end-st3).count();
        cout<<duration<<endl;
        return 0;
    }