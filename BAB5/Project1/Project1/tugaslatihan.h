#include <stdio.h>
#include <glut.h>

void tugaslatihan()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_STRIP);
	//warna 
	glColor3f(1, 0, 0);
	//atas dari kiri ke kanan
	glVertex2d(-50, 80);
	glVertex2d(0, 80);
	//tengah
	glColor3f(0, 1, 0);
	glVertex2d(10, 50);
	glVertex2d(-60, 50);
	//balik atas
	glColor3f(1, 1, 0);
	glVertex2d(-50, 80);
	//ke bawah
	glColor3f(0, 0, 1);
	glVertex2d(-50, 80);
	glVertex2d(0, 20);
	glColor3f(1, 0, 1);
	glVertex2d(-50, 20);
	//ke tengah
	glColor3f(0, 1, 0);
	glVertex2d(-60, 50);
	//balik atas tengah
	glColor3f(0, 0, 1);
	glVertex2d(0, 80);
	//balik bawah
	glColor3f(1, 1, 1);
	glVertex2d(0, 20);
	glVertex2d(10, 50);
	glVertex2d(-50, 80);


	// titik koordinat
	glEnd();
	glFlush();
}