#include <iostream>
#include <unistd.h>
#include <math.h>
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Airplane.h"
#include "Robot.h"

#define PI 3.1415
void drawSinus()
{
    EngineGlut e;

    //x from (-400,+400)
    //y = 100*sin(x)
    for (float i=0; i<360; i+=1)
    {
	float x = 180-i;
	float y = 100*sin(i/180*PI);
	e.drawPoint(x, y);
    }
}

void drawLineAnimation()
{
    EngineGlut e;

    for (int i=-200; i<0; i+=10)
    {
	    e.drawClear();
	    e.drawLine(i,0,i+300,200);
	    usleep(500000);
    }
}

void testLine()
{
    Line line(0,30, 100, 30);
    line.draw();
    line.print();
}

void testZoomLine()
{
    Line line(0,0,100,0);
    line * 2;
    line.draw();
}

void testTriangle()
{
    Triangle triangle(0,0, -30, -30, -30, 30, true);
    triangle.draw();
    triangle.print();
}

void testZoomTriangle(){
    Triangle triangle(0,0, -30, -30, -30, 30, false);
    triangle * 2;
    triangle.draw();
}
void testPoint()
{
    Point point(100, 200);
    point.draw();
    point.print();
}

void testRectangle()
{
    Rectangle rectangle(0, 0, 50, 50, true);
    rectangle.draw();
    rectangle.print();
}

void testZoomRectangle()
{
    Rectangle rectangle(0, 0, 50, 50, false);
    rectangle * 2;
    rectangle.draw();
}

int main(int argc, char ** argv)
{
    initEngineGlut(argc, argv);
    //testTriangle();
    //testZoomTriangle();
    Robot robot;
    robot.draw();
    //Airplane air;
    //air.draw();

    std::cin.ignore();
}
