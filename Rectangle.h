#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle: public Shape
{
    public:
        Rectangle();
        virtual ~Rectangle();
        Rectangle(Point a, double height, double width, bool full);
        Rectangle(double a, double b, double height, double width, bool full);
        Rectangle operator*(float n);
        void draw();
        void print();
        friend ostream& operator<<(ostream& os, const Rectangle& r);
    private:
        Point a,b,c,d;
        bool full;
};

#endif // RECTANGLE_H
