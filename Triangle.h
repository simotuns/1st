#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"
#include "Shape.h"

class Triangle: public Shape
{
    public:
        Triangle();
        Triangle(Point a, Point b, Point c, bool full1);
        Triangle(double a, double b, double c, double d, double e, double f, bool full1);
        virtual ~Triangle();
        Triangle operator*(float n);
        void draw();
        void print();
        friend ostream& operator<<(ostream& os, const Triangle& t);

    private:
        Point a;
        Point b;
        Point c;
        bool full;
};

#endif // TRIANGLE_H
