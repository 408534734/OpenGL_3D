#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <GL\glut.h>

void lab1() {
	//设置背景色
	glClearColor(0.1, 0.1, 0.1, 1.0);//设置背景色的RGB并且设置不透明度为100%
	glClear(GL_COLOR_BUFFER_BIT);//刷新颜色缓冲区
	//绘制矩形
	glColor3f(1, 0, 0);
	glRectf(0, 0, 1, 1);
	//绘制直线
	glColor3f(0, 1, 0);
	glBegin(GL_LINES);
	glVertex2f(0, 0);
	glVertex2f(-1, -1);
	glEnd();
	//绘制三角形
	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0, -0.1);
	glVertex2f(0.8, -0.9);
	glVertex2f(-0.8, -0.9);
	glEnd();
	glFlush();//用于刷新命令队列和缓存区，使所有尚未被执行的OpenGL命令得到执行
}

void lab2() {

}

int _main(int argc, char* argv[]) {
	glutInit(&argc, argv);//初始化GLUT库
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//设置显示模式：缓存、RGB模式
	glutInitWindowSize(500, 500);//设置窗口大小
	glutInitWindowPosition(460, 100);//设置窗口左上角位置
	glutCreateWindow("First Window");//创建间窗口并命名
	glutDisplayFunc(lab1);//用于绘制当前窗口
	glutMainLoop();//表示开始运行程序，进入事件
	return 0;
}