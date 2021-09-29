// Mid Point Line Drawing Algorithm
#include<stdio.h>
#include <gl/glut.h>
#include <Windows.h>

int x1, x2, y1, y2; //Declaring the starting and ending points 
void myInit()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 500, 0, 500);
}

void draw_pixel(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void DrawLine(int x1, int x2, int y1, int y2) {
	int dx, dy;
	//Step 1 - Calculating dx and dy
	dx = x2 - x1;
	dy = y2 - y1;
	//Step 2 - Calculating D_initial and dD
	int D_initial, dD;
	D_initial = 2 * dy - dx;
	dD = 2 * (dy - dx);
	//Step 3 - Finding next point with the help of D_initial
	int inc_x, inc_y, D_new;
	if (D_initial < 0) {
		inc_x = 1;
		inc_y = 0;
		D_new = D_initial + (2 * dD);
	}
	else if (D_initial >= 0) {
		inc_x = 1;
		inc_y = 1;
		D_new = D_initial + dD;
	}
	else {
		return;
	}
	//Step 4 - Looping until end point is reached
	for (int i = 1; i <= D_new; i++) {
		x1 = x1 + inc_x;
		y1 = y1 + inc_y;
		draw_pixel(x1, y1);
	}
}

void myDisplay()
{
	DrawLine(x1, x2, y1, y2);
	glFlush();
}

int main(int argc, char** argv)
{
	printf("Enter (x1, y1, x2, y2)\n");
	scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();

	return 0;
}

//x1 = 100, y1 = 100, x2 = 400, y2 = 400 