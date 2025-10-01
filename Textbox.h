//
// Created by Shams Ullah on 10/1/2025.
//

#ifndef C___PRAC_TEXTBOX_H
#define C___PRAC_TEXTBOX_H
#include <string>
using namespace std;


class Textbox {
    public:
    Textbox()=default;

    explicit Textbox(const string& name);
    string getText();
    void setText(string name);
private:
    string name="shams";
};


#endif //C___PRAC_TEXTBOX_H