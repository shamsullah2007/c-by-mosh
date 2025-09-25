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
    vector<Movie> movies{
        {1,"deadpole",2000},
        {2,"deadpole o1",2004},
        {3,"dEADPLE 02",2016}
    };
    movies.push_back({4, "Terminator 1", 1984});
    movies.push_back({5, "Terminator 2", 1991});
    ofstream file;
    file.open("hello.csv");
    if (file.is_open()) {
        for (Movie movie:movies){
            file <<movie.id<<","<< movie.title << "," << movie.year << endl;

    }


        file.close();
        cout<<"data is written to csv file";



    }
    else {
        cout<<"could not open file";
    }
}