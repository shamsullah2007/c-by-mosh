#include <iostream>
using namespace std;
int main() {
    int age=18;
    int salary=5000;
    bool eligible=salary>500 || age>18 && age<30 ;
    cout<<boolalpha<<!eligible<<endl;
    int x=10;
    int y=20;
    bool z=!(x<y && x>y);
    cout<<boolalpha<<z<<endl;
    bool a =true;
    bool b=false;
    bool c=false;
    bool result=c || a && !b;
    cout<<boolalpha<<result<<endl;
    return 0;
}