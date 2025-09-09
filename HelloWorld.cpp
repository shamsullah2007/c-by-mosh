#include <iostream>
using namespace std;
int main() {

    bool uscitizen=true;
    bool bachler=true;
    bool year_of_experianc=3;
    bool all=uscitizen && (bachler || year_of_experianc>2);
    cout<<boolalpha<<uscitizen<<endl;
    return 0;
}