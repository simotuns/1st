#ifndef ROBOT_H
#define ROBOT_H
#include "Triangle.h"
#include "Rectangle.h"
#include "Line.h"
#include "Point.h"


class Robot
{
    public:
        Robot();
        virtual ~Robot();
        void draw();

    private:
        Triangle nose;
        Point e1, e2;
        Rectangle bd, hd;
        Line mouth, la, ra, ll, rl, nk;
};

#endif // ROBOT_H
