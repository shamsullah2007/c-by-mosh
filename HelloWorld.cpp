#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;
struct movie {
    int id;
    string name;
    int year;
};

int main() {
    // int numbers[3];
   ifstream file;
    file.open("numbers.bin", ios::binary);
    if (file.is_open()) {
        // if you dont know the exect number of digits in the binory file
        int number;
        while (file.read(reinterpret_cast<char*>(&number), sizeof(number))){
            cout << number << endl;
        }
        // if you know exect number of number in the file
        // file.read(reinterpret_cast<char*>(&numbers), sizeof(numbers));
        // cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl;
        // file.close();
    }
}