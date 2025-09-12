#include  <iostream>
using namespace std;
int main() {

// while loop
    int secret =10;
    int x=0;
    int counter=0;
    // this will loop until the conditon get false
    while (x!=secret) {
        cout<<"gues a number;"<<endl;
        cin>>x;
        if (x<10) {
            cout<<"gause higer"<<endl;

        }
        else if (x>10) {
            cout<<"lower"<<endl;
        }
        counter++;

    }
    cout<<"corect gues in "<<counter<<"  "<<"attemps is :"<<secret<<endl;

}