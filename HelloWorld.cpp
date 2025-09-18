#include <iostream>
#include <iterator> // for std::size
#include <memory>
using namespace std;
//arithemetics with pointers
int main(){
//  we have two types of pointer from previnting data leek
/*shared pointer
 *a two differant pointer can loacate to a same memory location
 */
    shared_ptr<int> p(new int(1));
    shared_ptr<int> q(p);
    if (p=q)
        cout<<"equal"<<endl;




    return 0;

}
