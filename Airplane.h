#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "Triangle.h"
#include "Point.h"
#include "Rectangle.h"

class Airplane
{
    public:
        Airplane();
        void draw();

    private:
        Triangle head, bd1, bd2, t1, t2;
        Point pt1, pt2;
        Rectangle bd;
};

#endif // AIRPLANE_H
