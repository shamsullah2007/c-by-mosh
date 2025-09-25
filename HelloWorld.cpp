#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

struct Movie {
    int id;
    string title;
    int year;
};
int main() {
    // READING FORM A FILE
    ifstream file;
    file.open("hello.csv");
    if (file.is_open()) {
        while (!file.eof()) {
            string line;
            getline(file, line,',');
            if (line.empty()){continue;}// if there is empty line or string we should skip it and move to the next iteration
            Movie movie;
            movie.id = stoi(line);
            getline(file, line,',');
            movie.title = line;
            getline(file, line);
            movie.year = stoi(line);
            cout <<movie.title << endl;
        }

    }
}