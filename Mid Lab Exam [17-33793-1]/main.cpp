#include <windows.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin

	glTranslatef(0.0,0.0,1.0);
	glScalef(0.024,0.024,0);
	//glScalef(0.15,0.15,0);

	glBegin(GL_QUADS);
	glColor3ub(128, 149, 150);
	glVertex2f(-10.0f, 5.0f);
	glVertex2f(-10.0f, 20.0f);
	glVertex2f(15.0f, 20.0f);
	glVertex2f(15.0f, 5.0f);


	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(43, 45, 48);
	glVertex2f(-5.0f, 10.0f);
	glVertex2f(-5.0, 15.0f);
	glVertex2f(10.0f, 15.0f);
	glVertex2f(10.0f, 10.0f);

	glEnd();


glBegin(GL_QUADS);
	glColor3ub(42, 24, 201);
	glVertex2f(-15.0f, 0.0f);
	glVertex2f(-15.0, 5.0f);
	glVertex2f(-10.0f, 5.0f);
	glVertex2f(-10.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(235, 211, 28);
	glVertex2f(-15.0f, 5.0f);
	glVertex2f(-15.0, 10.0f);
	glVertex2f(-10.0f, 10.0f);
	glVertex2f(-10.0f, 5.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(122, 122, 114);
	glVertex2f(-15.0f, 10.0f);
	glVertex2f(-15.0, 15.0f);
	glVertex2f(-10.0f, 15.0f);
	glVertex2f(-10.0f, 10.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(42, 24, 201);
	glVertex2f(20.0f, 0.0f);
	glVertex2f(20.0, 5.0f);
	glVertex2f(15.0f, 5.0f);
	glVertex2f(15.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(235, 211, 28);
	glVertex2f(20.0f, 5.0f);
	glVertex2f(20.0, 10.0f);
	glVertex2f(15.0f, 10.0f);
	glVertex2f(15.0f, 5.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(122, 122, 114);
	glVertex2f(20.0f, 10.0f);
	glVertex2f(20.0, 15.0f);
	glVertex2f(15.0f, 15.0f);
	glVertex2f(15.0f, 10.0f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(171, 171, 63);
	glVertex2f(-5.0f, 20.0f);
	glVertex2f(-5.0f, 25.0f);
	glVertex2f(0.0f, 25.0f);
	glVertex2f(0.0f, 20.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(45, 86, 156);
	glVertex2f(-5.0f, 25.0f);
	glVertex2f(-5.0f, 40.0f);
	glVertex2f(0.0f, 40.0f);
	glVertex2f(0.0f, 25.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(227, 224, 50);
	glVertex2f(0.0f, 20.0f);
	glVertex2f(0.0f, 25.0f);
	glVertex2f(10.0f, 25.0f);
	glVertex2f(10.0f, 20.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(50, 147, 227);
	glVertex2f(0.0f, 25.0f);
	glVertex2f(0.0f, 35.0f);
	glVertex2f(5.0f, 35.0f);
	glVertex2f(5.0f, 25.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(50, 147, 227);
	glVertex2f(5.0f, 25.0f);
	glVertex2f(5.0f, 40.0f);
	glVertex2f(10.0f, 40.0f);
	glVertex2f(10.0f, 25.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(54, 115, 156);
	glVertex2f(-15.0f, 0.0f);
	glVertex2f(-15.0, -15.0f);
	glVertex2f(-10.0f, -15.0f);
	glVertex2f(-10.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(54, 115, 156);
	glVertex2f(20.0f, 0.0f);
	glVertex2f(20.0, -15.0f);
	glVertex2f(15.0f, -15.0f);
	glVertex2f(15.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(196, 182, 163);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-10.0, -5.0f);
	glVertex2f(-5.0f, -5.0f);
	glVertex2f(-5.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(227, 145, 39);
	glVertex2f(-10.0f, -5.0f);
	glVertex2f(-10.0, -25.0f);
	glVertex2f(-5.0f, -25.0f);
	glVertex2f(-5.0f, -5.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(105, 95, 83);
	glVertex2f(-10.0f, -25.0f);
	glVertex2f(-10.0, -30.0f);
	glVertex2f(-5.0f, -30.0f);
	glVertex2f(-5.0f, -25.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(227, 145, 39);
	glVertex2f(15.0f, -5.0f);
	glVertex2f(15.0, -25.0f);
	glVertex2f(10.0f, -25.0f);
	glVertex2f(10.0f, -5.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(105, 95, 83);
	glVertex2f(15.0f, -25.0f);
	glVertex2f(15.0, -30.0f);
	glVertex2f(10.0f, -30.0f);
	glVertex2f(10.0f, -25.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(213, 217, 13);       // black gray right down body
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-10.0, 5.0f);
	glVertex2f(15.0f, 5.0f);
	glVertex2f(15.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(20, 61, 184);
	glVertex2f(15.0f, 0.0f);
	glVertex2f(15.0, -5.0f);
	glVertex2f(10.0f, -5.0f);
	glVertex2f(10.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(20, 61, 184);
	glVertex2f(-5.0f, 0.0f);
	glVertex2f(-5.0, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, 0.0f);

	glEnd();


	glBegin(GL_QUADS);
    glColor3ub(149, 157, 184);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-5.0, -25.0f);
	glVertex2f(0.0f, -25.0f);
	glVertex2f(0.0f, -10.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(176, 189, 235);
	glVertex2f(-5.0f, -25.0f);
	glVertex2f(-5.0, -30.0f);
	glVertex2f(0.0f, -30.0f);
	glVertex2f(0.0f, -25.0f);

	glEnd();


	glBegin(GL_QUADS);
    glColor3ub(149, 157, 184);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0, -25.0f);
	glVertex2f(5.0f, -25.0f);
	glVertex2f(5.0f, -10.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(176, 189, 235);
	glVertex2f(10.0f, -25.0f);
	glVertex2f(10.0, -30.0f);
	glVertex2f(5.0f, -30.0f);
	glVertex2f(5.0f, -25.0f);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(94, 96, 99);         // blue right middle body
	glVertex2f(0.0f, -10.0f);
	glVertex2f(00.0, -15.0f);
	glVertex2f(5.0f, -15.0f);
	glVertex2f(5.0f, -10.0f);

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
