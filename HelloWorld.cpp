#include <iostream>
#include <iterator> // for std::size
using namespace std;
void diamenarray(int matrix[][2][3] ,int size) {
    for (int lay=0;lay<size;lay++) {
        for (int row=0;row<2;row++) {
            for (int col=0;col<3;col++) {
                cout <<matrix[lay][row][col] << " ";

            }
            cout<<endl;
        }
    }
}
int main() {
    int matrix[3][2][3]={
        {{22,34,56},{12,34,56}},
        {{22,34,56},{12,34,56}},
          {{22,34,56},{12,34,56}}
    };
    diamenarray(matrix,3);

    return 0;
}
