#include "Point.h"
#include "EngineGlut.h"
#include <iostream>
Point ::Point()
{
    this -> x = this ->y = 0;
}
Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}
Point::~Point() {}
float Point::getx()const
{
    return this -> x;
}
void Point::setx(double x)
{
    this -> x =x;
}
float Point::gety() const
{
    return this -> y;
}
void Point::sety(double y)
{
    this -> y = y;
}
void Point::draw()
{
    this ->e.drawPoint(int(this->x), int(this-> y));
}
void Point::print()
{
    std::cout << *this;
}
ostream& operator<<(ostream& os, const Point& p)
{
    os << "The X coordinate of the point: " << p.x << endl;
    os << "The Y coordinate of the point: " << p.y << endl;
    return os;
}
