#include <iostream>
#include <limits>
using namespace std;
int main() {
    // while reading data from a consol or file a temprary storage is make in the memory called buffer
    //[]
    int a;
    int  b;
    while (true) {
        cout<<"first: ";
        cin >> a;
        if (cin.fail()) {
            cout<<"error"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;


    }  while (true) {
        cout<<"second: ";
        cin >> b;
        if (cin.fail()) {
            cout<<"error"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;



    }
    cout<<a<<b<<endl;
    return 0;

}