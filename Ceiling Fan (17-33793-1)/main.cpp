//Copyright © Mahmud, Nafi (17-33793-1) - Assignment 1 [ Drawing a Ceiling Fan using keyboard & rotation function ]
#include<cstdio>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
#include <iostream>
# define PI   3.14159265358979323846

using namespace std;

static GLfloat i = 0.0f;


void CeilingFan(void){

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

/*
glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(-0.5f, 0.0f);
glVertex2f(-0.5f, 40.0f);   //Fan back body
glVertex2f(0.5f, 40.0f);
glVertex2f(0.5f, 0.0f);
glEnd();
*/

glLineWidth(5.0);

glPushMatrix();

glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(-4.0f, 8.0f);
glVertex2f(-8.0f, 5.0f);   //Fan body 1
glVertex2f(-25.0f, 22.0f);
glVertex2f(-23.0f, 28.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(-5.9f, 5.5f);
glVertex2f(-6.5f, 7.0f);  //Fan body connector 1
glVertex2f(-5.9f, 7.5f);
glVertex2f(-4.5f, 6.9f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(4.0f, 8.0f);
glVertex2f(8.0f, 5.0f);    //Fan body 2
glVertex2f(25.0f, 22.0f);
glVertex2f(23.0f, 28.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(5.9f, 5.5f);
glVertex2f(6.5f, 7.0f);  //Fan body connector 1
glVertex2f(5.9f, 7.5f);
glVertex2f(4.5f, 6.9f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(-2.5f, -9.0f); //Fan body 3
glVertex2f(2.5f, -9.0f);
glVertex2f(2.5f, -33.0f);
glVertex2f(-2.5f, -36.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(39, 196, 204);
glVertex2f(-0.5f, -9.0f); //Fan body connector 3
glVertex2f(0.5f, -9.0f);
glVertex2f(1.0f, -8.0f);
glVertex2f(-1.0f, -8.0f);
glEnd();


glLineWidth(5.0);                   // Fan outside circle shape

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =8.0f;

	int lineAmount = 100;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 0, 0);
		for(i = 0; i<=lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


	int i3;                           // Fan inside circle shape

    GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =6.0f;
	int triangleAmount1 = 50;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(21, 11, 107);
		glVertex2f(x2, y2);
		for(i3 = 0; i3 <=triangleAmount1;i3++) {
			glVertex2f(
		            x2 + (radius2 * cos(i3 *  twicePi2 / triangleAmount1)),
			    y2 + (radius2 * sin(i3 * twicePi2 / triangleAmount1))
			);
		}
	glEnd();

glScalef(0.29,0.29,0);

	glBegin(GL_LINES);            // Y axis
	glColor3ub(107, 20, 20); // Red
	glVertex2f(0.0f, 24.5f);
	glVertex2f(0.0f, 21.5f);
	glEnd();

	glBegin(GL_LINES);            // Y prime axis
	glColor3ub(107, 20, 20); // Red
	glVertex2f(0.0f, -24.5f);
	glVertex2f(0.0f, -21.5f);
	glEnd();

	glBegin(GL_LINES);            // X axis
	glColor3ub(107, 20, 20); // Red
	glVertex2f(24.5f, 0.0f);
	glVertex2f(21.5f, 0.0f);
	glEnd();

	glBegin(GL_LINES);            // X prime axis
	glColor3ub(107, 20, 20); // Red
	glVertex2f(-24.5f, 0.0f);
	glVertex2f(-21.5f, 0.0f);
	glEnd();

	glBegin(GL_LINES);            // 30 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(12.0f, 21.4f);
	glVertex2f(10.5f, 19.0f);
	glEnd();

	glBegin(GL_LINES);            // 60 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(19.0f, 10.4f);
	glVertex2f(21.4f, 12.0f);
	glEnd();

	glBegin(GL_LINES);            // 120 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(21.4f, -12.0f);
	glVertex2f(19.0f, -10.4f);
	glEnd();

	glBegin(GL_LINES);            // 150 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(12.0f, -21.4f);
	glVertex2f(10.5f, -19.0f);
	glEnd();

	glBegin(GL_LINES);            // 210 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(-12.0f, -21.4f);
	glVertex2f(-10.5f, -19.0f);
	glEnd();

	glBegin(GL_LINES);            // 240 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(-19.0f, -10.4f);
	glVertex2f(-21.4f, -12.0f);
	glEnd();

    glBegin(GL_LINES);            // 300 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(-21.4f, 12.0f);
	glVertex2f(-19.0f, 10.4f);
	glEnd();

	glBegin(GL_LINES);            // 330 degree
	glColor3ub(107, 20, 20); // Red
	glVertex2f(-12.0f, 21.4f);
	glVertex2f(-10.5f, 19.0f);
	glEnd();


    glPopMatrix();

glFlush();

}

void init(void)
{

	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

void loop_right(void)
{
            i = -0.69f;
            glutPostRedisplay();
            glRotatef(i,0.0,0.0,1.0);
}

void loop_left(void)
{
            i = 0.69f;
            glutPostRedisplay();
            glRotatef(i,0.0,0.0,1.0);
}

void loop_increase(void)
{
            i = -1.0f;
            glutPostRedisplay();
            glRotatef(i,0.0,0.0,1.0);
}

void loop_decrease(void)
{
            i = -0.2f;
            glutPostRedisplay();
            glRotatef(i,0.0,0.0,1.0);
}

void loop_stop(void)
{
            i = 0.0f;
            glutPostRedisplay();
            glRotatef(i,0.0,0.0,1.0);
}

void handleKeypress1(unsigned char key, int x, int y)
{

	switch (key) {

		case 'c':glutIdleFunc(loop_right);
        break;

        case 'v':glutIdleFunc(loop_left);
        break;

        case 'i':glutIdleFunc(loop_increase);
        break;

        case 'd':glutIdleFunc(loop_decrease);
        break;

        case 's':glutIdleFunc(loop_stop);
        break;

	  default:
			break;
	}
}


int main(int argc, char** argv) {

    cout << endl << "*********** Ceiling Fan ********************" << endl << endl;
    cout << "Press c : To On Ceiling Fan" << endl << endl;
    cout << "Press v : To run in left (reverse) " << endl << endl;
    cout << "Press s : To Stop Ceiling Fan" << endl << endl;

    cout << "Press i : To increase the speed of Ceiling Fan" << endl << endl;
    cout << "Press d : To decrease the speed of Ceiling Fan" << endl << endl;

    cout << "          COMPUTER GRAPHICS [E]           " << endl ;
    cout << "  Assignment 1 Submission [ Summer 2020-2021 ]" << endl << endl;
    cout << "Submitted By : Mahmud, Nafi" << endl ;

	glutInit(&argc, argv);
	glutCreateWindow("Ceiling Fan");
	init();
	glutInitWindowSize(320, 320);
	glutDisplayFunc(CeilingFan);
	glutKeyboardFunc(handleKeypress1);
	glutMainLoop();
	return 0;
}
