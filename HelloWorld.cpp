#include <iostream>
using namespace std;
void tolowercase(string &cus,int size) {
    for (char c=0;c<size;c++) {
        cus[c]=tolower(cus[c]);
    }
}
void isvalidate(string cus) {
    tolowercase(cus,size(cus));
    while (true){
        if (cus=="0987ab") {
            cout<<cus<<endl;
            break;
        }
        else {
            cout<<"try again"<<endl;
            cin>>cus;
            tolowercase(cus,size(cus));
        }
    }
}
int main() {
    string customer;
    cin>>customer;
    isvalidate(customer);
    return 0;

}