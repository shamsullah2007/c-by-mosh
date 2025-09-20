#include <iostream>
using namespace std;
int main() {
    string name="shams ullah son of ,zarghon shah";
    string firstName=name.substr(0,name.find(" "));
    string lastname=name.substr(name.find(" ")+1,name.find(" "));
    string fatherfirstName=name.substr(name.find_first_of(",")+1,name.find(" ")+2);
    string fatherlastname=name.substr(name.rfind(" ")+1,4);

    cout<<firstName<<" ";
    cout<<lastname<<endl;
    cout<<fatherfirstName<<" ";
    cout<<fatherlastname<<endl;
}