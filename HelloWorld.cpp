#include <iostream>
#include <limits>
using namespace std;
int Number(const string& prompt) {
    int number;

    while (true) {
        cout<<prompt<<endl;
        cin>>number;
        if (cin.fail()) {
            cout<<"invalid input"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
    return number;
}
int main() {
     int first=Number("first");
    int second=Number("second");

    // cout<<first<<second<<endl;
    return 0;

}