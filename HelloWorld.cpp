#include <iomanip>
#include <iostream>
using namespace std;
int main() {

    int num1;
    int num2;
    string oper;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2>>oper;
    if (oper=="+")
        cout << num1 + num2;
    else if (oper=="-")
        cout << num1 - num2;
    else if (oper=="*")
        cout << num1 * num2;
    else if (oper=="/")
        if (num2!=0)
           cout << num1 / num2;
        else
            cout<<"num2 cannot be 0";
    else
        cout<<"operation not vailaid";






    return 0;
}