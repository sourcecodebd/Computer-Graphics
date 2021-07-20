//Copyright © Mahmud, Nafi (17-33793-1) - Assignment 2 [ Drawing a Watch using rotation function ]
#include <windows.h>
#include <GL/glut.h>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI   3.14159265358979323846

GLfloat i2 = 0.0f;  // for second
GLfloat i4 = 0.0f;  // for minute
GLfloat i5 = 0.0f;  // for hour

void Idle()
{
  glutPostRedisplay();              //// marks the current window as needing to be redisplayed
}

void display() {

    glClearColor(0.5f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin


int i;                              // Watch outside circle shape

    glScalef(0.038,0.038,0.0);
    GLfloat x1=0.0f; GLfloat y1=0.0f; GLfloat radius1 =24.5f;
	int triangleAmount = 100;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

glLineWidth(5);                   // Watch inside circle shape

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =23.0f;

	int lineAmount = 100;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i = 0; i<=lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

    glBegin(GL_LINES);            // Y axis
	glColor3ub(77, 210, 255); // Red
	glVertex2f(0.0f, 24.5f);
	glVertex2f(0.0f, 21.5f);
	glEnd();

	glBegin(GL_LINES);            // Y prime axis
	glColor3ub(77, 210, 255); // Red
	glVertex2f(0.0f, -24.5f);
	glVertex2f(0.0f, -21.5f);
	glEnd();

	glBegin(GL_LINES);            // X axis
	glColor3ub(77, 210, 255); // Red
	glVertex2f(24.5f, 0.0f);
	glVertex2f(21.5f, 0.0f);
	glEnd();

	glBegin(GL_LINES);            // X prime axis
	glColor3ub(77, 210, 255); // Red
	glVertex2f(-24.5f, 0.0f);
	glVertex2f(-21.5f, 0.0f);
	glEnd();

	glBegin(GL_LINES);            // 30 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(12.0f, 21.4f);
	glVertex2f(10.5f, 19.0f);
	glEnd();

	glBegin(GL_LINES);            // 60 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(19.0f, 10.4f);
	glVertex2f(21.4f, 12.0f);
	glEnd();

	glBegin(GL_LINES);            // 120 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(21.4f, -12.0f);
	glVertex2f(19.0f, -10.4f);
	glEnd();

	glBegin(GL_LINES);            // 150 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(12.0f, -21.4f);
	glVertex2f(10.5f, -19.0f);
	glEnd();

	glBegin(GL_LINES);            // 210 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(-12.0f, -21.4f);
	glVertex2f(-10.5f, -19.0f);
	glEnd();

	glBegin(GL_LINES);            // 240 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(-19.0f, -10.4f);
	glVertex2f(-21.4f, -12.0f);
	glEnd();

    glBegin(GL_LINES);            // 300 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(-21.4f, 12.0f);
	glVertex2f(-19.0f, 10.4f);
	glEnd();

	glBegin(GL_LINES);            // 330 degree
	glColor3ub(77, 210, 255); // Red
	glVertex2f(-12.0f, 21.4f);
	glVertex2f(-10.5f, 19.0f);
	glEnd();

int i3;                           // Watch middle point shape

    GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =1.5f;
	int triangleAmount1 = 50;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(x2, y2);
		for(i3 = 0; i3 <=triangleAmount1;i3++) {
			glVertex2f(
		            x2 + (radius2 * cos(i3 *  twicePi2 / triangleAmount1)),
			    y2 + (radius2 * sin(i3 * twicePi2 / triangleAmount1))
			);
		}
	glEnd();

	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i2,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);          // Second lower body
	glColor3ub(255, 255, 255); // Red
	glVertex2f(0.0f, 0.0f);
	glVertex2f(2.0f, 3.0f);
	glVertex2f(3.0f, 2.0f);
	glEnd();

	glBegin(GL_QUADS);              // Second upper body
	glColor3ub(255, 255, 255); // Red
    glVertex2f(2.0f, 3.0f);
	glVertex2f(15.0f, 14.0f);
	glVertex2f(15.3f, 14.0f);
	glVertex2f(3.0f, 2.0f);
	glEnd();

    glPopMatrix();
    i2+=-0.002f;
    glLoadIdentity();

    glScalef(0.038,0.038,0.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i4,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);          // Minute lower body
	glColor3ub(51, 204, 51); // Red
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-1.0f, 3.0f);
	glVertex2f(1.0f, 3.0f);
	glEnd();

	glBegin(GL_QUADS);              // Minute upper body
	glColor3ub(51, 204, 51); // Red
    glVertex2f(-1.0f, 3.0f);
	glVertex2f(0.2f, 22.0f);
	glVertex2f(0.5f, 18.0f);
	glVertex2f(1.0f, 3.0f);
	glEnd();

    glPopMatrix();
    i4+=-0.000033333f;
    glLoadIdentity();

    glScalef(0.038,0.038,0.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i5,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);          // Hour lower body
	glColor3ub(255, 0, 0); // Red
	glVertex2f(0.0f, 0.0f);
	glVertex2f(2.0f, 3.0f);
	glVertex2f(3.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);              // Hour upper body
	glColor3ub(255, 0, 0); // Red
    glVertex2f(2.0f, 3.0f);
	glVertex2f(11.0f, 6.0f);
	glVertex2f(11.3f, 6.0f);
	glVertex2f(3.0f, 1.0f);
	glEnd();

    glPopMatrix();
    i5+=-0.000000555f;
    glLoadIdentity();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();
	return 0;
}
