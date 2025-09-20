#include <iostream>
using namespace std;
string islowercase(string &cus,int size=8) {
    for (int i = 0; i < size; i++) {
        cus[i] = tolower(cus[i]);
    }
    return cus;

}
bool isvalidate(string cus) {
    islowercase(cus);
    if (cus.length()!=9 ) {
        return false;

    }
    for (int i=0;i<cus.length()-5;i++) {
        if (!isalpha(cus[i])) {
            return false;

        }
    }
    for (int i=4;i<cus.length();i++) {
        if (!isdigit(cus[i])) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string customer ="abcd00978";
    bool returning=isvalidate(customer);
    cout<<returning<<endl;
    return 0;

}