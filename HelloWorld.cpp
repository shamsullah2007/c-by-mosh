#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string s="Hello World";
    string s1 = "gello World";
    cout<<s.compare(s1)<<endl;
    const char* cstr=s.c_str();
    cout<<strlen(cstr)<<endl;

    cout << s.length() << endl;
    cout << s.back() << endl;
    cout << s.at(7) << endl;
    auto it = s.begin();
    cout << *it << endl;
    for (auto it=s.begin();it<s.end();it++) {
        cout<<*it<<endl;
    }


    cout << s.append(" are very logical")<< endl;

    auto ft = s.begin();
    cout << *ft << endl;
    s.append(" shamsullah");
    cout <<s << endl;
}