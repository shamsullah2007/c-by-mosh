//
// Created by Shams Ullah on 10/2/2025.
//

#ifndef C___PRAC_BANKACCOUNT_H
#define C___PRAC_BANKACCOUNT_H
#include <string>
#include <iostream>
using namespace std;

string getname();
void setname(string& username);
int getbalace();
void setbalance(int balance);
static string getbankname();
class Bankaccount {
    public:
    Bankaccount();
    private:
    string username;
    int balance;
    static string bankname;
};


#endif //C___PRAC_BANKACCOUNT_H