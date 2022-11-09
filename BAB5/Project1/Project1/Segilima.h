#include <stdio.h>
#include <glut.h>

void segilima()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.1, 0.0);
	glVertex2d(-80, 80);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(-40, 80);
	glVertex2d(-20, 120);
	glVertex2d(-60, 140);
	glVertex2d(-100, 120);
	glEnd();
	glFlush();
}
