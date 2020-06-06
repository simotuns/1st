#ifndef SHAPE_H
#define SHAPE_H
#include "EngineGlut.h"

class Shape
{
    public:
        Shape();
        virtual ~Shape();
        virtual void draw();
        virtual void print();

    protected:
        EngineGlut e;

    private:
};

#endif // SHAPE_H
