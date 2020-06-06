#include "GlutDrawing.h"
#include "GlutData.h"

#ifndef LINUX_PLATFORM
#ifndef MAC_PLATFORM
#include <windows.h>
#endif
#endif

#include <stdlib.h>

#ifdef MAC_PLATFORM
//use native GLUT and openGL from mac
#include <GLUT/glut.h>
#include <OpenGL/glu.h>
#else
#include <GL/freeglut.h>
#include <GL/glu.h>
#endif
#include <pthread.h>

void drawGlut()
{

	glClear(GL_COLOR_BUFFER_BIT); // Clear display window
	GLint r, g, b;
	GLint x1, y1, x2, y2;


	r = rand() % 2;
	g = rand() % 2;
	b = rand() % 2;
	glColor3f(1,1,1);

	glBegin(GL_POINTS);


	pthread_mutex_lock(&lock);
	std::list<__Point2D> pointList = GlutData::getInstance()->getPoints();
	pthread_mutex_unlock(&lock);

	std::list<__Point2D>::iterator itr;
	for(itr = pointList.begin(); itr != pointList.end(); itr++)
		glVertex2i(itr->X,itr->Y);


	glEnd();

	glBegin(GL_LINES);

	pthread_mutex_lock(&lock);
	pointList = GlutData::getInstance()->getLines();
	pthread_mutex_unlock(&lock);

	for(itr = pointList.begin(); itr != pointList.end(); itr++)
		glVertex2i(itr->X,itr->Y);


	glEnd();


	glBegin(GL_TRIANGLES);

	pthread_mutex_lock(&lock);
	pointList = GlutData::getInstance()->getTriangles();
	pthread_mutex_unlock(&lock);

	int i=0;
	for(itr = pointList.begin(); itr != pointList.end(); i++,itr++)
	{
	    if (i%3==0)
		glColor3f(itr->r,itr->g,itr->b);
	    glVertex2i(itr->X,itr->Y);
	}

	glEnd();
	glFlush();
	glutSwapBuffers();

}

void* startGluthThread(void *ptr)
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(WIN_MAX_X, WIN_MAX_Y);
	glutCreateWindow("PII C++");
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 800, 0.0, 600);
	glutDisplayFunc(drawGlut);
	glutIdleFunc(drawGlut);
	glutMainLoop();
	pthread_exit(NULL);
}
void initGlutDrawing(int argc, char**argv)
{
	glutInit(&argc, argv);
	pthread_t thread1;
	int iret1;
	iret1 = pthread_create( &thread1, NULL, startGluthThread, NULL);
}
