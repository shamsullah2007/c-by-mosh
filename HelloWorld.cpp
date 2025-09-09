#include <iomanip>
#include <iostream>
using namespace std;
int main() {


    string street;
    string city;
    string state;
    string country;
    string country_code;
    getline(cin, street);
    getline(cin, city);
    getline(cin, state);
    getline(cin, country);
    getline(cin, country_code);
    cout<<setw(20)<<"STREET"<<setw(20)<<"CITY"<<setw(20)<<"STATE"<<setw(20)<<"COUNYRY"<<endl;
    cout<<setw(20)<<street<<setw(20)<<city<<setw(20)<<state<<setw(20)<<country<<endl;



    return 0;
}