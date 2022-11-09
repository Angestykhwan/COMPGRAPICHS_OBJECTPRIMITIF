#include <stdio.h>
#include <glut.h>

void jajargenjangbawah()
{
	glBegin(GL_QUADS);

	glColor3f(0, 0, 1);
	//titik koordinat	
	glVertex2d(-20, 50);
	glColor3f(0, 1, 0);
	glVertex2d(15, 50);

	glColor3f(1, 0, 0);
	glVertex2d(-5, 20);
	glColor3f(0, 1, 1);
	glVertex2d(-40, 20);

	glEnd();
	glFlush();
}
void jajargenjangatas()
{
	glBegin(GL_QUADS);
	//warna
	glColor3f(0, 0, 1);
	//titik koordinat	
	glVertex2d(0, 80);
	glColor3f(0, 1, 0);
	glVertex2d(-35, 80);
	glColor3f(1, 0, 0);
	glVertex2d(-20, 50);
	glColor3f(0, 1, 1);
	glVertex2d(15, 50);


	glEnd();
	glFlush();
}

void tugaslatihan2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	jajargenjangatas();
	jajargenjangbawah();
}