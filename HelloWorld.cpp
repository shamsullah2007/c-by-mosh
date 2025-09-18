#include <iostream>
#include <iterator> // for std::size
#include <memory>
using namespace std;
//arithemetics with pointers
int main(){
//  we have two types of pointer from previnting data leek
/*unique pointer
 *the pointer only locate to one memory address and the other pointer cannot alocate to the same memory address
 */
    auto x=make_unique<int>(10);
    // auto y=make_unique<int[]>(20);

    unique_ptr<int>z(new int(5));
    


    unique_ptr<int[]>y(new int[20]);
    int entries=0;
    while (true) {
        cin>>y[entries];
        if (cin.fail()){break;}
        entries++;
    }
    for (int i=0;i<entries;i++) {
        cout<<y[i]<<endl;
    }




    cout<<*x<<endl;




    return 0;

}
