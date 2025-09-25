#include <iostream>
#include <limits>
using namespace std;
int main() {
    // while reading data from a consol or file a temprary storage is make in the memory called buffer
    //[]
    cout<<"first: ";
    int a;
    cin >> a;

   cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"second: ";
    int b;
    cin >> b;
    cout << a <<" "<<b << endl;
}