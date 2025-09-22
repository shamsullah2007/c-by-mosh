#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace this_thread;
using namespace chrono;

int main() {
    auto start=high_resolution_clock::now();
    int num_iterations =0;
    for (int i = 0; i <= 100; i += 5) {
        cout << "Downloading: " << i << "%\r";  // \r moves cursor back
        sleep_for(milliseconds(1000)); // wait 0.5 sec
        num_iterations++;
    }
    cout << endl << "Download Complete! in nubers of :" <<num_iterations<< endl;
    auto end=high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end-start);
    cout <<"task completed in "<< duration.count() << " ms" << endl;
    return 0;
}
