#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
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
    auto st3 = high_resolution_clock().now();
    vector<CustUmer> custumers;
    // CustUmer custumer={5,"shamsullah"};
    // CustUmer custumer2={10,"shamsulla"};
    custumers.push_back({5,"shamsullah"});
    custumers.push_back({10,"shamsulla"});

    for (const auto& ids: custumers) {
        cout<<ids.name<<endl;

    }
    auto end=high_resolution_clock().now();
    int duration = duration_cast<microseconds>(end-st3).count();
    cout<<duration<<endl;





    return 0;
}
