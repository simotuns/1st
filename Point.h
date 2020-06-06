#ifndef POINT_H
#define POINT_H
#include "Shape.h"
#include <ostream>

using namespace std;
class Point: public Shape
{
    public:
        Point();
        Point(double x, double y);
        virtual ~Point();
        float getx() const;
        float gety() const;
        void setx(double x);
        void sety(double y);
        void draw();
        void print();
        friend ostream& operator<<(ostream& os, const Point& p);

    private:
        double x;
        double y;
};

#endif // POINT_H
