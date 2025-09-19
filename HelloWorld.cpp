#include <iostream>
#include <cstring>
using namespace std;
int main() {
    //WORKING WITH C STRINGS IN C THERE IS NO BUILT IN DATA TYPES FOR STRING YOU HAVE TO CREATE AN ARRAY OF CHAR
    // with out \0 null terminating character it will be only array of char not the string
    char name[6]={'s','a','m','s','h','\0'};
    char name1[60]="shams";
    char lastname[]="12345678";
    cout<<name1<<endl;
    cout<<strlen(name1)<<endl;
    cout<<strcat(name1,lastname)<<endl;
    strcpy(name1,lastname);
    cout<<name1<<endl;
    strcmp(name1,lastname);
    if (strcmp(name1,lastname)==0) {
        cout<<"equal"<<endl;
    }


}