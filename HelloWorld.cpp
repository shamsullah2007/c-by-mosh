#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;
struct movie {
    int id;
    string name;
    int year;
};


int main() {
  fstream file;
    file.open("hello.txt", ios::in|ios::out|ios::app);
    if (file.is_open()) {
        string line;

        // file<<"this is not what are you thinking about\n";
        // file<<"this is not what are you thinking about\n";
        // file<<"this is not what are you thinking about\n";
        while (!file.eof()) {
            getline(file,line , ' ');
            cout<<line<<endl;

        }



    }
}