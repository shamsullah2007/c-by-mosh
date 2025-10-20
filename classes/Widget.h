//
// Created by Shams Ullah on 10/20/2025.
//

#ifndef C___PRAC_WIDGET_H
#define C___PRAC_WIDGET_H


class Widget {
    protected:
    bool enabled;
    public:
    ~Widget();
    // void enable();
    // void disable();
    void setEnabled(bool enabled) ;
    bool isEnabled();
};


#endif //C___PRAC_WIDGET_H