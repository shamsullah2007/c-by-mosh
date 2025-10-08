//
// Created by Shams Ullah on 10/8/2025.
//

#ifndef C___PRAC_POINT_H
#define C___PRAC_POINT_H


class Point {
    private:
    int x, y;
    public:
    Point(int x, int y);
    bool operator==(const Point &other) const;
    bool operator==(int other) const;
    bool operator!=(const Point &other) const;
};


#endif //C___PRAC_POINT_H