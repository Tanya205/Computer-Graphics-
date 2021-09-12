//DDA - Digital Differential Analyzer
#include <gl/glut.h>
#include <Windows.h>
#include<stdio.h>

//Function to draw a line using DDA Algorithm
void DDA() {
	glColor3f(0.0, 0.0, 1.0);
	glPointSize(5.0);
	int x1, y1, x2, y2; //starting and ending point 
	printf("Enter starting point x1, y1: ");
	scanf_s("%d %d", &x1, &y1);
	printf("Enter ending point x2, y2: ");
	scanf_s("%d %d", &x2, &y2);

	//Step 1 - Finding dx, dy and slope
	int dx = x2 - x1;
	int dy = y2 - y1;
	int slope = dy / dx;

	//Step 2 - Finding no. of points in b/w starting and ending coordinates
	int steps;
	if (abs(dx) > abs(dy)) {
		steps = abs(dx);
	}
	else {
		steps = abs(dy);
	}

	//Step 3 - Checking for the three cases of slope (slope > 1 or slope == 1 or slope < 1)
	int x_inc, y_inc; //increment in x and y
	if (slope < 1) {
		x_inc = 1;
		y_inc = slope;
	}
	else if (slope == 1) {
		x_inc = 1;
		y_inc = 1;
	}
	else if (slope > 1) {
		x_inc = 1 / slope;
		y_inc = 1;
	}
	else {
		return;
	}


	glBegin(GL_POINTS);
	for (int i = 1; i <= steps; i++) {
		glVertex2i(x1, y1);
		x1 = x1 + x_inc;
		y1 = y1 + y_inc;
	}
	glEnd();
	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("DDA Algorithm Implementation");

	glClearColor(0.0, 1.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0, 500, 0, 500);
	glMatrixMode(GL_PROJECTION);
	glViewport(0, 0, 500, 500);

	glutDisplayFunc(DDA);
	glutMainLoop();
	return 0;
}