#include "Triangle.h"
#include "EngineGlut.h"
#include <iostream>
Triangle::Triangle()
{
    this -> a.setx(0);
    this -> a.sety(100);
    this -> b.setx(-50);
    this -> b.sety(0);
    this -> c.setx(50);
    this -> c.sety(0);
    this -> full = false;
}
Triangle::~Triangle(){}
Triangle::Triangle(double a, double b, double c, double d, double e, double f, bool full1){
    this -> a.setx(a);
    this -> a.sety(b);
    this -> b.setx(c);
    this -> b.sety(d);
    this -> c.setx(e);
    this -> c.sety(f);
    this -> full = full1;
}

Triangle Triangle::operator*(float n)
{
    this -> b.setx(this->b.getx() * n);
    this -> b.sety(this->b.gety() * n);
    this -> c.setx(this->c.getx() * n);
    this -> c.sety(this->c.gety() * n);
}


Triangle::Triangle(Point a, Point b, Point c, bool full1)
{ this -> a = a; this -> b = b; this -> c = c; this -> full = full1;}

void Triangle::draw(){
    if (this -> full)
    {this->e.drawSurface(this -> a.getx(), this -> a.gety(), this -> b.getx(), this -> b.gety(), this -> c.getx(), this -> c.gety());}

    else {
    this->e.drawLine(this -> a.getx(), this -> a.gety(), this -> b.getx(), this -> b.gety());
    this->e.drawLine(this -> a.getx(), this -> a.gety(), this -> c.getx(), this -> c.gety());
    this->e.drawLine(this -> b.getx(), this -> b.gety(), this -> c.getx(), this -> c.gety());
    }
}

void Triangle::print(){ std::cout << *this;}

ostream& operator<<(ostream& os, const Triangle &t)
{
    os << "The X coordinate of the point A: " << t.a.getx() << endl;
    os << "The Y coordinate of the point A: " << t.a.gety() << endl;
    os << "The X coordinate of the point B: " << t.b.getx() << endl;
    os << "The Y coordinate of the point B: " << t.b.gety() << endl;
    os << "The X coordinate of the point C: " << t.c.getx() << endl;
    os << "The Y coordinate of the point C: " << t.c.gety() << endl;
    return os;
}
