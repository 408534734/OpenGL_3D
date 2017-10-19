#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <GL\glut.h>

void myReashape(GLsizei w, GLsizei h){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,(GLdouble)w,0.0,(GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glViewport(0,0,w,h);
}

void mydisplay(){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(0.0,50.0,0.0,50.0,1.0,-1.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glViewport(125,125,250,250);
	GLfloat vertices[3][3] = {
		{0.0,0.0,0.0},
		{25.0,50.0,0.0},
		{50.0,0.0,0.0}
	};
	GLfloat p[3] = {7.5, 5.0, 0.0};
	int j,k;
	glBegin(GL_POINTS);
	srand(time(0));
	for(k = 0;k<5000;k++){
		j = rand()%3;
		p[0] = (p[0] + vertices[j][0])/2;
		p[1] = (p[1] + vertices[j][1])/2;
		glVertex3fv(p);
	}
	glEnd();
	glFlush();
}

void myMouse(int button, int state, int x, int y){
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		exit(0);
	}
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
//	glutInitWindowSize(500,500);
	glutCreateWindow("简单实例");
	glutReshapeFunc(myReashape);
	glutMouseFunc(myMouse);
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}