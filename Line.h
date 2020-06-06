#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include "Shape.h"
#include <ostream>

class Line: public Shape
{
    public:
        Line();
        Line(Point x, Point y);
        Line(double a, double b, double c, double d);
        Line operator*(float n);
        virtual ~Line();
        void draw();
        void print();
        friend ostream& operator<<(ostream& os, const Line& l);

    private:
        Point x;
        Point y;
};

#endif // LINE_H
