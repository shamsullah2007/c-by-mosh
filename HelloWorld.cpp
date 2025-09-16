#include <iostream>
#include <iterator> // for std::size
using namespace std;

int main() {
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int second[size(array)];   // use std::size here

    for (int i = 0; i < size(array); i++) {
        second[i] = array[i];
    }

    for (int i = 0; i <size(array); i++) { // must use array, not second
        cout << second[i] << endl;
    }

    return 0;
}
