#include "Return_String.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>
using namespace std;
int main() {
    auto start = chrono::high_resolution_clock::now();

    REctangle Return_String(34,23);
    // Return_String.sethight(10);
    // cout<<Return_String.gethight();
    cout << Return_String.getwidth() << endl;

    auto end = chrono::high_resolution_clock::now();
    double  duration =chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << duration << endl;
    return 0;


}