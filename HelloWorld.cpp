#include "Return_String.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

#include "Textbox.h"

using namespace std;
void showtext(Textbox text) {

}
void showRectangl(REctangle& rectangle) {

}


int main() {
    auto start = chrono::high_resolution_clock::now();
       REctangle first{25,30};
       REctangle second{25,30};
       cout<<REctangle::getobject()<<endl;
       //showRectangl(first);//here it say you are calling the deleted copy constructor
         // REctangle second=first;

    // REctangle strings2(5);
    // cout<<strings2.getwidth()<<endl;
    //
    // REctangle Return_String;
    // // Return_String.sethight(10);
    // // cout<<Return_String.gethight();
    // cout << Return_String.getwidth() << endl;
    // Textbox texbox("shams");
    // string text="shamsullah";
    // showtext(text);
    // string.getname();
    //
    // REctangle strings(2,3,"shamsullah");
    // cout<<strings.getwidth()<<endl;



    auto end = chrono::high_resolution_clock::now();
    double  duration =chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << duration << endl;
    return 0;


}