#include <iostream>
#include <iterator> // for std::size
using namespace std;
void swap(int arr[],int i,int j) {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;


}
void sorting(int arr[],int size) {
    for (int j=0;j<size;j++)
        t {
            if (arr[i] < arr[i - 1]) {
                swap(arr, i, i - 1);

            }
    }
}
int main() {
    int array[]={2,1,6,5,9,8,0,10,99,87,65};
    sorting(array,size(array));
    for (int i = 0; i < size(array); i++) {
        cout<<array[i]<<"\n";
    }

    return 0;
}
