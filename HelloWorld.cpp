#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    // the mean of writing to bionery file is like image stores and videos or for keeping recorses
    int numbers[]={1000000,2000000,3000000};
    ofstream file("numbers.bin",ios::binary);
    if (file.is_open()) {
        // char* is the address of the part of memory we wanna write to the dist or bin
        file.write(reinterpret_cast<char*>(numbers),sizeof(numbers));
        file.close();

    }
}