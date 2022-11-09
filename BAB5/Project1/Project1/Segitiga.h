#include <stdio.h>
#include <glut.h>

void Segitiga()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	//glColor3f(0.0, 1.1, 0.0); warna
	glVertex2d(100, 80);
	//glColor3f(1.0, 0.0, 0.0); bayangan
	glVertex2d(60, 100);
	//glColor3f(0.0, 0.0, 255); gradasi
	glVertex2d(40, 40);
	glEnd();
	glFlush();
}
