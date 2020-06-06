#include "Airplane.h"
#include "Triangle.h"
Airplane::Airplane()
{
    this->head = Triangle(0,0,-10,-20,10,-20,false);
    this->bd1 = Triangle(30, -20, 30, -40, -30, -20, false);
    this->bd2 = Triangle(-30, -20, -30, -40, 30, -40, false);
    this->bd = Rectangle(-10,-40,30,20,false);
    this->t1 = Triangle(-20,-70,20,-70,-20,-90,false);
    this->t2 = Triangle(20,-70,20,-90,-20,-90,false);
    this->pt1 = Point(20,-30);
    this->pt2 = Point(-20,-30);
}

void Airplane::draw(){
    this -> head.draw();
    this -> bd1.draw();
    this -> bd2.draw();
    this -> bd.draw();
    this -> t1.draw();
    this -> t2.draw();
    this -> pt1.draw();
    this -> pt2.draw();
}
