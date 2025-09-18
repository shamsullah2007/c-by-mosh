#include <iostream>
#include <iterator> // for std::size
using namespace std;
//arithemetics with pointers

int main(){
    int cap=10;
    int* numbers=new int[cap];


    int entries=0;
    while (true) {
        cout<<"Enter numbers: ";
        cin>>numbers[entries];

        if (cin.fail()) {
            break;

        }
        entries++;
        if (entries==10) {
            int newCap=cap*10;
            int* temp=new int[newCap];
            for (int i=0;i<entries;i++) {
                temp[i]=numbers[i];
            }
            delete[] numbers;
            numbers=temp;
            cap=newCap;
        }


    }
    for (int i=0; i<entries; i++) {
        cout<<numbers[i]<<" ";

    }
    cout<<endl;
    delete[] numbers;



    return 0;

}
