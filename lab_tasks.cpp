//
// Created by Shams Ullah on 10/3/2025.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    double m1, m2, m3, m4;
    double total=40;
    cout<<"enter your marks :";
    cin>>m1>>m2>>m3>>m4;
    double percetage=((m1+m2+m3+m4)/400)*100;
    cout<<"percetage is :"<<percetage<<"%"<<endl;
    if (percetage>=80){cout<<"A grade"<<endl;}
    else if (percetage>=70&&percetage<80){cout<<"B grade"<<endl;}
    else if (percetage>=60&&percetage<70){cout<<"C grade"<<endl;}
    else if (percetage>=50){cout<<"D grade"<<endl;}
    else if (percetage>=40){cout<<"E grade"<<endl;}
    else{cout<<"F grade"<<endl;}
    }

