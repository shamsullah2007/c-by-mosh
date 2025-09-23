#include <iostream>
using namespace std;
struct Movie {
    string name;
    string address;
    int year;

};
ostream& operator<<(ostream& os, const Movie& movie) {
    os<<movie.name<<" "<<movie.address<<" "<<movie.year;

}
Movie getMovie() {
    Movie movie;
    return movie;
}
void showMovie(Movie* movie) {
    cout<<"Movie Name: "<<(*movie).name<<"  movie address  "<<movie->address<<endl;// you have to use pointer destructing because it is just an address so it don't have access to the mamber of the structure
}



int main() {
    Movie movie{"shams","kotka muhammad shah",1947};
    // cout<<movie<<endl;
    showMovie(&movie);





}