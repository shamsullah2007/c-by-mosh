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
   vector<int> movies;
    ifstream myfile;
    myfile.open("numbers.bin",ios::binary);
    if (myfile.is_open()){
        int n;
        while (myfile.read(reinterpret_cast<char*>(&n),sizeof(n))) {
            movies.push_back(n);
            cout << n << endl;

        }
        cout<<movies[0]<<endl;

        myfile.close();


    }
}