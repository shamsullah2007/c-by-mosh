#include <iomanip>
#include <iostream>
using namespace std;
int main() {

    int num1;
    int num2;
    char oper;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2>>oper;
    switch (oper) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout <<"num2 cannot be 0";
            break;
        default:
            cout<<"operation not vailid";





    }






    return 0;
}