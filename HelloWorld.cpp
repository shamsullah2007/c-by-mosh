#include "Return_String.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

#include "Textbox.h"

using namespace std;
void showtext(Textbox text) {

}


int main() {
    auto start = chrono::high_resolution_clock::now();

    REctangle strings2(5);
    cout<<strings2.getwidth()<<endl;

    REctangle Return_String;
    // Return_String.sethight(10);
    // cout<<Return_String.gethight();
    cout << Return_String.getwidth() << endl;
    Textbox texbox("shams");
    showtext(texbox);
    REctangle strings(2,3,"shamsullah");
    cout<<strings.getwidth()<<endl;



    auto end = chrono::high_resolution_clock::now();
    double  duration =chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << duration << endl;
    return 0;


}