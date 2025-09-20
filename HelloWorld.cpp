#include  <iostream>
using namespace std;
// why string conversion: is for reading data from the user or terminal and do mathimatical operations on it so it takes any thing from the user it is in the form of strings so we have to convert is explicitly into other data types on which work with
void typeconversion(const string &age1,const string &age2) {
    int age3=stoi(age1);
    int age4=stoi(age2);
    cout<<age3<<" "<<age4<<endl;

}
int main() {
    string age1;
    string age2;
    cin >> age1 >> age2;
    typeconversion(age1,age2);
    cout<<age1+age2<<endl;





    return 0;
}