// //
// // Created by Shams Ullah on 10/7/2025.
// //
// // #include "class_how.h"
// // #include "Point.h"
// #include "Length.h"
// #include <iostream>
// #include <memory>
//
// // #include "Length.h"
// // #include "Point.h"
// // #include "Smarptr.h"
// #include <chrono>
// #include <ctime>
//
// using namespace std;
// using namespace chrono;
//
// int main() {
//     // auto start =high_resolution_clock::now();
//     // Length a{55};
//     // Length b{55};
//     // if (a==b) {//basicaly it means ( a.operators==(b))
//     //     cout << "equal" << endl;
//     // }
//
//     // Point c{23,24};
//     // Point d{23,25};
//     // cout<<(c==d);
//     // if (c==10)
//     //
//     // if (c!=d)
//     //     cout<<(c!=d);
//     Length first{89};
//     Length second{46};
//     // cout<<(first<=second);
//     // cout<<endl;
//     // cout<<(second>=first);
//     // cout<<(first==second)<<endl;
//     // cout<<(first<second);
//     // cout<<endl;
//     cout << first.getValue() << second.getValue();
//     cout<<first<<endl;
//
//
//
//     // auto end =high_resolution_clock::now();
//     // auto duration=duration_cast<microseconds>(end-start).count();
//     // cout<<"exicution time is:"<<duration;
// return 0;
// }
#include "operation_on_points.h"
#include <iostream>

#include "Length.h"
#include "Poiint.h"
using namespace std;
int main() {
    Length first{20};
    // Length second=first++;
    Length second=++first;
    cout << second << endl;
    cout << first << endl;
    Poiint first2{10,20};
    Poiint second2=first2++;
    // Poiint second2=++first2;
    cout << second2 << endl;
    cout << first2 << endl; 







}