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
    bool equal(CustUmer custumers2) {
        if (id==custumers2.id &&
        name==custumers2.name &&
        address.city==custumers2.address.city&&
        job==custumers2.job)
            return true;
        else

            return  false;
    }



    };

int main() {
    auto st3 = high_resolution_clock().now();
    CustUmer custumers{5,"shamsullah", {    "shamsullah@gmail.com",
        "bannu","kpk","pakistan",45},"gaday ka kam kertay hat"};
    CustUmer custumers2{5,"shamsullah", {    "shamsullah@gmail.com",
        "bannu","kpk","pakistan",45,},"gaday ka kam kertay hat"};
    if (custumers.equal(custumers2)) {
        cout<<"equal"<<endl;
    }

        auto end=high_resolution_clock().now();
        int duration = duration_cast<microseconds>(end-st3).count();
        cout<<duration<<endl;
        return 0;
    }