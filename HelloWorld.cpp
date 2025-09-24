#include <iostream>
using namespace std;
// strongly typed enumeratio is comes when you make another enumeration whith the same constant so it type reusablity error occure
enum class   day {
    sunday=1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};enum  class month {
    sunday=1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main() {
    int input;
   const int sunday=9;
    cin >> input;



    switch(input) {
        case day::sunday:// what happens here is that the compiler don't  know how to compare int with sunday data type it don't know is it integer or some thing else
        case day::saturday:
            cout <<sunday<<" "<<saturday<<" are weekend days";
            break;
        case day::monday:
            cout <<monday<<" "<<monday<<" are weekend days";
            case day::tuesday:
            cout<<tuesday;
            case day::wednesday:
            cout<<wednesday;

            case day::friday:
            cout<<friday;

            cout<<"all are weed days";
            break;
        case sunday:
            cout<<sunday<<" is local veriable";
            break;
    }

}