#include<cstdio>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI   3.14159265358979323846
//Day View is at 3040 no. line
//Night View is at 1930 no. line
//Day(Rain) View is at 125 no. line

GLfloat i2 = 0.0f;

GLfloat i5 = 0.0f;  // for second2
GLfloat i6 = 0.0f;  // for minute4
GLfloat i7 = 0.0f;  // for hour5

GLfloat position1 = 0.0f; //ship
GLfloat speed1 = 0.005f;

GLfloat position2 = 0.0f; //cloud
GLfloat speed2 = 0.001f;

GLfloat position3 = 0.0f; //car
GLfloat speed3 = 0.002f;

GLfloat position4 = 0.0f; //rain
GLfloat speed4 = 0.09f;

GLint i;
void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2d(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}

void update1(int value) {

   if(position1 <-2.8)
        position1 = 2.2f;        //left movement of ship
        position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(5, update1, 0);

}

void update2(int value) {

   if(position2 >2.2)             //right movement of cloud
        position2 = -1.3f;
        position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(5, update2, 0);

}


void update3(int value) {

   if(position3 >1.2)             //right movement of car
        position3 = -0.2f;
        position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(5, update3, 0);

}

void update4(int value) {

   if(position4 >1.5)             //right movement of rain
        position4 = -0.5f;
        position4 += speed4;

	glutPostRedisplay();


	glutTimerFunc(5, update4, 0);

}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed1 += 0.005f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed1 -= 0.005f;
			}
	glutPostRedisplay();}


void handleKeypress1(unsigned char key, int x, int y) {
	switch (key) {
case 'r':
    speed2 = 0.0f;
    break;
case 't':
    speed2 = 0.1f;
    break;
glutPostRedisplay();
	}
}





void displayDayRain() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin


int i; // Sun

GLfloat x1=0.9f; GLfloat y1=0.9f; GLfloat radius1 =0.05f;
	int triangleAmount = 100;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 59);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

glLoadIdentity();


glPushMatrix();                        //to move cloud
glTranslatef(position2,0,0);


glTranslatef(0.0,0.5,0);               //cloud
glScalef(0.03,0.03,0);
glColor3ub(255, 255, 255);
 //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();


	glTranslatef(-20.0,-15.0,0);           // Cloud
    glScalef(10.0,10.0,0);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(-2.0f, 2.5f);
	glVertex2f(-1.8f, 2.7f);
	glVertex2f(-1.7f, 2.9f);
	glVertex2f(-1.4f, 3.0f);
	glVertex2f(-1.2f, 2.7f);
	glVertex2f(-1.0f, 3.0f);
	glVertex2f(-0.8, 2.9f);
	glVertex2f(-0.6, 2.7f);
	glVertex2f(-0.5, 2.5f);
	glEnd();

	glPopMatrix();

	glLoadIdentity();


glBegin(GL_QUADS);                      // Sea Water
	glColor3ub(69, 84, 255); // Red
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();


glPushMatrix();                        //to move car
glTranslatef(position3,0,0);

	glTranslatef(0.2,0.059,0.0);
	glScalef(0.3,0.3,0);        //Car
	glColor3ub(255, 0, 0);   //Car back body
    glBegin(GL_POLYGON);
    glVertex3f(-0.52, 0.2, 0);
    glVertex3f(-0.9, 0.2, 0);
    glVertex3f(-0.9, 0.4, 0);
    glVertex3f(-0.52, 0.4, 0);
    glEnd();

    glColor3ub(255, 0, 0);   //Car front body
    glBegin(GL_POLYGON);
    glVertex3f(-0.43, 0.2, 0);
    glVertex3f(-0.52, 0.2, 0);
    glVertex3f(-0.52, 0.4, 0);
    glVertex3f(-0.46, 0.35, 0);
    glEnd();

    glColor3ub(102, 153, 153);  //Car glass
    glBegin(GL_POLYGON);
    glVertex3f(-0.53, 0.4, 0);
    glVertex3f(-0.83, 0.4, 0);
    glVertex3f(-0.77, 0.5, 0);
    glVertex3f(-0.60, 0.5, 0);
    glEnd();

    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.65, 0.2, 0);
    glVertex3f(-0.65, 0.4, 0);
    glEnd();


    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.75, 0.2, 0);
    glVertex3f(-0.75, 0.4, 0);
    glEnd();


    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.55, 0.2, 0);
    glVertex3f(-0.55, 0.4, 0);
    glEnd();


    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.6, 0.4, 0);
    glVertex3f(-0.62, 0.4, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.7, 0.4, 0);
    glVertex3f(-0.72, 0.4, 0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.06);
    glPopMatrix();

    glColor3ub(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.06);
    glPopMatrix();

    glColor3ub(204, 51, 255);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.02);
    glPopMatrix();

    glColor3ub(204, 51, 255);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.02);
    glPopMatrix();

    glPopMatrix();
    glLoadIdentity();


glTranslatef(0.1f, 0.0f, 0.0f); //Translate x right and y up
glScalef(1.05,1.05,0);
glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.7f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.7f, 0.8f);
	glEnd();

glBegin(GL_QUADS);              // Building
	glColor3ub(234, 245, 225); // Red
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.38f, 0.3f);
	glVertex2f(-0.38f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.60f, 0.3f);
	glVertex2f(-0.60f, 0.2f);
	glVertex2f(-0.52f, 0.2f);
	glVertex2f(-0.52f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.38f, 0.5f);
	glVertex2f(-0.38f, 0.4f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.3f, 0.5f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.60f, 0.5f);
	glVertex2f(-0.60f, 0.4f);
	glVertex2f(-0.52f, 0.4f);
	glVertex2f(-0.52f, 0.5f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.38f, 0.7f);
	glVertex2f(-0.38f, 0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.3f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.60f, 0.7f);
	glVertex2f(-0.60f, 0.6f);
	glVertex2f(-0.52f, 0.6f);
	glVertex2f(-0.52f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Building Door
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.49f, 0.2f);
	glVertex2f(-0.49f, 0.0f);
	glVertex2f(-0.41f, 0.0f);
	glVertex2f(-0.41f, 0.2f);
	glEnd();
glLoadIdentity();

glTranslatef(0.1f, 0.0f, 0.0f); //Translate x right and y up
glBegin(GL_QUADS);              // Watch Tower
	glColor3ub(191, 171, 54); // Red
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-0.8f, 0.1f);
	glVertex2f(-0.8f, 0.9f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Door
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.87f, 0.2f);
	glVertex2f(-0.87f, 0.1f);
	glVertex2f(-0.83f, 0.1f);
	glVertex2f(-0.83f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Upper Part
	glColor3ub(191, 171, 54); // Red
	glVertex2f(-0.95f, 0.99f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.99f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Upper Part Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.9f, 0.95f);
	glVertex2f(-0.9f, 0.85f);
	glVertex2f(-0.8f, 0.85f);
	glVertex2f(-0.8f, 0.95f);
	glEnd();
glLoadIdentity();

glTranslatef(-0.53,0.20,0);      //tree_cloud
glScalef(0.01,0.03,0);
glColor3ub(46, 191, 111);
 //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

    glLoadIdentity();

    glTranslatef(-0.60,0.3,0);
    glScalef(0.01,0.01,0);
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(0,0,0);
    glVertex3f(2.5,2,0);
    glVertex3f(4.0,-2,0);
    glVertex3f(1,-4,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,2,0);
    glVertex3f(9,2,0);
    glVertex3f(8,-2,0);
    glVertex3f(4,-2,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1,-4,0);
    glVertex3f(4,-2,0);
    glVertex3f(8,-2,0);
    glVertex3f(7,-7,0);
    glVertex3f(1.5,-7,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-7,0);
    glVertex3f(7,-7,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(2,-10,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(2,-10,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(1.5,-13,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-13,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(7,-18,0);
    glVertex3f(.5,-18,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(7,-18,0);
    glVertex3f(3,-27,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(2.5,-23,0);
    glVertex3f(-1,-25,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,-18,0);
    glVertex3f(8,-28,0);
    glVertex3f(4,-22,0);
    glEnd();

    glLoadIdentity();


glBegin(GL_QUADS);              // Container Crane Vertical Back Body
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.9f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Vertical Front Body
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.1f, 0.9f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.13f, 0.0f);
	glVertex2f(0.13f, 0.9f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 1
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.1f, 0.7f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 2
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.6f);
	glVertex2f(0.1f, 0.6f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 3
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 4
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.1f, 0.4f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 5
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.1f, 0.3f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 6
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.85f);
	glVertex2f(0.1f, 0.3f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 7
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.1f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Lifting Liver
	glColor3ub(11, 135, 106); // Red
	glVertex2f(-0.03f, 0.85f);
	glVertex2f(-0.03f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, 0.85f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Lifting Trolley
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.52f, 0.8f);
	glVertex2f(0.52f, 0.77f);
	glVertex2f(0.57f, 0.77f);
	glVertex2f(0.57f, 0.8f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 1st part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(-0.03f, 0.85f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 2nd part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.55f, 0.85f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 3rd part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.55f, 0.77f);
	glVertex2f(0.55f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Pulled Container
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.52f, 0.3f);
	glVertex2f(0.52f, 0.2f);
	glVertex2f(0.58f, 0.2f);
	glVertex2f(0.58f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 1
	glColor3ub(19, 245, 2); // Red
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.38f, 0.1f);
	glVertex2f(0.44f, 0.1f);
	glVertex2f(0.44f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 2
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.38f, 0.1f);
	glVertex2f(0.38f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 3
	glColor3ub(245, 245, 2); // Red
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.26f, 0.1f);
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.32f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 4
	glColor3ub(245, 2, 18); // Red
	glVertex2f(0.20f, 0.2f);
	glVertex2f(0.20f, 0.1f);
	glVertex2f(0.26f, 0.1f);
	glVertex2f(0.26f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 5
	glColor3ub(245, 2, 18); // Red
	glVertex2f(0.38f, 0.3f);
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.44f, 0.2f);
	glVertex2f(0.44f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 6
	glColor3ub(245, 245, 2); // Red
	glVertex2f(0.32f, 0.3f);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.38f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 7
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.26f, 0.3f);
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.32f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 8
	glColor3ub(19, 245, 2); // Red
	glVertex2f(0.20f, 0.3f);
	glVertex2f(0.20f, 0.2f);
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.26f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Port Area
	glColor3ub(194, 209, 119); // Red
	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-1.08f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.1f);
	glEnd();

glBegin(GL_QUADS);              // Port Lower Side
	glColor3ub(15, 15, 15); // Red
	glVertex2f(-0.99f, 0.05f);
	glVertex2f(-0.99f, -0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.05f);
	glEnd();


	glLineWidth(2.3);

/*
GLfloat x=0.5f; GLfloat y=0.0f; GLfloat radius =.2f;
	int i;
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
	glEnd();*/

	//

    glTranslatef(0.69f, 0.1f, 0.0f);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(51, 204, 51); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.7f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.71,0.8,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i2,0.0,0.0,1.0);

 /* glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.05f);
    glVertex2f( 0.1f, 0.05f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.1f);
    glVertex2f( -0.05f, 0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.05f);
    glVertex2f( -0.1f, -0.05f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.05f, -0.1f);
    glVertex2f( 0.05f, -0.1f);
    glEnd(); */

    //Alternative:

    glScalef(0.5,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();

    glPopMatrix();
    i2+=-0.69f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    /* Watch */

    glTranslatef(0.289f, 0.1f, 0.0f);   // Watch Vertical Back Body
	glBegin(GL_QUADS);
	glColor3ub(1,1,1); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

glLoadIdentity();
glLineWidth(2.5);

glTranslatef(0.3,0.6,1.0);
glScalef(0.0038,0.0038,1.0);


int i3;                              // Watch outside circle shape


    GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =24.5f;
	int triangleAmount1 = 100;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2);
		for(i3 = 0; i3 <=triangleAmount1;i3++) {
			glVertex2f(
		            x2 + (radius2 * cos(i3 *  twicePi2 / triangleAmount1)),
			    y2 + (radius2 * sin(i3 * twicePi2 / triangleAmount1))
			);
		}
	glEnd();

	GLfloat x3=0.0f; GLfloat y3=0.0f; GLfloat radius3 =23.0f;

	int lineAmount1 = 100;

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i3 = 0; i3<=lineAmount1;i3++) {
			glVertex2f(
			    x3 + (radius3 * cos(i3 *  twicePi3 / lineAmount1)),
			    y3 + (radius3 * sin(i3 * twicePi3 / lineAmount1))
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

	int i4;                           // Watch middle point shape

    GLfloat x4=0.0f; GLfloat y4=0.0f; GLfloat radius4 =1.5f;
	int triangleAmount2 = 50;

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(x2, y2);
		for(i4 = 0; i4 <=triangleAmount2;i4++) {
			glVertex2f(
		            x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount2)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount2))
			);
		}
	glEnd();

	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i5,0.0,0.0,1.0);


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
    i5+=-0.002f;
    glLoadIdentity();

    glTranslatef(0.3,0.6,1.0);
    glScalef(0.0038,0.0038,1.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i6,0.0,0.0,1.0);

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
    i6+=-0.000033333f;
    glLoadIdentity();

    glTranslatef(0.3,0.6,1.0);
    glScalef(0.0038,0.0038,1.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i7,0.0,0.0,1.0);

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
    i7+=-0.000000555f;
    glLoadIdentity();


    glPushMatrix();                        //to move ship
glTranslatef(position1,0,0);

glTranslatef(-0.1f, 0.6f, 0.0f); //Translate x right and y up
glScalef(2.5,3.0,0);
glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(0.1f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.3f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.3f, -0.3f);    // x, y
	glVertex2f(-0.2f, -0.5f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, -0.5f);    // x, y
	glVertex2f(0.7f, -0.5f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.5f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.65f, -0.1f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(245, 239, 233); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(24, 219, 73); // Red
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, -0.1f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(247, 5, 5); // Red
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(255, 135, 15); // Red
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.7f, -0.2f);
	glEnd();

glBegin(GL_QUADS);              // Ship Lower Side
	glColor3ub(245, 239, 233); // Red
	glVertex2f(-0.3f, -0.3f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.3f);
    glEnd();


glPopMatrix();  //to move ship


glLoadIdentity();

glLineWidth(1.0);

glTranslatef(-position4,-position4,0);
glScalef(0.038,0.038,0);
glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(5.0f, 10.0f);
	glVertex2f(5.0f, 12.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(7.0f, 10.0f);
	glVertex2f(7.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(9.0f, 10.0f);
	glVertex2f(9.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(11.0f, 10.0f);
	glVertex2f(11.0f, 12.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(13.0f, 10.0f);
	glVertex2f(13.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(15.0f, 10.0f);
	glVertex2f(15.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(17.0f, 10.0f);
	glVertex2f(17.0f, 12.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(19.0f, 10.0f);
	glVertex2f(19.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(21.0f, 10.0f);
	glVertex2f(21.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(23.0f, 10.0f);
	glVertex2f(23.0f, 12.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(25.0f, 10.0f);
	glVertex2f(25.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(27.0f, 10.0f);
	glVertex2f(27.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(29.0f, 10.0f);
	glVertex2f(29.0f, 12.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(31.0f, 10.0f);
	glVertex2f(31.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(33.0f, 10.0f);
	glVertex2f(33.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(35.0f, 10.0f);
	glVertex2f(35.0f, 12.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(37.0f, 10.0f);
	glVertex2f(37.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(39.0f, 10.0f);
	glVertex2f(39.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(41.0f, 10.0f);
	glVertex2f(41.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(43.0f, 10.0f);
	glVertex2f(43.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(45.0f, 10.0f);
	glVertex2f(45.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(47.0f, 10.0f);
	glVertex2f(47.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(49.0f, 10.0f);
	glVertex2f(49.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(51.0f, 10.0f);
	glVertex2f(51.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(51.0f, 10.0f);
	glVertex2f(51.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(53.0f, 10.0f);
	glVertex2f(53.0f, 12.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(55.0f, 10.0f);
	glVertex2f(55.0f, 12.0f);
    glEnd();


glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(5.0f, 20.0f);
	glVertex2f(5.0f, 22.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(7.0f, 20.0f);
	glVertex2f(7.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(9.0f, 20.0f);
	glVertex2f(9.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(11.0f, 20.0f);
	glVertex2f(11.0f, 22.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(13.0f, 20.0f);
	glVertex2f(13.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(15.0f, 20.0f);
	glVertex2f(15.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(17.0f, 20.0f);
	glVertex2f(17.0f, 22.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(19.0f, 20.0f);
	glVertex2f(19.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(21.0f, 20.0f);
	glVertex2f(21.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(23.0f, 20.0f);
	glVertex2f(23.0f, 22.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(25.0f, 20.0f);
	glVertex2f(25.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(27.0f, 20.0f);
	glVertex2f(27.0f, 22.0f);
    glEnd();

    glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(29.0f, 20.0f);
	glVertex2f(29.0f, 22.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(31.0f, 20.0f);
	glVertex2f(31.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(33.0f, 20.0f);
	glVertex2f(33.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(35.0f, 20.0f);
	glVertex2f(35.0f, 22.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(37.0f, 20.0f);
	glVertex2f(37.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(39.0f, 20.0f);
	glVertex2f(39.0f, 22.0f);
    glEnd();


glBegin(GL_LINES);
	glVertex2f(41.0f, 20.0f);
	glVertex2f(41.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(43.0f, 20.0f);
	glVertex2f(43.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(45.0f, 20.0f);
	glVertex2f(45.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(47.0f, 20.0f);
	glVertex2f(47.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(49.0f, 20.0f);
	glVertex2f(49.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(51.0f, 20.0f);
	glVertex2f(51.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(53.0f, 20.0f);
	glVertex2f(53.0f, 22.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(55.0f, 20.0f);
	glVertex2f(55.0f, 22.0f);
    glEnd();



glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(5.0f, 30.0f);
	glVertex2f(5.0f, 32.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(7.0f, 30.0f);
	glVertex2f(7.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(9.0f, 30.0f);
	glVertex2f(9.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(11.0f, 30.0f);
	glVertex2f(11.0f, 32.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(13.0f, 30.0f);
	glVertex2f(13.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(15.0f, 30.0f);
	glVertex2f(15.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(17.0f, 30.0f);
	glVertex2f(17.0f, 32.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(19.0f, 30.0f);
	glVertex2f(19.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(21.0f, 30.0f);
	glVertex2f(21.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(23.0f, 30.0f);
	glVertex2f(23.0f, 32.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(25.0f, 30.0f);
	glVertex2f(25.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(27.0f, 30.0f);
	glVertex2f(27.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(29.0f, 30.0f);
	glVertex2f(29.0f, 32.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(31.0f, 30.0f);
	glVertex2f(31.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(33.0f, 30.0f);
	glVertex2f(33.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(35.0f, 30.0f);
	glVertex2f(35.0f, 32.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(37.0f, 30.0f);
	glVertex2f(37.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(39.0f, 30.0f);
	glVertex2f(39.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(41.0f, 30.0f);
	glVertex2f(41.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(43.0f, 30.0f);
	glVertex2f(43.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(45.0f, 30.0f);
	glVertex2f(45.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(47.0f, 30.0f);
	glVertex2f(47.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(49.0f, 30.0f);
	glVertex2f(49.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(51.0f, 30.0f);
	glVertex2f(51.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(53.0f, 30.0f);
	glVertex2f(53.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(55.0f, 30.0f);
	glVertex2f(55.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(5.0f, 40.0f);
	glVertex2f(5.0f, 42.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(7.0f, 40.0f);
	glVertex2f(7.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(9.0f, 40.0f);
	glVertex2f(9.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(11.0f, 40.0f);
	glVertex2f(11.0f, 42.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(13.0f, 40.0f);
	glVertex2f(13.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(15.0f, 40.0f);
	glVertex2f(15.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(17.0f, 40.0f);
	glVertex2f(17.0f, 42.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(19.0f, 40.0f);
	glVertex2f(19.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(21.0f, 40.0f);
	glVertex2f(21.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(23.0f, 40.0f);
	glVertex2f(23.0f, 42.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(25.0f, 40.0f);
	glVertex2f(25.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(27.0f, 40.0f);
	glVertex2f(27.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(29.0f, 40.0f);
	glVertex2f(29.0f, 42.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(31.0f, 40.0f);
	glVertex2f(31.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(33.0f, 40.0f);
	glVertex2f(33.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(35.0f, 40.0f);
	glVertex2f(35.0f, 42.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(37.0f, 40.0f);
	glVertex2f(37.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(39.0f, 40.0f);
	glVertex2f(39.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(41.0f, 40.0f);
	glVertex2f(41.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(43.0f, 40.0f);
	glVertex2f(43.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(45.0f, 40.0f);
	glVertex2f(45.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(47.0f, 30.0f);
	glVertex2f(47.0f, 32.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(49.0f, 40.0f);
	glVertex2f(49.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(51.0f, 40.0f);
	glVertex2f(51.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(53.0f, 40.0f);
	glVertex2f(53.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(55.0f, 40.0f);
	glVertex2f(55.0f, 42.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(5.0f, 50.0f);
	glVertex2f(5.0f, 52.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(7.0f, 50.0f);
	glVertex2f(7.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(9.0f, 50.0f);
	glVertex2f(9.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(11.0f, 50.0f);
	glVertex2f(11.0f, 52.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(13.0f, 50.0f);
	glVertex2f(13.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(15.0f, 50.0f);
	glVertex2f(15.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(17.0f, 50.0f);
	glVertex2f(17.0f, 52.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(19.0f, 50.0f);
	glVertex2f(19.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(21.0f, 50.0f);
	glVertex2f(21.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(23.0f, 50.0f);
	glVertex2f(23.0f, 52.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(25.0f, 50.0f);
	glVertex2f(25.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(27.0f, 50.0f);
	glVertex2f(27.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(29.0f, 50.0f);
	glVertex2f(29.0f, 52.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(31.0f, 50.0f);
	glVertex2f(31.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(33.0f, 50.0f);
	glVertex2f(33.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);              // Rain
	glColor3ub(255, 255, 255); // Red
	glVertex2f(35.0f, 50.0f);
	glVertex2f(35.0f, 52.0f);
	glEnd();

glBegin(GL_LINES);
	glVertex2f(37.0f, 50.0f);
	glVertex2f(37.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(39.0f, 50.0f);
	glVertex2f(39.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(41.0f, 50.0f);
	glVertex2f(41.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(43.0f, 50.0f);
	glVertex2f(43.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(45.0f, 50.0f);
	glVertex2f(45.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(47.0f, 50.0f);
	glVertex2f(47.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(49.0f, 50.0f);
	glVertex2f(49.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(51.0f, 50.0f);
	glVertex2f(51.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(53.0f, 50.0f);
	glVertex2f(53.0f, 52.0f);
    glEnd();

glBegin(GL_LINES);
	glVertex2f(55.0f, 50.0f);
	glVertex2f(55.0f, 52.0f);
    glEnd();

    glLoadIdentity();



	glFlush();
}








void Rain_DEMO(int b){
glutDisplayFunc(displayDayRain);
}








void displayNight() {

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin


int i; // Sun

GLfloat x1=0.9f; GLfloat y1=0.9f; GLfloat radius1 =0.05f;
	int triangleAmount = 100;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

glLoadIdentity();


glPushMatrix();                        //to move cloud
glTranslatef(position2,0,0);


glTranslatef(0.0,0.5,0);               //cloud
glScalef(0.03,0.03,0);
glColor3ub(141, 148, 142);
 //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();


	glTranslatef(-20.0,-15.0,0);           // Cloud
    glScalef(10.0,10.0,0);
	glBegin(GL_POLYGON);
	glColor3ub(141, 148, 142);
	glVertex2f(-2.0f, 2.5f);
	glVertex2f(-1.8f, 2.7f);
	glVertex2f(-1.7f, 2.9f);
	glVertex2f(-1.4f, 3.0f);
	glVertex2f(-1.2f, 2.7f);
	glVertex2f(-1.0f, 3.0f);
	glVertex2f(-0.8, 2.9f);
	glVertex2f(-0.6, 2.7f);
	glVertex2f(-0.5, 2.5f);
	glEnd();

	glPopMatrix();

	glLoadIdentity();


glBegin(GL_QUADS);                      // Sea Water
	glColor3ub(67, 77, 148); // Red
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();


glPushMatrix();                        //to move car
glTranslatef(position3,0,0);

	glTranslatef(0.2,0.059,0.0);
	glScalef(0.3,0.3,0);        //Car
	glColor3ub(255, 0, 0);   //Car back body
    glBegin(GL_POLYGON);
    glVertex3f(-0.52, 0.2, 0);
    glVertex3f(-0.9, 0.2, 0);
    glVertex3f(-0.9, 0.4, 0);
    glVertex3f(-0.52, 0.4, 0);
    glEnd();

    glColor3ub(255, 0, 0);   //Car front body
    glBegin(GL_POLYGON);
    glVertex3f(-0.43, 0.2, 0);
    glVertex3f(-0.52, 0.2, 0);
    glVertex3f(-0.52, 0.4, 0);
    glVertex3f(-0.46, 0.35, 0);
    glEnd();

    glColor3ub(102, 153, 153);  //Car glass
    glBegin(GL_POLYGON);
    glVertex3f(-0.53, 0.4, 0);
    glVertex3f(-0.83, 0.4, 0);
    glVertex3f(-0.77, 0.5, 0);
    glVertex3f(-0.60, 0.5, 0);
    glEnd();

    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.65, 0.2, 0);
    glVertex3f(-0.65, 0.4, 0);
    glEnd();


    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.75, 0.2, 0);
    glVertex3f(-0.75, 0.4, 0);
    glEnd();


    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.55, 0.2, 0);
    glVertex3f(-0.55, 0.4, 0);
    glEnd();


    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.6, 0.4, 0);
    glVertex3f(-0.62, 0.4, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.7, 0.4, 0);
    glVertex3f(-0.72, 0.4, 0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.06);
    glPopMatrix();

    glColor3ub(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.06);
    glPopMatrix();

    glColor3ub(204, 51, 255);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.02);
    glPopMatrix();

    glColor3ub(204, 51, 255);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.02);
    glPopMatrix();

    glPopMatrix();
    glLoadIdentity();


glTranslatef(0.1f, 0.0f, 0.0f); //Translate x right and y up
glScalef(1.05,1.05,0);
glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.7f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.7f, 0.8f);
	glEnd();

glBegin(GL_QUADS);              // Building
	glColor3ub(141, 148, 142); // Red
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(255, 255, 255); // Red
	glVertex2f(-0.38f, 0.3f);
	glVertex2f(-0.38f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(255, 255, 255); // Red
	glVertex2f(-0.60f, 0.3f);
	glVertex2f(-0.60f, 0.2f);
	glVertex2f(-0.52f, 0.2f);
	glVertex2f(-0.52f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(255, 255, 255); // Red
	glVertex2f(-0.38f, 0.5f);
	glVertex2f(-0.38f, 0.4f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.3f, 0.5f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(255, 255, 255); // Red
	glVertex2f(-0.60f, 0.5f);
	glVertex2f(-0.60f, 0.4f);
	glVertex2f(-0.52f, 0.4f);
	glVertex2f(-0.52f, 0.5f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(255, 255, 255); // Red
	glVertex2f(-0.38f, 0.7f);
	glVertex2f(-0.38f, 0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.3f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(255, 255, 255); // Red
	glVertex2f(-0.60f, 0.7f);
	glVertex2f(-0.60f, 0.6f);
	glVertex2f(-0.52f, 0.6f);
	glVertex2f(-0.52f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Building Door
	glColor3ub(222, 245, 20); // Red
	glVertex2f(-0.49f, 0.2f);
	glVertex2f(-0.49f, 0.0f);
	glVertex2f(-0.41f, 0.0f);
	glVertex2f(-0.41f, 0.2f);
	glEnd();
glLoadIdentity();

glTranslatef(0.1f, 0.0f, 0.0f); //Translate x right and y up
glBegin(GL_QUADS);              // Watch Tower
	glColor3ub(141, 148, 142); // Red
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-0.8f, 0.1f);
	glVertex2f(-0.8f, 0.9f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Door
	glColor3ub(222, 245, 20); // Red
	glVertex2f(-0.87f, 0.2f);
	glVertex2f(-0.87f, 0.1f);
	glVertex2f(-0.83f, 0.1f);
	glVertex2f(-0.83f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Upper Part
	glColor3ub(141, 148, 142); // Red
	glVertex2f(-0.95f, 0.99f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.99f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Upper Part Window
	glColor3ub(255,255,255); // Red
	glVertex2f(-0.9f, 0.95f);
	glVertex2f(-0.9f, 0.85f);
	glVertex2f(-0.8f, 0.85f);
	glVertex2f(-0.8f, 0.95f);
	glEnd();
glLoadIdentity();

glTranslatef(-0.53,0.20,0);      //tree_cloud
glScalef(0.01,0.03,0);
glColor3ub(46, 191, 111);
 //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

    glLoadIdentity();

    glTranslatef(-0.60,0.3,0);
    glScalef(0.01,0.01,0);
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(0,0,0);
    glVertex3f(2.5,2,0);
    glVertex3f(4.0,-2,0);
    glVertex3f(1,-4,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,2,0);
    glVertex3f(9,2,0);
    glVertex3f(8,-2,0);
    glVertex3f(4,-2,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1,-4,0);
    glVertex3f(4,-2,0);
    glVertex3f(8,-2,0);
    glVertex3f(7,-7,0);
    glVertex3f(1.5,-7,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-7,0);
    glVertex3f(7,-7,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(2,-10,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(2,-10,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(1.5,-13,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-13,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(7,-18,0);
    glVertex3f(.5,-18,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(7,-18,0);
    glVertex3f(3,-27,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(2.5,-23,0);
    glVertex3f(-1,-25,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,-18,0);
    glVertex3f(8,-28,0);
    glVertex3f(4,-22,0);
    glEnd();

    glLoadIdentity();


glBegin(GL_QUADS);              // Container Crane Vertical Back Body
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.9f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Vertical Front Body
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.1f, 0.9f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.13f, 0.0f);
	glVertex2f(0.13f, 0.9f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 1
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.1f, 0.7f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 2
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.6f);
	glVertex2f(0.1f, 0.6f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 3
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 4
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.1f, 0.4f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 5
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.1f, 0.3f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 6
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.85f);
	glVertex2f(0.1f, 0.3f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 7
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.1f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Lifting Liver
	glColor3ub(11, 135, 106); // Red
	glVertex2f(-0.03f, 0.85f);
	glVertex2f(-0.03f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, 0.85f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Lifting Trolley
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.52f, 0.8f);
	glVertex2f(0.52f, 0.77f);
	glVertex2f(0.57f, 0.77f);
	glVertex2f(0.57f, 0.8f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 1st part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(-0.03f, 0.85f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 2nd part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.55f, 0.85f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 3rd part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.55f, 0.77f);
	glVertex2f(0.55f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Pulled Container
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.52f, 0.3f);
	glVertex2f(0.52f, 0.2f);
	glVertex2f(0.58f, 0.2f);
	glVertex2f(0.58f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 1
	glColor3ub(19, 245, 2); // Red
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.38f, 0.1f);
	glVertex2f(0.44f, 0.1f);
	glVertex2f(0.44f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 2
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.38f, 0.1f);
	glVertex2f(0.38f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 3
	glColor3ub(245, 245, 2); // Red
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.26f, 0.1f);
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.32f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 4
	glColor3ub(245, 2, 18); // Red
	glVertex2f(0.20f, 0.2f);
	glVertex2f(0.20f, 0.1f);
	glVertex2f(0.26f, 0.1f);
	glVertex2f(0.26f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 5
	glColor3ub(245, 2, 18); // Red
	glVertex2f(0.38f, 0.3f);
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.44f, 0.2f);
	glVertex2f(0.44f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 6
	glColor3ub(245, 245, 2); // Red
	glVertex2f(0.32f, 0.3f);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.38f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 7
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.26f, 0.3f);
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.32f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 8
	glColor3ub(19, 245, 2); // Red
	glVertex2f(0.20f, 0.3f);
	glVertex2f(0.20f, 0.2f);
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.26f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Port Area
	glColor3ub(194, 209, 119); // Red
	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-1.08f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.1f);
	glEnd();

glBegin(GL_QUADS);              // Port Lower Side
	glColor3ub(15, 15, 15); // Red
	glVertex2f(-0.99f, 0.05f);
	glVertex2f(-0.99f, -0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.05f);
	glEnd();


	glLineWidth(2.3);

/*
GLfloat x=0.5f; GLfloat y=0.0f; GLfloat radius =.2f;
	int i;
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
	glEnd();*/

	//

    glTranslatef(0.69f, 0.1f, 0.0f);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(51, 204, 51); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.7f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.71,0.8,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i2,0.0,0.0,1.0);

 /* glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.05f);
    glVertex2f( 0.1f, 0.05f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.1f);
    glVertex2f( -0.05f, 0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.05f);
    glVertex2f( -0.1f, -0.05f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.05f, -0.1f);
    glVertex2f( 0.05f, -0.1f);
    glEnd(); */

    //Alternative:

    glScalef(0.5,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();

    glPopMatrix();
    i2+=-0.69f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    /* Watch */

    glTranslatef(0.289f, 0.1f, 0.0f);
	glBegin(GL_QUADS);              // Watch Vertical Back Body
	glColor3ub(1,1,1); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

glLoadIdentity();
glLineWidth(2.5);

glTranslatef(0.3,0.6,1.0);
glScalef(0.0038,0.0038,1.0);


int i3;                              // Watch outside circle shape


    GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =24.5f;
	int triangleAmount1 = 100;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2);
		for(i3 = 0; i3 <=triangleAmount1;i3++) {
			glVertex2f(
		            x2 + (radius2 * cos(i3 *  twicePi2 / triangleAmount1)),
			    y2 + (radius2 * sin(i3 * twicePi2 / triangleAmount1))
			);
		}
	glEnd();

	GLfloat x3=0.0f; GLfloat y3=0.0f; GLfloat radius3 =23.0f;

	int lineAmount1 = 100;

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i3 = 0; i3<=lineAmount1;i3++) {
			glVertex2f(
			    x3 + (radius3 * cos(i3 *  twicePi3 / lineAmount1)),
			    y3 + (radius3 * sin(i3 * twicePi3 / lineAmount1))
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

	int i4;                           // Watch middle point shape

    GLfloat x4=0.0f; GLfloat y4=0.0f; GLfloat radius4 =1.5f;
	int triangleAmount2 = 50;

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(x2, y2);
		for(i4 = 0; i4 <=triangleAmount2;i4++) {
			glVertex2f(
		            x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount2)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount2))
			);
		}
	glEnd();

	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i5,0.0,0.0,1.0);


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
    i5+=-0.002f;
    glLoadIdentity();

    glTranslatef(0.3,0.6,1.0);
    glScalef(0.0038,0.0038,1.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i6,0.0,0.0,1.0);

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
    i6+=-0.000033333f;
    glLoadIdentity();

    glTranslatef(0.3,0.6,1.0);
    glScalef(0.0038,0.0038,1.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i7,0.0,0.0,1.0);

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
    i7+=-0.000000555f;
    glLoadIdentity();


    glPushMatrix();                        //to move ship
glTranslatef(position1,0,0);

glTranslatef(-0.1f, 0.6f, 0.0f); //Translate x right and y up
glScalef(2.5,3.0,0);
glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(0.1f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.3f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.3f, -0.3f);    // x, y
	glVertex2f(-0.2f, -0.5f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, -0.5f);    // x, y
	glVertex2f(0.7f, -0.5f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.5f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.65f, -0.1f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(245, 239, 233); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(24, 219, 73); // Red
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, -0.1f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(247, 5, 5); // Red
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(255, 135, 15); // Red
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.7f, -0.2f);
	glEnd();

glBegin(GL_QUADS);              // Ship Lower Side
	glColor3ub(245, 239, 233); // Red
	glVertex2f(-0.3f, -0.3f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.3f);
    glEnd();


glPopMatrix();  //to move ship


glLoadIdentity();


glutTimerFunc(5000, Rain_DEMO, 0);

	glFlush();
}








void Night_DEMO(int a){
glutDisplayFunc(displayNight);
}







void displayDay() {

    glClearColor(0.5f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin


int i; // Sun

GLfloat x1=0.9f; GLfloat y1=0.9f; GLfloat radius1 =0.05f;
	int triangleAmount = 100;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 59);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

glLoadIdentity();


glPushMatrix();                        //to move cloud
glTranslatef(position2,0,0);


glTranslatef(0.0,0.5,0);               //cloud
glScalef(0.03,0.03,0);
glColor3ub(255, 255, 255);
 //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();


	glTranslatef(-20.0,-15.0,0);           // Cloud
    glScalef(10.0,10.0,0);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2f(-2.0f, 2.5f);
	glVertex2f(-1.8f, 2.7f);
	glVertex2f(-1.7f, 2.9f);
	glVertex2f(-1.4f, 3.0f);
	glVertex2f(-1.2f, 2.7f);
	glVertex2f(-1.0f, 3.0f);
	glVertex2f(-0.8, 2.9f);
	glVertex2f(-0.6, 2.7f);
	glVertex2f(-0.5, 2.5f);
	glEnd();

	glPopMatrix();

	glLoadIdentity();


glBegin(GL_QUADS);                      // Sea Water
	glColor3ub(69, 84, 255); // Red
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 0.0f);
	glEnd();


glPushMatrix();                        //to move car
glTranslatef(position3,0,0);

	glTranslatef(0.2,0.059,0.0);
	glScalef(0.3,0.3,0);        //Car
	glColor3ub(255, 0, 0);   //Car back body
    glBegin(GL_POLYGON);
    glVertex3f(-0.52, 0.2, 0);
    glVertex3f(-0.9, 0.2, 0);
    glVertex3f(-0.9, 0.4, 0);
    glVertex3f(-0.52, 0.4, 0);
    glEnd();

    glColor3ub(255, 0, 0);   //Car front body
    glBegin(GL_POLYGON);
    glVertex3f(-0.43, 0.2, 0);
    glVertex3f(-0.52, 0.2, 0);
    glVertex3f(-0.52, 0.4, 0);
    glVertex3f(-0.46, 0.35, 0);
    glEnd();

    glColor3ub(102, 153, 153);  //Car glass
    glBegin(GL_POLYGON);
    glVertex3f(-0.53, 0.4, 0);
    glVertex3f(-0.83, 0.4, 0);
    glVertex3f(-0.77, 0.5, 0);
    glVertex3f(-0.60, 0.5, 0);
    glEnd();

    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.65, 0.2, 0);
    glVertex3f(-0.65, 0.4, 0);
    glEnd();


    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.75, 0.2, 0);
    glVertex3f(-0.75, 0.4, 0);
    glEnd();


    glColor3ub(204, 255, 255);
    glBegin(GL_LINES);
    glVertex3f(-0.55, 0.2, 0);
    glVertex3f(-0.55, 0.4, 0);
    glEnd();


    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.6, 0.4, 0);
    glVertex3f(-0.62, 0.4, 0);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(-0.7, 0.4, 0);
    glVertex3f(-0.72, 0.4, 0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.06);
    glPopMatrix();

    glColor3ub(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.06);
    glPopMatrix();

    glColor3ub(204, 51, 255);
    glPushMatrix();
    glTranslatef(-.5, .2, 0);
    circle(0.02);
    glPopMatrix();

    glColor3ub(204, 51, 255);
    glPushMatrix();
    glTranslatef(-.78, .2, 0);
    circle(0.02);
    glPopMatrix();

    glPopMatrix();
    glLoadIdentity();


glTranslatef(0.1f, 0.0f, 0.0f); //Translate x right and y up
glScalef(1.05,1.05,0);
glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.0f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.7f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

glBegin(GL_LINES);              // Building Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.7f, 0.8f);
	glEnd();

glBegin(GL_QUADS);              // Building
	glColor3ub(234, 245, 225); // Red
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.8f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.38f, 0.3f);
	glVertex2f(-0.38f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.60f, 0.3f);
	glVertex2f(-0.60f, 0.2f);
	glVertex2f(-0.52f, 0.2f);
	glVertex2f(-0.52f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.38f, 0.5f);
	glVertex2f(-0.38f, 0.4f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.3f, 0.5f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.60f, 0.5f);
	glVertex2f(-0.60f, 0.4f);
	glVertex2f(-0.52f, 0.4f);
	glVertex2f(-0.52f, 0.5f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.38f, 0.7f);
	glVertex2f(-0.38f, 0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.3f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Building Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.60f, 0.7f);
	glVertex2f(-0.60f, 0.6f);
	glVertex2f(-0.52f, 0.6f);
	glVertex2f(-0.52f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Building Door
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.49f, 0.2f);
	glVertex2f(-0.49f, 0.0f);
	glVertex2f(-0.41f, 0.0f);
	glVertex2f(-0.41f, 0.2f);
	glEnd();
glLoadIdentity();

glTranslatef(0.1f, 0.0f, 0.0f); //Translate x right and y up
glBegin(GL_QUADS);              // Watch Tower
	glColor3ub(191, 171, 54); // Red
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-0.8f, 0.1f);
	glVertex2f(-0.8f, 0.9f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Door
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.87f, 0.2f);
	glVertex2f(-0.87f, 0.1f);
	glVertex2f(-0.83f, 0.1f);
	glVertex2f(-0.83f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Upper Part
	glColor3ub(191, 171, 54); // Red
	glVertex2f(-0.95f, 0.99f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.99f);
	glEnd();

glBegin(GL_QUADS);              // Watch Tower Upper Part Window
	glColor3ub(217, 207, 232); // Red
	glVertex2f(-0.9f, 0.95f);
	glVertex2f(-0.9f, 0.85f);
	glVertex2f(-0.8f, 0.85f);
	glVertex2f(-0.8f, 0.95f);
	glEnd();
glLoadIdentity();

glTranslatef(-0.53,0.20,0);      //tree_cloud
glScalef(0.01,0.03,0);
glColor3ub(46, 191, 111);
 //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

    glLoadIdentity();

    glTranslatef(-0.60,0.3,0);
    glScalef(0.01,0.01,0);
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(0,0,0);
    glVertex3f(2.5,2,0);
    glVertex3f(4.0,-2,0);
    glVertex3f(1,-4,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,2,0);
    glVertex3f(9,2,0);
    glVertex3f(8,-2,0);
    glVertex3f(4,-2,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1,-4,0);
    glVertex3f(4,-2,0);
    glVertex3f(8,-2,0);
    glVertex3f(7,-7,0);
    glVertex3f(1.5,-7,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-7,0);
    glVertex3f(7,-7,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(2,-10,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(2,-10,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(1.5,-13,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-13,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(7,-18,0);
    glVertex3f(.5,-18,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(7,-18,0);
    glVertex3f(3,-27,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(2.5,-23,0);
    glVertex3f(-1,-25,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,-18,0);
    glVertex3f(8,-28,0);
    glVertex3f(4,-22,0);
    glEnd();

    glLoadIdentity();


glBegin(GL_QUADS);              // Container Crane Vertical Back Body
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.9f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Vertical Front Body
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.1f, 0.9f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.13f, 0.0f);
	glVertex2f(0.13f, 0.9f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 1
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.1f, 0.7f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 2
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.6f);
	glVertex2f(0.1f, 0.6f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 3
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 4
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.1f, 0.4f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 5
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.1f, 0.3f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 6
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.85f);
	glVertex2f(0.1f, 0.3f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Front to Back Connected Line 7
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.1f, 0.7f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Lifting Liver
	glColor3ub(11, 135, 106); // Red
	glVertex2f(-0.03f, 0.85f);
	glVertex2f(-0.03f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, 0.85f);
	glEnd();

glBegin(GL_QUADS);              // Container Crane Lifting Trolley
	glColor3ub(11, 135, 106); // Red
	glVertex2f(0.52f, 0.8f);
	glVertex2f(0.52f, 0.77f);
	glVertex2f(0.57f, 0.77f);
	glVertex2f(0.57f, 0.8f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 1st part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(-0.03f, 0.85f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 2nd part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.55f, 0.85f);
	glEnd();

glBegin(GL_LINES);              // Container Crane Holder Rope 3rd part
	glColor3ub(15, 15, 15); // Red
	glVertex2f(0.55f, 0.77f);
	glVertex2f(0.55f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Pulled Container
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.52f, 0.3f);
	glVertex2f(0.52f, 0.2f);
	glVertex2f(0.58f, 0.2f);
	glVertex2f(0.58f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 1
	glColor3ub(19, 245, 2); // Red
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.38f, 0.1f);
	glVertex2f(0.44f, 0.1f);
	glVertex2f(0.44f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 2
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.38f, 0.1f);
	glVertex2f(0.38f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 3
	glColor3ub(245, 245, 2); // Red
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.26f, 0.1f);
	glVertex2f(0.32f, 0.1f);
	glVertex2f(0.32f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 4
	glColor3ub(245, 2, 18); // Red
	glVertex2f(0.20f, 0.2f);
	glVertex2f(0.20f, 0.1f);
	glVertex2f(0.26f, 0.1f);
	glVertex2f(0.26f, 0.2f);
	glEnd();

glBegin(GL_QUADS);              // Container 5
	glColor3ub(245, 2, 18); // Red
	glVertex2f(0.38f, 0.3f);
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.44f, 0.2f);
	glVertex2f(0.44f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 6
	glColor3ub(245, 245, 2); // Red
	glVertex2f(0.32f, 0.3f);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.38f, 0.2f);
	glVertex2f(0.38f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 7
	glColor3ub(225, 0, 255); // Red
	glVertex2f(0.26f, 0.3f);
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.32f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Container 8
	glColor3ub(19, 245, 2); // Red
	glVertex2f(0.20f, 0.3f);
	glVertex2f(0.20f, 0.2f);
	glVertex2f(0.26f, 0.2f);
	glVertex2f(0.26f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Port Area
	glColor3ub(194, 209, 119); // Red
	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-1.08f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.1f);
	glEnd();

glBegin(GL_QUADS);              // Port Lower Side
	glColor3ub(15, 15, 15); // Red
	glVertex2f(-0.99f, 0.05f);
	glVertex2f(-0.99f, -0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.05f);
	glEnd();


	glLineWidth(2.3);

/*
GLfloat x=0.5f; GLfloat y=0.0f; GLfloat radius =.2f;
	int i;
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
	glEnd();*/

	//

    glTranslatef(0.69f, 0.1f, 0.0f);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(51, 204, 51); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.7f);
	glEnd();

	glLoadIdentity();

	glTranslatef(0.71,0.8,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i2,0.0,0.0,1.0);

 /* glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.05f);
    glVertex2f( 0.1f, 0.05f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.1f);
    glVertex2f( -0.05f, 0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.05f);
    glVertex2f( -0.1f, -0.05f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.05f, -0.1f);
    glVertex2f( 0.05f, -0.1f);
    glEnd(); */

    //Alternative:

    glScalef(0.5,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 102, 102);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();

    glPopMatrix();
    i2+=-0.69f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    /* Watch */

    glTranslatef(0.289f, 0.1f, 0.0f);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(1,1,1); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

glLoadIdentity();
glLineWidth(2.5);

glTranslatef(0.3,0.6,1.0);
glScalef(0.0038,0.0038,1.0);


int i3;                              // Watch outside circle shape


    GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =24.5f;
	int triangleAmount1 = 100;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x2, y2);
		for(i3 = 0; i3 <=triangleAmount1;i3++) {
			glVertex2f(
		            x2 + (radius2 * cos(i3 *  twicePi2 / triangleAmount1)),
			    y2 + (radius2 * sin(i3 * twicePi2 / triangleAmount1))
			);
		}
	glEnd();

	GLfloat x3=0.0f; GLfloat y3=0.0f; GLfloat radius3 =23.0f;

	int lineAmount1 = 100;

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i3 = 0; i3<=lineAmount1;i3++) {
			glVertex2f(
			    x3 + (radius3 * cos(i3 *  twicePi3 / lineAmount1)),
			    y3 + (radius3 * sin(i3 * twicePi3 / lineAmount1))
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

	int i4;                           // Watch middle point shape

    GLfloat x4=0.0f; GLfloat y4=0.0f; GLfloat radius4 =1.5f;
	int triangleAmount2 = 50;

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(x2, y2);
		for(i4 = 0; i4 <=triangleAmount2;i4++) {
			glVertex2f(
		            x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount2)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount2))
			);
		}
	glEnd();

	glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i5,0.0,0.0,1.0);


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
    i5+=-0.002f;
    glLoadIdentity();

    glTranslatef(0.3,0.6,1.0);
    glScalef(0.0038,0.0038,1.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i6,0.0,0.0,1.0);

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
    i6+=-0.000033333f;
    glLoadIdentity();

    glTranslatef(0.3,0.6,1.0);
    glScalef(0.0038,0.0038,1.0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(i7,0.0,0.0,1.0);

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
    i7+=-0.000000555f;
    glLoadIdentity();


    glPushMatrix();                        //to move ship
glTranslatef(position1,0,0);

glTranslatef(-0.1f, 0.6f, 0.0f); //Translate x right and y up
glScalef(2.5,3.0,0);
glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.1f);    // x, y
	glVertex2f(0.1f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(0.1f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.2f);    // x, y
	glVertex2f(0.7f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.1f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.1f);    // x, y
	glVertex2f(0.4f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(0.4f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Window Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.4f, -0.2f);    // x, y
	glVertex2f(0.7f, -0.2f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.3f, -0.3f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.3f, -0.3f);    // x, y
	glVertex2f(-0.2f, -0.5f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(-0.2f, -0.5f);    // x, y
	glVertex2f(0.7f, -0.5f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Lower Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.5f);    // x, y
	glVertex2f(0.7f, -0.3f);    // x, y
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.65f, -0.1f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_LINES);              // Ship Upper Side Lines
	glColor3ub(23, 8, 23); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(245, 239, 233); // Red
	glVertex2f(0.65f, 0.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.0f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(24, 219, 73); // Red
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, -0.1f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(247, 5, 5); // Red
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

glBegin(GL_QUADS);              // Ship Upper Side
	glColor3ub(255, 135, 15); // Red
	glVertex2f(0.1f, -0.2f);
	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.7f, -0.2f);
	glEnd();

glBegin(GL_QUADS);              // Ship Lower Side
	glColor3ub(245, 239, 233); // Red
	glVertex2f(-0.3f, -0.3f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.3f);
    glEnd();


glPopMatrix();  //to move ship



glLoadIdentity();

glutTimerFunc(5000, Night_DEMO, 0);


	glFlush();
}


void soundRain()
{

    PlaySound("rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void soundDay()
{

    PlaySound("day.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void soundNight()
{

    PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}





void handleKeypress2(unsigned char key, int x, int y) {

	switch (key) {
case 'c':
    speed3 = 0.0f;
    break;
case 'v':
    speed3 = 0.002f;
    break;
case 'r':glutDisplayFunc(displayDayRain);
    soundRain();
    break;
case 'n':glutDisplayFunc(displayNight);
    soundNight();
    break;
case 'd':glutDisplayFunc(displayDay);
    soundDay();
    break;
glutPostRedisplay();
	}
}


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}






int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Press d to generate Day sound | Press n to generate Night sound | Press r to generate Rain sound");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(displayDay);
	glutKeyboardFunc(handleKeypress1);
	glutKeyboardFunc(handleKeypress2);
    glutMouseFunc(handleMouse);
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, update2, 0);
	glutTimerFunc(100, update3, 0);
	glutTimerFunc(100, update4, 0);
	soundDay();
	glutMainLoop();
	return 0;
}
