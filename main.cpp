#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <GL\glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex2d(-0.5, -0.5);
		glVertex2d(-0.5, 0.5);
		glVertex2d(0.5, 0.5);
		glVertex2d(0.5, -0.5);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("First Window");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}