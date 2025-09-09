#include <iostream>
using namespace std;
int main() {


    int sales;
    cout<<"enter the amount of sales:";
    cin>>sales;

    if (sales<=10000)
        cout<<"comission"<<endl<<"$"<<sales*0.1;
    else if (sales<=15000)
        cout<<"comission"<<endl<<"$"<<sales*0.15;
    else
        cout<<"comission"<<endl<<"$"<<sales*0.2;


    return 0;
}