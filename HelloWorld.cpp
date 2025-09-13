#include <iostream>
using namespace std;
int Maxima(int first,int secon) {
    return (first>secon)?first:secon;
}


int main() {
    int a,b;
    cout<<"enter 2 digits to chect maxima and minima :"<<endl;
    cin>>a>>b;
    int maxima=Maxima(a,b);
    cout<<maxima;


    return 0;
}