#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;
struct movie {
    int id;
    string name;
    int year;
};
string convert(const double &num , int precision) {
    stringstream ss;
    ss<<fixed<<setprecision(precision)<<num<<endl;
    return ss.str();

}

int main() {
    double num=50.5787;
    int precision=2;
    string name=convert(num,precision);
    cout<<name<<endl;




}