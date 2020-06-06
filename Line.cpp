#include "Line.h"
#include "EngineGlut.h"
#include <iostream>

Line::Line()
{
    this -> x.setx(0);
    this -> x.sety(100);
    this -> y.setx(0);
    this -> y.sety(0);
}

Line::~Line()
{
    //dtor
}

Line::Line(double a, double b, double c, double d)
{
    this -> x.setx(a);
    this -> x.sety(b);
    this -> y.setx(c);
    this -> y.sety(d);

}

Line Line::operator*(float n)
{
    this -> y.setx(this->y.getx() * n);
    this -> y.sety(this->y.gety() * n);
}
Line::Line(Point x, Point y)
{
    this -> x = x;
    this -> y = y;
}

void Line::draw(){
    this->e.drawLine(this -> x.getx(), this -> x.gety(), this -> y.getx(), this -> y.gety());
}

void Line::print(){
    std::cout << *this;
}

ostream& operator<<(ostream& os, const Line &l)
{
    os << "The X coordinate of the point A: " << l.x.getx() << endl;
    os << "The Y coordinate of the point A: " << l.x.gety() << endl;
    os << "The X coordinate of the point B: " << l.y.getx() << endl;
    os << "The Y coordinate of the point B: " << l.y.gety() << endl;
    return os;
}
