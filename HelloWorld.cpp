#include <iostream>
#include <iterator> // for std::size
using namespace std;

int main() {
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int array_size []= {0,1,8,3,4,5,6,7,8,9};
    bool equal = true;
    for(int i=0;i<sizeof(array)/sizeof(int);i++) {
        if (array[i] != array_size[i]) {
            equal = false;

            break;

        }

        }
    if (equal) {
        cout<<boolalpha<<equal<<endl;
    }
    else {
        cout<<boolalpha<<equal<<endl;
    }

    return 0;
}
