#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <GL\glut.h>

void lab1() {
	//���ñ���ɫ
	glClearColor(0.1, 0.1, 0.1, 1.0);//���ñ���ɫ��RGB�������ò�͸����Ϊ100%
	glClear(GL_COLOR_BUFFER_BIT);//ˢ����ɫ������
	//���ƾ���
	glColor3f(1, 0, 0);
	glRectf(0, 0, 1, 1);
	//����ֱ��
	glColor3f(0, 1, 0);
	glBegin(GL_LINES);
	glVertex2f(0, 0);
	glVertex2f(-1, -1);
	glEnd();
	//����������
	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, -0.1);
	glVertex2f(0.8, -0.9);
	glVertex2f(-0.8, -0.9);
	glEnd();
	glFlush();//����ˢ��������кͻ�������ʹ������δ��ִ�е�OpenGL����õ�ִ��
}

void lab2() {

}

int _main(int argc, char* argv[]) {
	glutInit(&argc, argv);//��ʼ��GLUT��
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//������ʾģʽ�����桢RGBģʽ
	glutInitWindowSize(500, 500);//���ô��ڴ�С
	glutInitWindowPosition(460, 100);//���ô������Ͻ�λ��
	glutCreateWindow("First Window");//�����䴰�ڲ�����
	glutDisplayFunc(lab1);//���ڻ��Ƶ�ǰ����
	glutMainLoop();//��ʾ��ʼ���г��򣬽����¼�
	return 0;
}