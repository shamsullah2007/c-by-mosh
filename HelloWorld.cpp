#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;
struct Movie {
  string title;
  int year;

};
Movie readMovie(string stream) {
  stringstream ss;
  ss.str(stream);
  Movie movie;
  getline(ss, movie.title, ',');
  ss >> movie.year;
  return movie;


}


int main() {
  string line="12 23 35";
  stringstream ss;
  ss.str(line);
  int n;
  ss>>n;
  int m;
  ss>>m;
  int k;
  ss>>k;
  cout<<n<<" "<<m<<" "<<k<<endl;
  string movie="terminator 1,1996";
  stringstream Movie;
  Movie.str(movie);
  string a;
  getline(Movie, a,',');
  int b;
  Movie>>b;
  cout<<a<<endl<<b<<endl;
  auto movies=readMovie(movie);
  cout<<movies.title<<endl;
  cout<<movies.year<<endl;




}