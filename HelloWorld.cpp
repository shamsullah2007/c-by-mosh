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
    };

int main() {
    auto st3 = high_resolution_clock().now();
    CustUmer custumers{5,"shamsullah", {    "shamsullah@gmail.com",
        "bannu","kpk","pakistan",45}};

    cout << custumers.id << endl<<custumers.name << endl<<custumers.address.city<<endl<<custumers.address.country<<endl;






    auto end=high_resolution_clock().now();
    int duration = duration_cast<microseconds>(end-st3).count();
    cout<<duration<<endl;





    return 0;
}
