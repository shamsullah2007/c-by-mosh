#include <iostream>
#include <iterator> // for std::size
using namespace std;
int findIndex(int array[],int size,int target) {
    for (int i = 0; i < size; i++)
        if (array[i]==target)
            return i;
    return -1;
}
int main() {
    int arrays[]={1,2,3,4,5,6,5,8,9};

    cout<<findIndex(arrays,size(arrays),9)<<endl;





    return 0;
}
