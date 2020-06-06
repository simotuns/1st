#include "Rectangle.h"
#include "EngineGlut.h"
#include <iostream>
Rectangle::Rectangle()
{
    this -> a.setx(100);
    this -> a.sety(100);
    this -> b.setx(-100);
    this -> b.sety(100);
    this -> c.setx(50);
    this -> c.sety(30);
    this -> d.setx(-30);
    this -> d.sety(50);
    this -> full = false;
}

Rectangle::~Rectangle()
{
    //dtor
}

Rectangle::Rectangle(Point a, double height, double width, bool full)
{
    this -> a = a;
    this -> b.setx(a.getx()+width);
    this -> b.sety(a.gety());
    this -> c.setx(a.getx());
    this -> c.sety(a.gety() - height);
    this -> d.setx(this -> b.getx());
    this -> d.sety(this -> b.gety() - height);
    this ->full = full;
}

Rectangle::Rectangle(double x, double y, double height, double width, bool full)
{
    this -> a.setx(x);
    this -> a.sety(y);
    this -> b.setx(x+width);
    this -> b.sety(y);
    this -> c.setx(x);
    this -> c.sety(y - height);
    this -> d.setx(this -> b.getx());
    this -> d.sety(this -> b.gety() - height);
    this ->full = full;
    this -> full = full;
}

Rectangle Rectangle::operator*(float n)
{
    this -> b.setx(this->b.getx() * n);
    this -> b.sety(this->b.gety() * n);
    this -> c.setx(this->c.getx() * n);
    this -> c.sety(this->c.gety() * n);
    this -> d.setx(this->d.getx() * n);
    this -> d.sety(this->d.gety() * n);
}

void Rectangle::draw()
{
    if (this -> full)
    {
        this->e.drawSurface(this -> a.getx(), this -> a.gety(), this -> b.getx(), this -> b.gety(), this -> c.getx(), this -> c.gety());
        this->e.drawSurface(this -> d.getx(), this -> d.gety(), this -> b.getx(), this -> b.gety(), this -> c.getx(), this -> c.gety());
    }

    else
    {
        this->e.drawLine(this -> a.getx(), this -> a.gety(), this -> b.getx(), this -> b.gety());
        this->e.drawLine(this -> b.getx(), this -> b.gety(), this -> d.getx(), this -> d.gety());
        this->e.drawLine(this -> d.getx(), this -> d.gety(), this -> c.getx(), this -> c.gety());
        this->e.drawLine(this -> c.getx(), this -> c.gety(), this -> a.getx(), this -> a.gety());

    }
}

void Rectangle::print()
{
    std::cout << *this;
}

ostream& operator<<(ostream& os, const Rectangle &r)
{
    os << "The X coordinate of the point A: " << r.a.getx() << endl;
    os << "The Y coordinate of the point A: " << r.a.gety() << endl;
    os << "The X coordinate of the point B: " << r.b.getx() << endl;
    os << "The Y coordinate of the point B: " << r.b.gety() << endl;
    os << "The X coordinate of the point C: " << r.c.getx() << endl;
    os << "The Y coordinate of the point C: " << r.c.gety() << endl;
    os << "The X coordinate of the point D: " << r.d.getx() << endl;
    os << "The Y coordinate of the point D: " << r.d.gety() << endl;
    return os;
}
