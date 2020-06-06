#include "Robot.h"

Robot::Robot()
{
    this -> nk = Line(0,0,0,5);
    this -> hd = Rectangle(-20, 45, 40, 40, false);
    this -> e1 = Point(-13, 30);
    this -> e2 = Point(13, 30);
    this -> nose = Triangle(0, 25, -4, 20, 4, 20, false);
    this -> mouth = Line(-13,12, 13,12);
    this -> bd = Rectangle(-25,0,100,50,false);
    this -> la = Line(-25,-5,-50,-70);
    this -> ra = Line(25,-5,50,-70);
    this -> ll = Line(-15,-100,-15,-150);
    this -> rl = Line(15,-100,15,-150);
}
Robot::~Robot(){}
void Robot::draw() {
    this -> hd.draw();
    this -> nk.draw();
    this -> e1.draw();
    this -> e2.draw();
    this -> nose.draw();
    this -> mouth.draw();
    this -> bd.draw();
    this -> la.draw();
    this -> ra.draw();
    this -> ll.draw();
    this -> rl.draw();
}
