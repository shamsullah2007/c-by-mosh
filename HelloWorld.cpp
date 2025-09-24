#include <iostream>
using namespace std;
// enumeration is bassicaly the group of constant under one group and use for selection it is by default assigne value as integer
enum  day {
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
        case day::sunday:
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