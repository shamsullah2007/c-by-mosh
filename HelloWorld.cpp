#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;
using namespace this_thread;
using namespace chrono;

// structere is know as struct is custom data types made by the programer for complex calculation and so can be used in every functions
struct point {
    int x;
    int y;
};
bool operator==(const point &a, const point &b) {
    if (a.x==b.x && a.y==b.y)
        return true;
    else
    {
        return  false;
    }
}
ostream& operator<<(ostream& stream, const point& p) {
    stream<<"("<<p.x<<","<<p.y<<")";
    return stream;
}


int main() {
    auto st3 = high_resolution_clock().now();
    point p{45,45};
    point p1{45,45};
    if (p==p1){
        cout<<"equal"<<endl;

    }
    cout<<p<<endl;



        auto end=high_resolution_clock().now();
        int duration = duration_cast<microseconds>(end-st3).count();
        cout<<duration<<endl;
        return 0;
    }