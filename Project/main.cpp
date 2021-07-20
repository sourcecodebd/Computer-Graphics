#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <windows.h>
#include <mmsystem.h>
#include <iostream>
# define PI           3.14159265358979323846


using namespace std;

//Day View is at 7540 no. line
//Night View is at 4160 no. line
//Day(Rain) View is at 185 no. line


GLfloat i5 = 0.0f;  // for second2
GLfloat i6 = 0.0f;  // for minute4
GLfloat i7 = 0.0f;  // for hour5

GLfloat iW = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.0005f;

GLfloat positionSun = 0.0f;
GLfloat speedSun = 0.0001f;

GLfloat positionMoon = -0.15f;
GLfloat speedMoon = 0.0001f;

GLfloat positionC = 0.0f; //car
GLfloat speedC = 0.005f;

GLfloat positionR = 0.0f; //rain
GLfloat speedR = 0.09f;

GLfloat positionH = 0.0f; //helicopter
GLfloat speedH = 0.002f;

GLfloat positionB = 0.0f;
GLfloat speedB = 0.01f; //Bird

GLfloat positionTrain = 0.0f; //Train
GLfloat speedTrain = 0.005f;


void updateSun(int value) {         //movement of sun

   if(positionSun >1.0)
        positionSun = -0.01f;
        positionSun += speedSun;

	glutPostRedisplay();


	glutTimerFunc(5, updateSun, 0);

}

void updateMoon(int value) {

   if(positionMoon >1.0)             //movement of moon
        positionMoon = -0.01f;
        positionMoon += speedMoon;

	glutPostRedisplay();


	glutTimerFunc(5, updateMoon, 0);

}

void updateC(int value) {

   if(positionC >1.7)             //right movement of car
        positionC = -0.6f;
        positionC += speedC;

	glutPostRedisplay();


	glutTimerFunc(5, updateC, 0);

}

void updateR(int value) {

   if(positionR >1.5)             //right movement of rain
        positionR = -0.5f;
        positionR += speedR;

	glutPostRedisplay();


	glutTimerFunc(5, updateR, 0);

}

void updateH(int value) {

   if(positionH >1.5)             //right movement of helicopter
        positionH = -0.01f;
        positionH += speedH;

	glutPostRedisplay();


	glutTimerFunc(5, updateH, 0);

}

void updateB(int value) {

    if(positionB >3.5)
        positionB = -3.1f;

    positionB += speedB; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(5, updateB, 0);

}

void updateTrain(int value) {

   if(positionTrain >3.5)             //movement of Train
        positionTrain = -1.5f;
        positionTrain += speedC;

	glutPostRedisplay();


	glutTimerFunc(5, updateTrain, 0);

}

void update(int value) {

    if(position >1.9)
        position = -1.3f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(5, update, 0);
}
GLfloat position_s = 0.0f;
GLfloat speed_s = 0.01f;

void update_s(int value) {

    if(position_s >2.0)
        position_s = -2.0f;

    position_s += speed_s; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(5, update, 0);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speedC += 0.002f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speedC -= 0.002f;
			}
	glutPostRedisplay();
	}





void myDisplayRain(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);
glLineWidth(9);
glPointSize(5.0);



 glBegin(GL_QUADS);
    glColor3ub(82, 84, 82);
    glVertex2f(-1.0, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, .95f);
    glVertex2f(-1.0f, .95f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(131, 138, 131);
    glVertex2f(-1.0, .95f);
    glVertex2f(1.0f, .95f);
    glVertex2f(1.0f, .90f);
    glVertex2f(-1.0f, .90f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(147, 158, 147);
    glVertex2f(-1.0, .90f);
    glVertex2f(1.0f, .90f);
    glVertex2f(1.0f, .85f);
    glVertex2f(-1.0f, .85f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(168, 179, 168);
    glVertex2f(-1.0, .85f);
    glVertex2f(1.0f, .85f);
    glVertex2f(1.0f, .80f);
    glVertex2f(-1.0f, .80f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 209, 201);
    glVertex2f(-1.0, .80f);
    glVertex2f(1.0f, .80f);
    glVertex2f(1.0f, .70f);
    glVertex2f(-1.0f, .70f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(213, 219, 213);
    glVertex2f(-1.0, .70f);
    glVertex2f(1.0f, .70f);
    glVertex2f(1.0f, .60f);
    glVertex2f(-1.0f, .60f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(228, 237, 228);
    glVertex2f(-1.0, .60f);
    glVertex2f(1.0f, .60f);
    glVertex2f(1.0f, .40f);
    glVertex2f(-1.0f, .40f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(233, 245, 233);
    glVertex2f(-1.0, .40f);
    glVertex2f(1.0f, .40f);
    glVertex2f(1.0f, .15f);
    glVertex2f(-1.0f, .15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 252, 240);
    glVertex2f(-1.0, .15f);
    glVertex2f(1.0f, .15f);
    glVertex2f(1.0f, -.15f);
    glVertex2f(-1.0f, -.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(247, 255, 247);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();                              //sky end

glPushMatrix();
glTranslatef(position,0,0);


int e;                                                             //cloud

	GLfloat x611=-.42f; GLfloat y611=.94f; GLfloat radius611=.03f;
	int triangleAmount611 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi611 = 2.0f * PI;
  glColor3ub (204, 204, 204);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x611, y611); // center of circle
		for(e= 0; e<= triangleAmount611;e++) {
			glVertex2f(
		            x611 + (radius611 * cos(e *  twicePi611 / triangleAmount611)),
			    y611 + (radius611 * sin(e* twicePi611 / triangleAmount611))
			);
		}
	glEnd();
	int f;                                                             //cloud

	GLfloat x6112=-.47f; GLfloat y6112=.94f; GLfloat radius6112=.03f;
	int triangleAmount6112 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6112 = 2.0f * PI;
  glColor3ub (204, 204, 204);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6112, y6112); // center of circle
		for(f= 0; f<= triangleAmount6112;f++) {
			glVertex2f(
		            x6112 + (radius6112 * cos(f *  twicePi6112 / triangleAmount6112)),
			    y6112 + (radius6112 * sin(f* twicePi6112 / triangleAmount6112))
			);
		}
	glEnd();
	int g;                                                             //cloud

	GLfloat x613=-.44f; GLfloat y613=.91f; GLfloat radius613=.03f;
	int triangleAmount613 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi613 = 2.0f * PI;
  glColor3ub (204, 204, 204);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x613, y613); // center of circle
		for(g= 0; g<= triangleAmount613;g++) {
			glVertex2f(
		            x613 + (radius613 * cos(g *  twicePi613 / triangleAmount613)),
			    y613 + (radius613 * sin(g* twicePi613 / triangleAmount613))
			);
		}
	glEnd();
int b;                                                             //cloud

	GLfloat x616=.42f; GLfloat y616=.96f; GLfloat radius616=.03f;
	int triangleAmount616 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi616= 2.0f * PI;
  glColor3ub (204, 204, 204);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x616, y616); // center of circle
		for(b= 0; b<= triangleAmount616;b++) {
			glVertex2f(
		            x616 + (radius616 * cos(b *  twicePi616 / triangleAmount616)),
			    y616 + (radius616 * sin(b* twicePi616 / triangleAmount616))
			);
		}
	glEnd();
	int z;                                                             //cloud
float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.9f, yC= 0.93f, radiusC =.05f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.83f, yC= 0.93f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.87f, yC= 0.9f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 204);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();

	GLfloat x6114=.47f; GLfloat y6114=.94f; GLfloat radius6114=.03f;
	int triangleAmount6114 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6114 = 2.0f * PI;
  glColor3ub (204, 204, 204);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6114, y6114); // center of circle
		for(z= 0; z<= triangleAmount6114;z++) {
			glVertex2f(
		            x6114+ (radius6114 * cos(z *  twicePi6114 / triangleAmount6114)),
			    y6114 + (radius6114 * sin(z* twicePi6114 / triangleAmount6114))
			);
		}
	glEnd();
	int c;                                                             //cloud

	GLfloat x615=.44f; GLfloat y615=.91f; GLfloat radius615=.03f;
	int triangleAmount615 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi615 = 2.0f * PI;
  glColor3ub (204, 204, 204);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x615, y615); // center of circle
		for(c= 0; c<= triangleAmount615;c++) {
			glVertex2f(
		            x615 + (radius615 * cos(c *  twicePi615 / triangleAmount615)),
			    y615 + (radius615 * sin(c* twicePi615 / triangleAmount615))
			);
		}
	glEnd();
	glTranslatef(-1.2,1.0,0.0);


glColor3ub(204, 204, 204);


GLfloat x1x=0.6f; GLfloat y1y=-0.2f; GLfloat radius1s =.08f; // cloud right circle


int triangleAmount22 = 20;


GLfloat twicePi22 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(x1x, y1y);


for(int i = 0; i <= triangleAmount22; i++)


glVertex2f(x1x + (radius1s * cos(i * twicePi22 / triangleAmount22)),y1y + (radius1s * sin(i * twicePi22 / triangleAmount22)));


glEnd();





glColor3ub(204, 204, 204);


GLfloat x1x1=0.5f; GLfloat y1y1=-0.2f; GLfloat radiuss11 =.1f; // cloud middle circle


int triangleAmount211 = 20;


GLfloat twicePi221 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(x1x1, y1y1);


for(int i = 0; i <= triangleAmount211; i++)


glVertex2f(x1x1 + (radiuss11 * cos(i * twicePi221 / triangleAmount211)),y1y1 + (radiuss11 * sin(i * twicePi221 / triangleAmount211)));


glEnd();





glColor3ub(204, 204, 204);


GLfloat xx2=0.4f; GLfloat yy2=-0.2f; GLfloat radiuss2 =.08f; // cloud left circle


int triangleAmount212 = 20;


GLfloat twicePi212 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(xx2, yy2);


for(int i = 0; i <= triangleAmount212; i++)


glVertex2f(xx2 + (radiuss2 * cos(i * twicePi212 / triangleAmount212)),yy2 + (radiuss2 * sin(i * twicePi212 / triangleAmount212)));


glEnd();



	glPopMatrix();                 //cloud finish

glBegin(GL_QUADS);
glColor3ub (51, 102, 0);
glVertex2f(-1, .7);
glVertex2f( -1,-.3);          //basepart

glVertex2f(1,-.30);
glVertex2f(1, .70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (186,164 , 122);
glVertex2f(-.45, .5);
glVertex2f( -.45,-.3);          //basepart

glVertex2f(1,-.30);
glVertex2f(1, .50);
glEnd();

glBegin(GL_LINES);
glColor3ub (92, 138, 138);

glVertex2f(-.45, .505);

glVertex2f(-.45, -.3);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);               //court boundary
glColor3ub (92, 138, 138);

glVertex2f(-.45, .495);          //court boundary

glVertex2f(-1, .495);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);
glColor3ub (92, 138, 138);

glVertex2f(-.7, .495);

glVertex2f(-.7, -.3);
glEnd();




	glBegin(GL_QUADS);
glColor3ub (77, 153, 0);
glVertex2f(-.457, .479);
glVertex2f( -1,.479);          //football court

glVertex2f(-1,-.30);
glVertex2f(-.457, -.30);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);          // football court center line
glColor3ub (255, 255, 255);

glVertex2f(-.75, .476);

glVertex2f(-.75, -.3);
glEnd();

int i;                              //football court center

	GLfloat x=-.75f; GLfloat y=.1f; GLfloat radius =.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glTranslatef(-.8,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
	glTranslatef(-.6,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
glBegin(GL_LINES);
glColor3ub (77, 38, 0);                     //ring
glVertex2f(-.43, .21);
	glVertex2f(-.43, .49);
glEnd();
glBegin(GL_LINES);
glColor3ub (77, 38, 0);                     //ring
glVertex2f(-.32, .21);
	glVertex2f(-.32, .49);
glEnd();
GLfloat x7=-.35f; GLfloat y7=.31f; GLfloat radius7 =.03f;
	int p;
	int lineAmount = 200;

	GLfloat twicePi7 = 2.0f * PI;
glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(p = 0; p <= lineAmount;p++) {
			glVertex2f(
			    x7 + (radius7 * cos(p *  twicePi7 / lineAmount)),
			    y7 + (radius7* sin(p * twicePi7 / lineAmount))
			);
		}
		glEnd();

		GLfloat x8=-.404f; GLfloat y8=.31f; GLfloat radius8 =.03f;
	int q;
	int lineAmount1 = 200;

	GLfloat twicePi8 = 2.0f * PI;
glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(q= 0; q <= lineAmount;q++) {
			glVertex2f(
			    x8 + (radius8 * cos(q *  twicePi8 / lineAmount1)),
			    y8 + (radius8* sin(q * twicePi8 / lineAmount1))
			);
		}
		glEnd();

		GLfloat x9=-.375f; GLfloat y9=.36f; GLfloat radius9 =.03f;
	int r;
	int lineAmount2 = 190;

	GLfloat twicePi9 = 2.0f * PI;
    glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(r = 0; r <= lineAmount2;r++) {
			glVertex2f(
			    x9 + (radius9 * cos(r *  twicePi9 / lineAmount2)),
			    y9 + (radius9* sin(r * twicePi9 / lineAmount2))
			);
		}
		glEnd();
glBegin(GL_LINES);
glColor3ub (77, 38, 0);                     //ring
glVertex2f(-.31, -.2);
	glVertex2f(-.42, -.2);
glEnd();

glBegin(GL_LINES);                  //flag


glVertex2f(-.17, .7);
	glVertex2f(-.17, .52);

glEnd();

glBegin(GL_QUADS);                  //flag

glColor3ub (0, 77, 0);
glVertex2f(-.17, .7);
	glVertex2f(-.25, .7);
	glVertex2f(-.25, .6);
	glVertex2f(-.17, .6);

glEnd();
int s;

	GLfloat x10=-.21f; GLfloat y10=.65f; GLfloat radius10=.02f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(s= 0; s <= triangleAmount10;s++) {
			glVertex2f(
		            x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(s* twicePi10 / triangleAmount10))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (51, 51, 0);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
glTranslatef(+.5,0,0);
	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (51, 51, 0);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
	glLoadIdentity();

	glTranslatef(+.3,0,0);

	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (51, 51, 0);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
	glLoadIdentity();


    glBegin(GL_POLYGON);  //hill
    glColor3ub(51, 51, 0);
    glVertex2f(-.9,.7);
    glVertex2f(-.535,.7);
    glVertex2f(-.57,.8);
    glVertex2f(-.7,.85);
    glVertex2f(-.8,.97);

    glEnd();
    glTranslatef(.55,0,0);  //hills
     glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);
    glVertex2f(-.9,.7);
    glVertex2f(-.535,.7);
    glVertex2f(-.57,.8);
    glVertex2f(-.7,.85);
    glVertex2f(-.8,.97);

    glEnd();
 glLoadIdentity();
  glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);  //hill
    glVertex2f(-.1,.7);
    glVertex2f(.5,.7);
    glVertex2f(.4,.97);
    glVertex2f(.3,.91);
    glVertex2f(.15,.86);
    glVertex2f(.05,.99);
 glVertex2f(-.05,.93);

    glEnd();
     glTranslatef(.49,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);    //hill
    glVertex2f(-.1,.7);
    glVertex2f(.5,.7);
    glVertex2f(.4,.97);
    glVertex2f(.3,.91);
    glVertex2f(.15,.86);
    glVertex2f(.05,.99);
 glVertex2f(-.05,.93);

    glEnd();
    glLoadIdentity();
    glTranslatef(.05,0,0);
    glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //big tent

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);  //tent line
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);  //tent line
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();




//BackFatTrees
    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.52f,0.45f);
	glVertex2f(-0.48f, 0.45f);
	glVertex2f(-0.48f,0.62f);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glVertex2f(-0.58f,0.6f);
	glVertex2f(-0.55f, 0.63f);
	glVertex2f(-0.58f,0.66f);
	glVertex2f(-0.52f,0.66f);
	glVertex2f(-0.52f, 0.72f);
	glVertex2f(-0.5f,0.69f);///
	glVertex2f(-0.48f,0.72f);
	glVertex2f(-0.48f, 0.66f);
	glVertex2f(-0.42f,0.66f);
	glVertex2f(-0.45f,0.63f);
	glVertex2f(-0.42f, 0.6f);
	glVertex2f(-0.48f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(0.52f,0.45f);
	glVertex2f(0.48f, 0.45f);
	glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();
     glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glVertex2f(0.58f,0.6f);
	glVertex2f(0.55f, 0.63f);
	glVertex2f(0.58f,0.66f);
	glVertex2f(0.52f,0.66f);
	glVertex2f(0.52f, 0.72f);
	glVertex2f(0.5f,0.69f);///
	glVertex2f(0.48f,0.72f);
	glVertex2f(0.48f, 0.66f);
	glVertex2f(0.42f,0.66f);
	glVertex2f(0.45f,0.63f);
	glVertex2f(0.42f, 0.6f);
	glVertex2f(0.48f,0.62f);
    glEnd();

  	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);///
    glVertex2f(-0.68f, 0.64);
     glVertex2f(-0.6f,0.6f);
     glVertex2f(-0.57f, 0.56);
     glVertex2f(-0.52f, 0.5f);
     glVertex2f(-0.5f,0.45f);
     glVertex2f(-1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.0f,0.45f);
	glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67);///
    glVertex2f(0.68f, 0.64);
     glVertex2f(0.6f,0.6f);
     glVertex2f(0.57f, 0.56);
     glVertex2f(0.52f, 0.5f);
     glVertex2f(0.5f,0.45f);
     glVertex2f(1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.5f,0.45f);
	glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);///
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
     glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.5f,0.45f);
	glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);///
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
     glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-.25f,0.45f);
	glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67);///
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f,0.45f);
	glEnd();

//BackFatTree End


	glBegin(GL_QUADS);
glColor3ub (0, 128, 0);
glVertex2f(-.15, .6);
glVertex2f( -.15,.3);          //house

glVertex2f(.15,.3);
glVertex2f(.15, .6);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f( -.165,.6);    //house
glVertex2f(.165,.6);
glVertex2f(0, .74);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 77, 77);
glVertex2f(-.12, .6);
glVertex2f( -.12,.3);   //house

glVertex2f(.12,.3);
glVertex2f(.12, .6);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);  //house
glVertex2f( -.1,.61);
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);              //house
glVertex2f( -.1,.61);

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();

glTranslatef(.06,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);              //house
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.09,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);                //house

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);
                                            //house
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.15,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.18,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);          //house

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glTranslatef(0.03,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();

glTranslatef(0.06,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.09,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.12,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.15,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();

glLineWidth(4);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.159, .3);
glVertex2f( .159,.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub (77, 77, 0);
glVertex2f(-.1, .5);
glVertex2f( -.1,.4);          //house

glVertex2f(-.05,.4);
glVertex2f(-.05, .5);
glEnd();
glTranslatef(.15,0,0);
glBegin(GL_QUADS);
glColor3ub (77, 77, 0);
glVertex2f(-.1, .5);
glVertex2f( -.1,.4);          //house

glVertex2f(-.05,.4);
glVertex2f(-.05, .5);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);
glColor3ub (77, 77, 0);
glVertex2f(-.02, .5);
glVertex2f( -.02,.3);          //house

glVertex2f(.02,.3);
glVertex2f(.02, .5);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2f( -.24,.3);          //house

glVertex2f(-.22,.3);
glVertex2f(-.23, .6);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.26, .3);
glVertex2f( -.21,.3);
glEnd();




//Circle-Tree Begins

glTranslatef(0.3,-0.15,0);
glScalef(0.7,0.7,0);
glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.72f,-0.15f);
    glVertex2f(-0.65f,-0.2f);
    glVertex2f(-0.735f,-0.17f);
    glVertex2f(-0.74f,-0.25f);
    glVertex2f(-0.775f,-0.17f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.78f,-0.15f);
    //glVertex2f(-0.7f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,-0.15f);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.72f,0.23f);
    glVertex2f(-0.72f,-0.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.76f,0.23f);
    glVertex2f(-0.76f,0.3f);
    glVertex2f(-0.74f,0.3f);
    glVertex2f(-0.74f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.74f,0.23f);
    glVertex2f(-0.71f,0.29f);
    glVertex2f(-0.7f,0.28f);
    glVertex2f(-0.72f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.8f,0.28f);
    glVertex2f(-0.79f,0.29f);
    glVertex2f(-0.76f,0.23f);
    glEnd();

     int iTree;

	GLfloat xT=-.75f; GLfloat yT=.33f; GLfloat radiusT =.06f;
	int triangleAmountT = 20;
	GLfloat twicePiT = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(xT, yT); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            xT + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    yT + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

GLfloat a1=-.68f; GLfloat b1=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(a1, b1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            a1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    b1 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat c1=-.81f; GLfloat d1=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(c1, d1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            c1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    d1 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e1=-.87f; GLfloat f1=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(e1, f1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f1+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat g1=-.61f; GLfloat h1=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(g1, h1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            g1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    h1+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat a69=-.61f; GLfloat b69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(a69, b69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            a69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    b69 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat c69=-.88f; GLfloat d69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(c69, d69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            c69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    d69 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e69=-.87f; GLfloat f69=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(e69, f69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f69+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat g69=-.61f; GLfloat h69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(g69, h69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            g69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    h69+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat e11=-.64f; GLfloat f11=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(e11, f11); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e11 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f11+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e12=-.75f; GLfloat f12=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(e12, f12); // center of circle
		for(iTree = 0; iTree <= triangleAmount;iTree++) {
			glVertex2f(
		            e12 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f12+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	 glBegin(GL_QUADS);
    glColor3ub(5, 82, 25);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

    GLfloat e123=-.8f; GLfloat f123=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(e123, f123); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e123 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f123+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat e1232=-.7f; GLfloat f1232=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(5, 82, 25);
		glVertex2f(e1232, f1232); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e1232 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f1232+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
glLoadIdentity();
//Circle-Tree End


//Windmill starts

    glTranslatef(-0.718f, 0.6f, 0.0f);
    glScalef(0.4,0.4,0);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(51, 204, 51); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.7f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.71,0.88,0);
	glScalef(0.4,0.4,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(iW,0.0,0.0,1.0);

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
    iW+=-0.69f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

//Windmill ends



int j;                                           //dartboard

	GLfloat x1=-.23f; GLfloat y1=.5f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	int k;

	GLfloat x2=-.23f; GLfloat y2=.5f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	int l;

	GLfloat x3=-.23f; GLfloat y3=.5f; GLfloat radius3 =.035f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
  glColor3ub (0, 0, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l= 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int m;

	GLfloat x4=-.23f; GLfloat y4=.5f; GLfloat radius4 =.025f;
	int triangleAmount4 = 36; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
  glColor3ub (0, 255, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(m= 0; m <= triangleAmount4;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius3 * sin(m* twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	int n;

	GLfloat x5=-.23f; GLfloat y5=.5f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n= 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(n* twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	int o;

	GLfloat x6=-.23f; GLfloat y6=.5f; GLfloat radius6=.01f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o= 0; o <= triangleAmount6;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o* twicePi6 / triangleAmount6))
			);
		}
	glEnd();    //dartboard finish



	glBegin(GL_QUADS);
glColor3ub (77, 184, 255);
glVertex2f(-1,-.3);
glVertex2f( -1,-1);          //river

glVertex2f(1,-1);
glVertex2f(1, -.30);
glEnd();
glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2f(-1,-.35);
glVertex2f( -1,-.7);          //road

glVertex2f(1,-.7);
glVertex2f(1, -.35);
glEnd();
glLineWidth(5);
glBegin(GL_LINES);                  //white line in road
	glColor3ub (255,255,255);
	glVertex2f(-.98, -.525);
	glVertex2f(-.9,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road
	glColor3ub (255,255,255);
	glVertex2f(-.87, -.525);
	glVertex2f(-.79,-.525);
	glEnd();

	glBegin(GL_LINES);                  //white line in road
	glColor3ub (255,255,255);
	glVertex2f(-.76, -.525);
	glVertex2f(-.68,-.525);
	glEnd();glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.65, -.525);
	glVertex2f(-.58,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.55, -.525);
	glVertex2f(-.47,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.44, -.525);
	glVertex2f(-.36,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.33, -.525);
	glVertex2f(-.25,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.22, -.525);
	glVertex2f(-.16,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.13, -.525);
	glVertex2f(-.05,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.02, -.525);
	glVertex2f(.06,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.09, -.525);
	glVertex2f(.17,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.2, -.525);
	glVertex2f(.28,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.31, -.525);
	glVertex2f(.39,-.525);
	glEnd();
glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.41, -.525);
	glVertex2f(.49,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.52, -.525);
	glVertex2f(.6,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.63, -.525);
	glVertex2f(.71,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.74, -.525);
	glVertex2f(.82,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.85, -.525);
	glVertex2f(.93,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.96, -.525);
	glVertex2f(1,-.525);
	glEnd();




//medicle camp


glBegin(GL_QUADS);
glColor3ub (230, 255, 230);
glVertex2f(.7, .75);
glVertex2f( .7,.41);

glVertex2f(.89,.41);
glVertex2f(.89, .75);
glEnd();
glBegin(GL_QUADS);
glColor3ub (255, 255, 255);
glVertex2f(.68, .8);
glVertex2f( .68,.75);

glVertex2f(.91,.75);
glVertex2f(.91, .8);
glEnd();

glBegin(GL_QUADS);
glColor3ub (85, 128, 0);
glVertex2f(.78, .65);
glVertex2f( .78,.41);

glVertex2f(.82,.41);
glVertex2f(.82, .65);
glEnd();
glBegin(GL_QUADS);
glColor3ub (85, 128, 0);
glVertex2f(.72, .63);
glVertex2f( .72,.55);

glVertex2f(.76,.55);
glVertex2f(.76, .63);
glEnd();
glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glColor3ub (85, 128, 0);
glVertex2f(.72, .63);
glVertex2f( .72,.55);

glVertex2f(.76,.55);
glVertex2f(.76, .63);
glEnd();
glLoadIdentity();
glLineWidth(9);
glBegin(GL_LINES);
	glColor3ub (255, 0, 0);
	glVertex2f(.8,.665);
	glVertex2f(.8,.73);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (255,0,0);
	glVertex2f(.78,.695);
	glVertex2f(.82,.695);
	glEnd();
	//medical camp end


	 // watch tower start
	 glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub (77, 38, 0);
	glVertex2f(.29,.75);
	glVertex2f(.29,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (77, 38, 0);
	glVertex2f(.18,.75);
	glVertex2f(.18,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (153, 153, 102);
	glVertex2f(.16,.75);
	glVertex2f(.31,.75);
	glEnd();
	glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub (0,0,0);
	glVertex2f(.295,.86);
	glVertex2f(.295,.756);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0,0,0);
	glVertex2f(.185,.86);
	glVertex2f(.185,.756);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub (245, 102, 20);
	glVertex2f(.17,.86);
	glVertex2f(.31,.86);
	glVertex2f(.235,.96);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub (51, 0, 0);
	glVertex2f(.21,.82);
	glVertex2f(.21,.76);
	glVertex2f(.27,.76);
	glVertex2f(.27,.82);
	glEnd();

	glLineWidth(9);
	glBegin(GL_LINES);
	glColor3ub (51, 0, 0);
	glVertex2f(.216,.86);
	glVertex2f(.216,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 0, 0);
	glVertex2f(.263,.86);
	glVertex2f(.263,.82);
	glEnd();
	 glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.76);
	glVertex2f(.161,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.175,.76);
	glVertex2f(.175,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.189,.76);
	glVertex2f(.189,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.82);
	glVertex2f(.31,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.31,.76);
	glVertex2f(.31,.82);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.79);
	glVertex2f(.31,.79);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.29,.76);
	glVertex2f(.29,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.26,.76);
	glVertex2f(.26,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.22,.76);
	glVertex2f(.22,.82);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.215,.74);
	glVertex2f(.215,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.74);
	glVertex2f(.255,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.53);
	glVertex2f(.215,.53);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.56);
	glVertex2f(.215,.56);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.59);
	glVertex2f(.215,.59);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.62);
	glVertex2f(.215,.62);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.65);
	glVertex2f(.215,.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.68);
	glVertex2f(.215,.68);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.71);
	glVertex2f(.215,.71);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.73);
	glVertex2f(.215,.73);
	glEnd();               //watch tower end


	    /* Watch */

    glTranslatef(-0.505f, -0.3f, 0.0f);
    glScalef(0.5,0.8,0);
	glBegin(GL_QUADS);              // Watch Vertical Back Body
	glColor3ub(17, 28, 84); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

glLoadIdentity();
glLineWidth(2.5);

glTranslatef(-0.5,0.1,1.0);
glScalef(0.0028,0.0028,1.0);


int i3w;                              // Watch outside circle shape


    GLfloat xw=0.0f; GLfloat yw=0.0f; GLfloat radiusw =24.5f;
	int triangleAmountw = 100;

	GLfloat twicePiw = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(xw, yw);
		for(i3w = 0; i3w <=triangleAmountw;i3w++) {
			glVertex2f(
		            xw + (radiusw * cos(i3w *  twicePiw / triangleAmountw)),
			    yw + (radiusw * sin(i3w * twicePiw / triangleAmountw))
			);
		}
	glEnd();

	GLfloat xww=0.0f; GLfloat yww=0.0f; GLfloat radiusww =23.0f;

	int lineAmountww = 100;

	GLfloat twicePiww = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i3w = 0; i3w<=lineAmountww;i3w++) {
			glVertex2f(
			    xww + (radiusww * cos(i3w *  twicePiww / lineAmountww)),
			    yww + (radiusww * sin(i3w * twicePiww / lineAmountww))
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

    GLfloat xwww=0.0f; GLfloat ywww=0.0f; GLfloat radiuswww =1.5f;
	int triangleAmountwww = 50;

	GLfloat twicePiwww = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(xwww, ywww);
		for(i4 = 0; i4 <=triangleAmountwww;i4++) {
			glVertex2f(
		            xwww + (radiuswww * cos(i4 *  twicePiwww / triangleAmountwww)),
			    ywww + (radiuswww * sin(i4 * twicePiwww / triangleAmountwww))
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
    i5+=-0.02f;
    glLoadIdentity();

 glTranslatef(-0.5,0.1,1.0);
    glScalef(0.0028,0.0028,1.0);
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
    i6+=-0.000333333f;
    glLoadIdentity();

glTranslatef(-0.5,0.1,1.0);
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
    i7+=-0.000005555f;
    glLoadIdentity();

//Watch ends


  //car start


glPushMatrix();                        //to move car
glTranslatef(positionC,0,0);


  glBegin(GL_POLYGON);
	glColor3ub (51, 51, 0);
	glVertex2f( -.7,-.4);          //car

glVertex2f(-.7,-.65);
glVertex2f(-.34, -.65);
glVertex2f(-.34, -.56);
glVertex2f(-.42, -.54);
glVertex2f(-.47, -.4);


	glEnd();



int w;

	GLfloat x99=-.63f; GLfloat y99=-.65f; GLfloat radius99=.045f;
	int triangleAmount99 = 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi99 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x99, y99); // center of circle
		for(w = 0; w <= triangleAmount99;w++) {
			glVertex2f(
		            x99 + (radius99 * cos(w *  twicePi99 / triangleAmount99)),
			    y99 + (radius99 * sin(w * twicePi99 / triangleAmount99))
			);
		}
	glEnd();

int w1;

	GLfloat x999=-.63f; GLfloat y999=-.65f; GLfloat radius999=.03f;
	int triangleAmount999= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi999 = 2.0f * PI;
  glColor3ub (0,0,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x999, y999); // center of circle
		for(w1= 0; w1 <= triangleAmount999;w1++) {
			glVertex2f(
		            x999 + (radius999 * cos(w1 *  twicePi999 / triangleAmount999)),
			    y999 + (radius999 * sin(w1 * twicePi999 / triangleAmount999))
			);
		}
	glEnd();
int w11;

	GLfloat x9999=-.63f; GLfloat y9999=-.65f; GLfloat radius9999=.012f;
	int triangleAmount9999= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9999 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9999, y9999); // center of circle
		for(w11= 0; w11 <= triangleAmount9999;w11++) {
			glVertex2f(
		            x9999 + (radius9999 * cos(w11 *  twicePi9999 / triangleAmount9999)),
			    y9999 + (radius9999 * sin(w11 * twicePi9999 / triangleAmount9999))
			);
		}
	glEnd();

int w2;

	GLfloat x992=-.43f; GLfloat y992=-.65f; GLfloat radius992=.045f;
	int triangleAmount992 = 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi992 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x992, y992); // center of circle
		for(w2 = 0; w2 <= triangleAmount992;w2++) {
			glVertex2f(
		            x992 + (radius992 * cos(w2 *  twicePi992 / triangleAmount992)),
			    y992 + (radius992 * sin(w2 * twicePi992 / triangleAmount992))
			);
		}
	glEnd();

int w13;

	GLfloat x9993=-.43f; GLfloat y9993=-.65f; GLfloat radius9993=.03f;
	int triangleAmount9993= 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9993 = 2.0f * PI;
  glColor3ub (0,0,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9993, y9993); // center of circle
		for(w13= 0; w13 <= triangleAmount9993;w13++) {
			glVertex2f(
		            x9993 + (radius999 * cos(w13 *  twicePi999 / triangleAmount9993)),
			    y9993+ (radius9993 * sin(w13 * twicePi9993 / triangleAmount9993))
			);
		}
	glEnd();
int w113;

	GLfloat x99993=-.43f; GLfloat y99993=-.65f; GLfloat radius99993=.012f;
	int triangleAmount99993= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi99993 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x99993, y99993); // center of circle
		for(w113= 0; w113 <= triangleAmount99993;w113++) {
			glVertex2f(
		            x99993 + (radius99993 * cos(w113 *  twicePi99993 / triangleAmount99993)),
			    y99993 + (radius99993 * sin(w113 * twicePi99993 / triangleAmount99993))
			);
		}
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub (128, 85, 0);
	glVertex2f( -.67,-.45);          //car window

glVertex2f(-.67,-.54);
glVertex2f(-.61, -.54);
glVertex2f(-.61, -.45);




	glEnd();
	glTranslatef(.12,0,0);
glBegin(GL_QUADS);
	glColor3ub (128, 85, 0);
	glVertex2f( -.67,-.45);          // car window

glVertex2f(-.67,-.54);
glVertex2f(-.61, -.54);
glVertex2f(-.61, -.45);

	glEnd();

	glPopMatrix();

	glLoadIdentity();        // car end



  //tree start
  glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glTranslatef(.15,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.30,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.45,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.6,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.15,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.30,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.45,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.6,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.95,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
                 //tree END

    //Helicopter start
    int z1;

	GLfloat x88=.81f; GLfloat y88=.03f; GLfloat radius88=.2f;
	int triangleAmount88= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi88 = 2.0f * PI;
  glColor3ub (0, 77, 26);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x88, y88); // center of circle
		for(z1= 0; z1 <= triangleAmount88;z1++) {
			glVertex2f(
		            x88 + (radius88 * cos(z1*  twicePi88 / triangleAmount88)),
			    y88 + (radius88 * sin(z1 * twicePi88 / triangleAmount88))
			);
		}
	glEnd();
	glBegin(GL_POLYGON);
glColor3ub (240, 212, 34);



glVertex2f(.76, .16);
glVertex2f(.71, .16);

glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);

glVertex2f(.76, .01);
glEnd();
glBegin(GL_QUADS);
glColor3ub (59, 43, 196);

glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);

glEnd();
glBegin(GL_QUADS);
glColor3ub (105, 112, 0);

glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);

glEnd();
glBegin(GL_QUADS);
glColor3ub (240, 212, 34);    //last part of helicopter body

glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (240, 212, 34);    //last part pf helicopter body

glVertex2f(.89, .13);

glVertex2f(.9, .05);
glVertex2f(.91, .13);

glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.74, .13);
glVertex2f(.74, .03);

glVertex2f(.77, .03);
glVertex2f(.77, .13);

glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.78, .1);
glVertex2f(.78, .05);

glVertex2f(.8, .05);
glVertex2f(.8, .1);

glEnd();
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.78, .1);
glVertex2f(.78, .05);

glVertex2f(.8, .05);
glVertex2f(.8, .1);

glEnd();
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.71, 0.01);

glVertex2f(.71, -.02);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.725, 0.01);

glVertex2f(.725, -.05);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.8, 0.01);

glVertex2f(.8, -.02);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.815, 0.01);

glVertex2f(.815, -.05);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.69, -.020);

glVertex2f(.815,-.020);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.71, -.05);

glVertex2f(.83, -.05);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (255, 255, 255);

glVertex2f(.735, 0.16);

glVertex2f(.735,.18);
glEnd();
int i3;

	GLfloat xz=.735f; GLfloat yz=.18f; GLfloat radiusz =.012f;
	int triangleAmountz = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiz = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xz, yz); // center of circle
		for(i3 = 0; i3 <= triangleAmountz;i3++) {
			glVertex2f(
		            xz + (radiusz* cos(i3 *  twicePiz / triangleAmountz)),
			    yz + (radiusz* sin(i3 * twicePiz / triangleAmountz))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);

glVertex2f(.735, .18);

glVertex2f(.6, .195);
glVertex2f(.6, .165);

glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);

glVertex2f(.735, .18);

glVertex2f(.865, .195);
glVertex2f(.865, .165);

glEnd();

// HELICOPTER END




glLoadIdentity();
/*glLineWidth(9);
glBegin(GL_LINES);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(0, -.3);
	glVertex2f(0,-.25);
	glEnd();
 glBegin(GL_LINES);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(.31, -.3);
	glVertex2f(.31,-.25);
	glEnd();
glBegin(GL_QUADS);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(-.1, -.17);
	glVertex2f(-.1,-.25);
	glVertex2f(.39, -.25);
	glVertex2f(.39,-.17);
	glEnd();*/


glBegin(GL_QUADS);                  // shooting car
	glColor3ub (51, 51, 0);
	glVertex2f(0.0, -.05);
	glVertex2f(0.0,-.2);
	glVertex2f(.35, -.2);
	glVertex2f(.35,-.05);
	glEnd();

	glBegin(GL_POLYGON);                  // shooting car
	glColor3ub (105, 112, 0);
	glVertex2f(0.04, -.20);
	glVertex2f(0.06,-.23);
	glVertex2f(.08, -.26);
	glVertex2f(.27,-.26);
	glVertex2f(.29,-.23);
	glVertex2f(.31,-.20);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (105, 112, 0);
	glVertex2f(0.27, .03);
	glVertex2f(0.27,-0.035);
	glVertex2f(.4, -.01);
	glVertex2f(.4,.01);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (105, 112, 0);
	glVertex2f(0.12, .09);
	glVertex2f(0.12,.055);
	glVertex2f(.2, .055);
	glVertex2f(.2,.09);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (51, 51, 0);
	glVertex2f(0.06, -.05);
	glVertex2f(0.05,.055);
	glVertex2f(.3, .055);
	glVertex2f(.28,-.05);
	glEnd();
glLineWidth(5);

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.98, -.3);
	glVertex2f(-.98,-.15);
	glEnd();

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.95, -.3);
	glVertex2f(-.95,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.92, -.3);
	glVertex2f(-.92,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.89, -.3);
	glVertex2f(-.89,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.86, -.3);
	glVertex2f(-.86,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.83, -.3);
	glVertex2f(-.83,-.15);
	glEnd();
glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.8, -.3);
	glVertex2f(-.8,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.77, -.3);
	glVertex2f(-.77,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.74, -.3);
	glVertex2f(-.74,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.71, -.3);
	glVertex2f(-.71,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.68, -.3);
	glVertex2f(-.68,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.65, -.3);
	glVertex2f(-.65,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.62, -.3);
	glVertex2f(-.62,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.59, -.3);
	glVertex2f(-.59,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.56, -.3);
	glVertex2f(-.56,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.53, -.3);
	glVertex2f(-.53,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.505, -.3);
	glVertex2f(-.505,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.48, -.3);
	glVertex2f(-.48,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.45, -.3);
	glVertex2f(-.45,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.42, -.3);
	glVertex2f(-.42,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.39, -.3);
	glVertex2f(-.39,-.15);
	glEnd();glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.36, -.3);
	glVertex2f(-.36,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.33, -.3);
	glVertex2f(-.33,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.31, -.3);
	glVertex2f(-.31,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.28, -.3);
	glVertex2f(-.28,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.25, -.3);
	glVertex2f(-.25,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.22, -.3);
	glVertex2f(-.22,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.19, -.3);
	glVertex2f(-.19,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.16, -.3);
	glVertex2f(-.16,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.13, -.3);
	glVertex2f(-.13,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.10, -.3);
	glVertex2f(-.10,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.07, -.3);
	glVertex2f(-.07,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.04, -.3);
	glVertex2f(-.04,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.01, -.3);
	glVertex2f(-.01,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.02, -.3);
	glVertex2f(.02,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.05, -.3);
	glVertex2f(.05,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.08, -.3);
	glVertex2f(.08,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.11, -.3);
	glVertex2f(.11,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.14, -.3);
	glVertex2f(.14,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.17, -.3);
	glVertex2f(.17,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.20, -.3);
	glVertex2f(.20,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.23, -.3);
	glVertex2f(.23,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.26, -.3);
	glVertex2f(.26,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.29, -.3);
	glVertex2f(.29,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.32, -.3);
	glVertex2f(.32,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.35, -.3);
	glVertex2f(.35,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.38, -.3);
	glVertex2f(.38,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.41, -.3);
	glVertex2f(.41,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.44, -.3);
	glVertex2f(.44,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.47, -.3);
	glVertex2f(.47,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.5, -.3);
	glVertex2f(.5,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.53, -.3);
	glVertex2f(.53,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.55, -.3);
	glVertex2f(.55,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.58, -.3);
	glVertex2f(.58,-.15);
	glEnd();

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.61, -.3);
	glVertex2f(.61,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.64, -.3);
	glVertex2f(.64,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.67, -.3);
	glVertex2f(.67,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.7, -.3);
	glVertex2f(.7,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.73, -.3);
	glVertex2f(.73,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.76, -.3);
	glVertex2f(.76,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.79, -.3);
	glVertex2f(.79,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.82, -.3);
	glVertex2f(.82,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.85, -.3);
	glVertex2f(.85,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.88, -.3);
	glVertex2f(.88,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.91, -.3);
	glVertex2f(.91,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.94, -.3);
	glVertex2f(.94,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.97, -.3);
	glVertex2f(.97,-.15);
	glEnd();
glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-1, -.19);
	glVertex2f(1,-.19);
	glEnd();              //roadside border end


   //river side
   glPushMatrix();
glTranslatef(position,0,0);
glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.9, -.9);
	glVertex2f(-0.87,-.97);
	glVertex2f(-.5, -.97);
	glVertex2f(-.45,-.85);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (107, 107, 71);
	glVertex2f(-0.86, -.84);
	glVertex2f(-0.86,-.9);
	glVertex2f(-.55, -.865);
	glVertex2f(-.55,-.81);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.78, -.78);
	glVertex2f(-0.79,-.84);
	glVertex2f(-.63, -.82);
	glVertex2f(-.62,-.73);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.72, -.74);
	glVertex2f(-0.73,-.77);
	glVertex2f(-.66, -.745);
	glVertex2f(-.65,-.7);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.64, -.77);
	glVertex2f(-0.57,-.71);

	glEnd();
	glPopMatrix() ;          //ship end
	// bridge line

	glBegin(GL_TRIANGLES);
	glColor3ub (0, 0, 0);
	glVertex2f(-0.988, -.05);
	glVertex2f(-0.97,.05);
	glVertex2f(-1,.05);

	glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub (255, 51, 0);

	glVertex2f(-0.97,.05);
	glVertex2f(-0.988, .15);
	glVertex2f(-1,.05);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(-0.99, -1);
	glVertex2f(-0.99,-.02);

	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub (0, 0, 0);
	glVertex2f(0.988, -.05);
	glVertex2f(0.97,.05);
	glVertex2f(1,.05);

	glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub (255, 51, 0);

	glVertex2f(0.97,.05);
	glVertex2f(0.988, .15);
	glVertex2f(1,.05);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(0.99, -1);
	glVertex2f(0.99,-.02);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(-0.07, -.7);
	glVertex2f(-0.07,-.18);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(0.14, -.35);
	glVertex2f(0.14,-.02);

	glEnd();
	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(-0.07, -.19);
	glVertex2f(0.14,-.028);

	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(-0.074, -.18);
	glVertex2f(-.98,-.7);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(0.13, -.030);
	glVertex2f(-.98,-.35);

	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(-0.074, -.18);
	glVertex2f(.98,-.7);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(0.13, -.030);
	glVertex2f(.98,-.35);

	glEnd();


	glLoadIdentity();

glLineWidth(1.0);

glTranslatef(-positionR,-positionR,0);
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




void Rain_LOOP(int a){
glutDisplayFunc(myDisplayRain);
}




void myDisplayNight(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);
glLineWidth(9);
glPointSize(5.0);




 glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, .95f);
    glVertex2f(-1.0f, .95f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .95f);
    glVertex2f(1.0f, .95f);
    glVertex2f(1.0f, .90f);
    glVertex2f(-1.0f, .90f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .90f);
    glVertex2f(1.0f, .90f);
    glVertex2f(1.0f, .85f);
    glVertex2f(-1.0f, .85f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .85f);
    glVertex2f(1.0f, .85f);
    glVertex2f(1.0f, .80f);
    glVertex2f(-1.0f, .80f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .80f);
    glVertex2f(1.0f, .80f);
    glVertex2f(1.0f, .70f);
    glVertex2f(-1.0f, .70f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .70f);
    glVertex2f(1.0f, .70f);
    glVertex2f(1.0f, .60f);
    glVertex2f(-1.0f, .60f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .60f);
    glVertex2f(1.0f, .60f);
    glVertex2f(1.0f, .40f);
    glVertex2f(-1.0f, .40f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 224, 255);
    glVertex2f(-1.0, .40f);
    glVertex2f(1.0f, .40f);
    glVertex2f(1.0f, .15f);
    glVertex2f(-1.0f, .15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, .15f);
    glVertex2f(1.0f, .15f);
    glVertex2f(1.0f, -.15f);
    glVertex2f(-1.0f, -.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(1, 1, 1);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();                              //sky end


//star starts

glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,0.95f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(0.95f,0.7f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.7f,0.9f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.5f,0.75f);
    glVertex2f(0.4f,0.9f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.15f,0.75f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.9f,0.9f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.5f,0.75f);
    glVertex2f(-0.4f,0.9f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.15f,0.75f);
    glVertex2f(-0.1f,0.9f);
    glEnd();


//star ends

//moon starts

glPushMatrix();
glTranslatef(0,positionMoon,0);
  int iMoon;

	GLfloat xm=-.5f; GLfloat ym=.9f; GLfloat radiusm =.06f;
    int triangleAmountM = 20;
	GLfloat twicePiM = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(242, 242, 242);
		glVertex2f(xm, ym); // center of circle
		for(iMoon = 0; iMoon <= triangleAmountM;iMoon++) {
			glVertex2f(
		            xm + (radiusm * cos(iMoon *  twicePiM / triangleAmountM)),
			    ym + (radiusm * sin(iMoon * twicePiM / triangleAmountM))
			);
		}
	glEnd();

GLfloat xx=-.5f; GLfloat yx=.93f; GLfloat radiusx =.06f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(1, 1, 1);
		glVertex2f(xx, yx); // center of circle
		for(iMoon = 0; iMoon <= triangleAmountM;iMoon++) {
			glVertex2f(
		            xx + (radiusx * cos(iMoon *  twicePiM / triangleAmountM)),
			    yx + (radiusx * sin(iMoon * twicePiM / triangleAmountM))
			);
		}
	glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(position,0,0);


int e;                                                             //cloud

	GLfloat x611=-.42f; GLfloat y611=.94f; GLfloat radius611=.03f;
	int triangleAmount611 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi611 = 2.0f * PI;
  glColor3ub (148, 156, 148);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x611, y611); // center of circle
		for(e= 0; e<= triangleAmount611;e++) {
			glVertex2f(
		            x611 + (radius611 * cos(e *  twicePi611 / triangleAmount611)),
			    y611 + (radius611 * sin(e* twicePi611 / triangleAmount611))
			);
		}
	glEnd();
	int f;                                                             //cloud

	GLfloat x6112=-.47f; GLfloat y6112=.94f; GLfloat radius6112=.03f;
	int triangleAmount6112 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6112 = 2.0f * PI;
  glColor3ub (148, 156, 148);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6112, y6112); // center of circle
		for(f= 0; f<= triangleAmount6112;f++) {
			glVertex2f(
		            x6112 + (radius6112 * cos(f *  twicePi6112 / triangleAmount6112)),
			    y6112 + (radius6112 * sin(f* twicePi6112 / triangleAmount6112))
			);
		}
	glEnd();
	int g;                                                             //cloud

	GLfloat x613=-.44f; GLfloat y613=.91f; GLfloat radius613=.03f;
	int triangleAmount613 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi613 = 2.0f * PI;
  glColor3ub (148, 156, 148);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x613, y613); // center of circle
		for(g= 0; g<= triangleAmount613;g++) {
			glVertex2f(
		            x613 + (radius613 * cos(g *  twicePi613 / triangleAmount613)),
			    y613 + (radius613 * sin(g* twicePi613 / triangleAmount613))
			);
		}
	glEnd();
int b;                                                             //cloud

	GLfloat x616=.42f; GLfloat y616=.96f; GLfloat radius616=.03f;
	int triangleAmount616 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi616= 2.0f * PI;
  glColor3ub (148, 156, 148);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x616, y616); // center of circle
		for(b= 0; b<= triangleAmount616;b++) {
			glVertex2f(
		            x616 + (radius616 * cos(b *  twicePi616 / triangleAmount616)),
			    y616 + (radius616 * sin(b* twicePi616 / triangleAmount616))
			);
		}
	glEnd();
	int z;                                                             //cloud
float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.9f, yC= 0.93f, radiusC =.05f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(148, 156, 148);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.83f, yC= 0.93f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(148, 156, 148);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.87f, yC= 0.9f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(148, 156, 148);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();

	GLfloat x6114=.47f; GLfloat y6114=.94f; GLfloat radius6114=.03f;
	int triangleAmount6114 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6114 = 2.0f * PI;
  glColor3ub (148, 156, 148);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6114, y6114); // center of circle
		for(z= 0; z<= triangleAmount6114;z++) {
			glVertex2f(
		            x6114+ (radius6114 * cos(z *  twicePi6114 / triangleAmount6114)),
			    y6114 + (radius6114 * sin(z* twicePi6114 / triangleAmount6114))
			);
		}
	glEnd();
	int c;                                                             //cloud

	GLfloat x615=.44f; GLfloat y615=.91f; GLfloat radius615=.03f;
	int triangleAmount615 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi615 = 2.0f * PI;
  glColor3ub (148, 156, 148);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x615, y615); // center of circle
		for(c= 0; c<= triangleAmount615;c++) {
			glVertex2f(
		            x615 + (radius615 * cos(c *  twicePi615 / triangleAmount615)),
			    y615 + (radius615 * sin(c* twicePi615 / triangleAmount615))
			);
		}
	glEnd();
	glTranslatef(-1.2,1.0,0.0);


glColor3ub(148, 156, 148);


GLfloat x1x=0.6f; GLfloat y1y=-0.2f; GLfloat radius1s =.08f; // cloud right circle


int triangleAmount22 = 20;


GLfloat twicePi22 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(x1x, y1y);


for(int i = 0; i <= triangleAmount22; i++)


glVertex2f(x1x + (radius1s * cos(i * twicePi22 / triangleAmount22)),y1y + (radius1s * sin(i * twicePi22 / triangleAmount22)));


glEnd();





glColor3ub(148, 156, 148);


GLfloat x1x1=0.5f; GLfloat y1y1=-0.2f; GLfloat radiuss11 =.1f; // cloud middle circle


int triangleAmount211 = 20;


GLfloat twicePi221 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(x1x1, y1y1);


for(int i = 0; i <= triangleAmount211; i++)


glVertex2f(x1x1 + (radiuss11 * cos(i * twicePi221 / triangleAmount211)),y1y1 + (radiuss11 * sin(i * twicePi221 / triangleAmount211)));


glEnd();





glColor3ub(148, 156, 148);


GLfloat xx2=0.4f; GLfloat yy2=-0.2f; GLfloat radiuss2 =.08f; // cloud left circle


int triangleAmount212 = 20;


GLfloat twicePi212 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(xx2, yy2);


for(int i = 0; i <= triangleAmount212; i++)


glVertex2f(xx2 + (radiuss2 * cos(i * twicePi212 / triangleAmount212)),yy2 + (radiuss2 * sin(i * twicePi212 / triangleAmount212)));


glEnd();



	glPopMatrix();                 //cloud finish

glBegin(GL_QUADS);
glColor3ub (42, 84, 44);
glVertex2f(-1, .7);
glVertex2f( -1,-.3);          //basepart

glVertex2f(1,-.30);
glVertex2f(1, .70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (133, 123, 123);
glVertex2f(-.45, .5);
glVertex2f( -.45,-.3);          //basepart

glVertex2f(1,-.30);
glVertex2f(1, .50);
glEnd();

glBegin(GL_LINES);
glColor3ub (92, 138, 138);

glVertex2f(-.45, .505);

glVertex2f(-.45, -.3);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);               //court boundary
glColor3ub (92, 138, 138);

glVertex2f(-.45, .495);          //court boundary

glVertex2f(-1, .495);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);
glColor3ub (92, 138, 138);

glVertex2f(-.7, .495);

glVertex2f(-.7, -.3);
glEnd();




	glBegin(GL_QUADS);
glColor3ub (42, 84, 44);
glVertex2f(-.457, .479);
glVertex2f( -1,.479);          //football court

glVertex2f(-1,-.30);
glVertex2f(-.457, -.30);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);          // football court center line
glColor3ub (219, 219, 173);

glVertex2f(-.75, .476);

glVertex2f(-.75, -.3);
glEnd();

int i;                              //football court center

	GLfloat x=-.75f; GLfloat y=.1f; GLfloat radius =.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
  glColor3ub (219, 219, 173);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glTranslatef(-.8,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (219, 219, 173);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (219, 219, 173);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
	glTranslatef(-.6,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (219, 219, 173);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);                     //ring
glVertex2f(-.43, .21);
	glVertex2f(-.43, .49);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);                     //ring
glVertex2f(-.32, .21);
	glVertex2f(-.32, .49);
glEnd();
GLfloat x7=-.35f; GLfloat y7=.31f; GLfloat radius7 =.03f;
	int p;
	int lineAmount = 200;

	GLfloat twicePi7 = 2.0f * PI;
glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(p = 0; p <= lineAmount;p++) {
			glVertex2f(
			    x7 + (radius7 * cos(p *  twicePi7 / lineAmount)),
			    y7 + (radius7* sin(p * twicePi7 / lineAmount))
			);
		}
		glEnd();

		GLfloat x8=-.404f; GLfloat y8=.31f; GLfloat radius8 =.03f;
	int q;
	int lineAmount1 = 200;

	GLfloat twicePi8 = 2.0f * PI;
glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(q= 0; q <= lineAmount;q++) {
			glVertex2f(
			    x8 + (radius8 * cos(q *  twicePi8 / lineAmount1)),
			    y8 + (radius8* sin(q * twicePi8 / lineAmount1))
			);
		}
		glEnd();

		GLfloat x9=-.375f; GLfloat y9=.36f; GLfloat radius9 =.03f;
	int r;
	int lineAmount2 = 190;

	GLfloat twicePi9 = 2.0f * PI;
    glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(r = 0; r <= lineAmount2;r++) {
			glVertex2f(
			    x9 + (radius9 * cos(r *  twicePi9 / lineAmount2)),
			    y9 + (radius9* sin(r * twicePi9 / lineAmount2))
			);
		}
		glEnd();
glBegin(GL_LINES);
glColor3ub (41, 48, 42);                     //ring
glVertex2f(-.31, -.2);
	glVertex2f(-.42, -.2);
glEnd();

glBegin(GL_LINES);                  //flag


glVertex2f(-.17, .7);
	glVertex2f(-.17, .52);

glEnd();

glBegin(GL_QUADS);                  //flag

glColor3ub (41, 48, 42);
glVertex2f(-.17, .7);
	glVertex2f(-.25, .7);
	glVertex2f(-.25, .6);
	glVertex2f(-.17, .6);

glEnd();
int s;

	GLfloat x10=-.21f; GLfloat y10=.65f; GLfloat radius10=.02f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;
  glColor3ub (133, 123, 123);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(s= 0; s <= triangleAmount10;s++) {
			glVertex2f(
		            x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(s* twicePi10 / triangleAmount10))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (41, 48, 42);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
glTranslatef(+.5,0,0);
	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (41, 48, 42);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
	glLoadIdentity();

	glTranslatef(+.3,0,0);

	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (41, 48, 42);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
	glLoadIdentity();


    glBegin(GL_POLYGON);  //hill
    glColor3ub(41, 48, 42);
    glVertex2f(-.9,.7);
    glVertex2f(-.535,.7);
    glVertex2f(-.57,.8);
    glVertex2f(-.7,.85);
    glVertex2f(-.8,.97);

    glEnd();
    glTranslatef(.55,0,0);  //hills
     glBegin(GL_POLYGON);
    glColor3ub(41, 48, 42);
    glVertex2f(-.9,.7);
    glVertex2f(-.535,.7);
    glVertex2f(-.57,.8);
    glVertex2f(-.7,.85);
    glVertex2f(-.8,.97);

    glEnd();
 glLoadIdentity();
  glBegin(GL_POLYGON);
    glColor3ub(41, 48, 42);  //hill
    glVertex2f(-.1,.7);
    glVertex2f(.5,.7);
    glVertex2f(.4,.97);
    glVertex2f(.3,.91);
    glVertex2f(.15,.86);
    glVertex2f(.05,.99);
 glVertex2f(-.05,.93);

    glEnd();
     glTranslatef(.49,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(41, 48, 42);    //hill
    glVertex2f(-.1,.7);
    glVertex2f(.5,.7);
    glVertex2f(.4,.97);
    glVertex2f(.3,.91);
    glVertex2f(.15,.86);
    glVertex2f(.05,.99);
 glVertex2f(-.05,.93);

    glEnd();
    glLoadIdentity();
    glTranslatef(.05,0,0);
    glBegin(GL_POLYGON);
	glColor3ub (219, 219, 173);
	glVertex2f( .55,.75);          //big tent

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);  //tent line
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);  //tent line
	glColor3ub (1, 1, 1);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();


	//BackFatTrees
    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.52f,0.45f);
	glVertex2f(-0.48f, 0.45f);
	glVertex2f(-0.48f,0.62f);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glVertex2f(-0.58f,0.6f);
	glVertex2f(-0.55f, 0.63f);
	glVertex2f(-0.58f,0.66f);
	glVertex2f(-0.52f,0.66f);
	glVertex2f(-0.52f, 0.72f);
	glVertex2f(-0.5f,0.69f);///
	glVertex2f(-0.48f,0.72f);
	glVertex2f(-0.48f, 0.66f);
	glVertex2f(-0.42f,0.66f);
	glVertex2f(-0.45f,0.63f);
	glVertex2f(-0.42f, 0.6f);
	glVertex2f(-0.48f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(0.52f,0.45f);
	glVertex2f(0.48f, 0.45f);
	glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();
     glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glVertex2f(0.58f,0.6f);
	glVertex2f(0.55f, 0.63f);
	glVertex2f(0.58f,0.66f);
	glVertex2f(0.52f,0.66f);
	glVertex2f(0.52f, 0.72f);
	glVertex2f(0.5f,0.69f);///
	glVertex2f(0.48f,0.72f);
	glVertex2f(0.48f, 0.66f);
	glVertex2f(0.42f,0.66f);
	glVertex2f(0.45f,0.63f);
	glVertex2f(0.42f, 0.6f);
	glVertex2f(0.48f,0.62f);
    glEnd();

  	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);///
    glVertex2f(-0.68f, 0.64);
     glVertex2f(-0.6f,0.6f);
     glVertex2f(-0.57f, 0.56);
     glVertex2f(-0.52f, 0.5f);
     glVertex2f(-0.5f,0.45f);
     glVertex2f(-1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.0f,0.45f);
	glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67);///
    glVertex2f(0.68f, 0.64);
     glVertex2f(0.6f,0.6f);
     glVertex2f(0.57f, 0.56);
     glVertex2f(0.52f, 0.5f);
     glVertex2f(0.5f,0.45f);
     glVertex2f(1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.5f,0.45f);
	glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);///
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
     glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.5f,0.45f);
	glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);///
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
     glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-.25f,0.45f);
	glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67);///
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f,0.45f);
	glEnd();

//BackFatTree End


	glBegin(GL_QUADS);
glColor3ub (41, 48, 42);
glVertex2f(-.15, .6);
glVertex2f( -.15,.3);          //house

glVertex2f(.15,.3);
glVertex2f(.15, .6);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f( -.165,.6);    //house
glVertex2f(.165,.6);
glVertex2f(0, .74);
glEnd();

glBegin(GL_QUADS);
glColor3ub (8, 46, 18);
glVertex2f(-.12, .6);
glVertex2f( -.12,.3);   //house

glVertex2f(.12,.3);
glVertex2f(.12, .6);
glEnd();

glBegin(GL_QUADS);
glColor3ub (242, 245, 95);
glVertex2f(-.1, .65);  //house
glVertex2f( -.1,.61);
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (242, 245, 95);
glVertex2f(-.1, .65);              //house
glVertex2f( -.1,.61);

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();

glTranslatef(.06,0,0);
glBegin(GL_QUADS);
glColor3ub (242, 245, 95);              //house
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.09,0,0);
glBegin(GL_QUADS);
glColor3ub (242, 245, 95);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);                //house

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glColor3ub (242, 245, 95);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);
                                            //house
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.15,0,0);
glBegin(GL_QUADS);
glColor3ub (242, 245, 95);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.18,0,0);
glBegin(GL_QUADS);
glColor3ub (242, 245, 95);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);          //house

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glTranslatef(0.03,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();

glTranslatef(0.06,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.09,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.12,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.15,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();

glLineWidth(4);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.159, .3);
glVertex2f( .159,.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub (255, 255, 255);
glVertex2f(-.1, .5);
glVertex2f( -.1,.4);          //house

glVertex2f(-.05,.4);
glVertex2f(-.05, .5);
glEnd();
glTranslatef(.15,0,0);
glBegin(GL_QUADS);
glColor3ub (255, 255, 255);
glVertex2f(-.1, .5);
glVertex2f( -.1,.4);          //house

glVertex2f(-.05,.4);
glVertex2f(-.05, .5);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);
glColor3ub (255, 255, 255);
glVertex2f(-.02, .5);
glVertex2f( -.02,.3);          //house

glVertex2f(.02,.3);
glVertex2f(.02, .5);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2f( -.24,.3);          //house

glVertex2f(-.22,.3);
glVertex2f(-.23, .6);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.26, .3);
glVertex2f( -.21,.3);
glEnd();


//Circle-Tree Begins

glTranslatef(0.3,-0.15,0);
glScalef(0.7,0.7,0);
glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.72f,-0.15f);
    glVertex2f(-0.65f,-0.2f);
    glVertex2f(-0.735f,-0.17f);
    glVertex2f(-0.74f,-0.25f);
    glVertex2f(-0.775f,-0.17f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.78f,-0.15f);
    //glVertex2f(-0.7f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,-0.15f);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.72f,0.23f);
    glVertex2f(-0.72f,-0.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.76f,0.23f);
    glVertex2f(-0.76f,0.3f);
    glVertex2f(-0.74f,0.3f);
    glVertex2f(-0.74f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.74f,0.23f);
    glVertex2f(-0.71f,0.29f);
    glVertex2f(-0.7f,0.28f);
    glVertex2f(-0.72f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.8f,0.28f);
    glVertex2f(-0.79f,0.29f);
    glVertex2f(-0.76f,0.23f);
    glEnd();

     int iTree;

	GLfloat xT=-.75f; GLfloat yT=.33f; GLfloat radiusT =.06f;
	int triangleAmountT = 20;
	GLfloat twicePiT = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(xT, yT); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            xT + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    yT + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

GLfloat a1=-.68f; GLfloat b1=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(a1, b1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            a1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    b1 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat c1=-.81f; GLfloat d1=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(c1, d1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            c1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    d1 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e1=-.87f; GLfloat f1=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(e1, f1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f1+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat g1=-.61f; GLfloat h1=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(g1, h1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            g1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    h1+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat a69=-.61f; GLfloat b69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(a69, b69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            a69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    b69 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat c69=-.88f; GLfloat d69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(c69, d69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            c69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    d69 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e69=-.87f; GLfloat f69=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(e69, f69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f69+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat g69=-.61f; GLfloat h69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(g69, h69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            g69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    h69+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat e11=-.64f; GLfloat f11=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(e11, f11); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e11 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f11+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e12=-.75f; GLfloat f12=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(e12, f12); // center of circle
		for(iTree = 0; iTree <= triangleAmount;iTree++) {
			glVertex2f(
		            e12 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f12+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	 glBegin(GL_QUADS);
    glColor3ub(4, 46, 14);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

    GLfloat e123=-.8f; GLfloat f123=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(e123, f123); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e123 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f123+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat e1232=-.7f; GLfloat f1232=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(4, 46, 14);
		glVertex2f(e1232, f1232); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e1232 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f1232+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
glLoadIdentity();
//Circle-Tree End


//Windmill starts

    glTranslatef(-0.718f, 0.6f, 0.0f);
    glScalef(0.4,0.4,0);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(7, 36, 9); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.7f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.71,0.88,0);
	glScalef(0.4,0.4,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(iW,0.0,0.0,1.0);

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
    glColor3ub(115, 17, 17);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(115, 17, 17);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, -0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(115, 17, 17);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(115, 17, 17);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();

    glPopMatrix();
    iW+=-0.0f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

//Windmill ends


int j;                                           //dartboard

	GLfloat x1=-.23f; GLfloat y1=.5f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	int k;

	GLfloat x2=-.23f; GLfloat y2=.5f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	int l;

	GLfloat x3=-.23f; GLfloat y3=.5f; GLfloat radius3 =.035f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
  glColor3ub (0, 0, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l= 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int m;

	GLfloat x4=-.23f; GLfloat y4=.5f; GLfloat radius4 =.025f;
	int triangleAmount4 = 36; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
  glColor3ub (0, 255, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(m= 0; m <= triangleAmount4;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius3 * sin(m* twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	int n;

	GLfloat x5=-.23f; GLfloat y5=.5f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n= 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(n* twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	int o;

	GLfloat x6=-.23f; GLfloat y6=.5f; GLfloat radius6=.01f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o= 0; o <= triangleAmount6;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o* twicePi6 / triangleAmount6))
			);
		}
	glEnd();    //dartboard finish


	/*

	glTranslatef(-0.5,0.0,0.0);
	int d;                                                             //moon

	GLfloat x61=-.13f; GLfloat y61=.95f; GLfloat radius61=.05f;
	int triangleAmount61 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi61 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x61, y61); // center of circle
		for(d= 0; d <= triangleAmount6;d++) {
			glVertex2f(
		            x61 + (radius61 * cos(d *  twicePi61 / triangleAmount61)),
			    y61 + (radius61 * sin(d* twicePi61 / triangleAmount61))
			);
		}
	glEnd();

	glLoadIdentity(); */

	glBegin(GL_QUADS);
glColor3ub (51, 47, 145);
glVertex2f(-1,-.3);
glVertex2f( -1,-1);          //river

glVertex2f(1,-1);
glVertex2f(1, -.30);
glEnd();
glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2f(-1,-.35);
glVertex2f( -1,-.7);          //road

glVertex2f(1,-.7);
glVertex2f(1, -.35);
glEnd();
glLineWidth(5);
glBegin(GL_LINES);                  //white line in road
	glColor3ub (219, 219, 173);
	glVertex2f(-.98, -.525);
	glVertex2f(-.9,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road
	glColor3ub (219, 219, 173);
	glVertex2f(-.87, -.525);
	glVertex2f(-.79,-.525);
	glEnd();

	glBegin(GL_LINES);                  //white line in road
	glColor3ub (219, 219, 173);
	glVertex2f(-.76, -.525);
	glVertex2f(-.68,-.525);
	glEnd();glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.65, -.525);
	glVertex2f(-.58,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.55, -.525);
	glVertex2f(-.47,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.44, -.525);
	glVertex2f(-.36,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.33, -.525);
	glVertex2f(-.25,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.22, -.525);
	glVertex2f(-.16,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.13, -.525);
	glVertex2f(-.05,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(-.02, -.525);
	glVertex2f(.06,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.09, -.525);
	glVertex2f(.17,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.2, -.525);
	glVertex2f(.28,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.31, -.525);
	glVertex2f(.39,-.525);
	glEnd();
glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.41, -.525);
	glVertex2f(.49,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.52, -.525);
	glVertex2f(.6,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.63, -.525);
	glVertex2f(.71,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.74, -.525);
	glVertex2f(.82,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.85, -.525);
	glVertex2f(.93,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (219, 219, 173);
	glVertex2f(.96, -.525);
	glVertex2f(1,-.525);
	glEnd();




//medicle camp


glBegin(GL_QUADS);
glColor3ub (74, 74, 71);
glVertex2f(.7, .75);
glVertex2f( .7,.41);

glVertex2f(.89,.41);
glVertex2f(.89, .75);
glEnd();
glBegin(GL_QUADS);
glColor3ub (120, 120, 114);
glVertex2f(.68, .8);
glVertex2f( .68,.75);

glVertex2f(.91,.75);
glVertex2f(.91, .8);
glEnd();

glBegin(GL_QUADS);
glColor3ub (250, 241, 155);
glVertex2f(.78, .65);
glVertex2f( .78,.41);

glVertex2f(.82,.41);
glVertex2f(.82, .65);
glEnd();
glBegin(GL_QUADS);
glColor3ub (250, 241, 155);
glVertex2f(.72, .63);
glVertex2f( .72,.55);

glVertex2f(.76,.55);
glVertex2f(.76, .63);
glEnd();
glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glColor3ub (250, 241, 155);
glVertex2f(.72, .63);
glVertex2f( .72,.55);

glVertex2f(.76,.55);
glVertex2f(.76, .63);
glEnd();
glLoadIdentity();
glLineWidth(9);
glBegin(GL_LINES);
	glColor3ub (255, 0, 0);
	glVertex2f(.8,.665);
	glVertex2f(.8,.73);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (255,0,0);
	glVertex2f(.78,.695);
	glVertex2f(.82,.695);
	glEnd();
	//medical camp end


	 // watch tower start
	 glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub (77, 38, 0);
	glVertex2f(.29,.75);
	glVertex2f(.29,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (77, 38, 0);
	glVertex2f(.18,.75);
	glVertex2f(.18,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (153, 153, 102);
	glVertex2f(.16,.75);
	glVertex2f(.31,.75);
	glEnd();
	glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub (0,0,0);
	glVertex2f(.295,.86);
	glVertex2f(.295,.756);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0,0,0);
	glVertex2f(.185,.86);
	glVertex2f(.185,.756);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub (115, 38, 38);
	glVertex2f(.17,.86);
	glVertex2f(.31,.86);
	glVertex2f(.235,.96);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub (250, 241, 155);
	glVertex2f(.21,.82);
	glVertex2f(.21,.76);
	glVertex2f(.27,.76);
	glVertex2f(.27,.82);
	glEnd();

	glLineWidth(9);
	glBegin(GL_LINES);
	glColor3ub (51, 0, 0);
	glVertex2f(.216,.86);
	glVertex2f(.216,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 0, 0);
	glVertex2f(.263,.86);
	glVertex2f(.263,.82);
	glEnd();
	 glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.76);
	glVertex2f(.161,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.175,.76);
	glVertex2f(.175,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.189,.76);
	glVertex2f(.189,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.82);
	glVertex2f(.31,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.31,.76);
	glVertex2f(.31,.82);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.79);
	glVertex2f(.31,.79);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.29,.76);
	glVertex2f(.29,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.26,.76);
	glVertex2f(.26,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.22,.76);
	glVertex2f(.22,.82);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.215,.74);
	glVertex2f(.215,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.74);
	glVertex2f(.255,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.53);
	glVertex2f(.215,.53);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.56);
	glVertex2f(.215,.56);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.59);
	glVertex2f(.215,.59);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.62);
	glVertex2f(.215,.62);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.65);
	glVertex2f(.215,.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.68);
	glVertex2f(.215,.68);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.71);
	glVertex2f(.215,.71);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.73);
	glVertex2f(.215,.73);
	glEnd();               //watch tower end


	    /* Watch */

    glTranslatef(-0.505f, -0.3f, 0.0f);
    glScalef(0.5,0.8,0);
	glBegin(GL_QUADS);              // Watch Vertical Back Body
	glColor3ub(17, 28, 84); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

glLoadIdentity();
glLineWidth(2.5);

glTranslatef(-0.5,0.1,1.0);
glScalef(0.0028,0.0028,1.0);


int i3w;                              // Watch outside circle shape


    GLfloat xw=0.0f; GLfloat yw=0.0f; GLfloat radiusw =24.5f;
	int triangleAmountw = 100;

	GLfloat twicePiw = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(xw, yw);
		for(i3w = 0; i3w <=triangleAmountw;i3w++) {
			glVertex2f(
		            xw + (radiusw * cos(i3w *  twicePiw / triangleAmountw)),
			    yw + (radiusw * sin(i3w * twicePiw / triangleAmountw))
			);
		}
	glEnd();

	GLfloat xww=0.0f; GLfloat yww=0.0f; GLfloat radiusww =23.0f;

	int lineAmountww = 100;

	GLfloat twicePiww = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i3w = 0; i3w<=lineAmountww;i3w++) {
			glVertex2f(
			    xww + (radiusww * cos(i3w *  twicePiww / lineAmountww)),
			    yww + (radiusww * sin(i3w * twicePiww / lineAmountww))
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

    GLfloat xwww=0.0f; GLfloat ywww=0.0f; GLfloat radiuswww =1.5f;
	int triangleAmountwww = 50;

	GLfloat twicePiwww = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(xwww, ywww);
		for(i4 = 0; i4 <=triangleAmountwww;i4++) {
			glVertex2f(
		            xwww + (radiuswww * cos(i4 *  twicePiwww / triangleAmountwww)),
			    ywww + (radiuswww * sin(i4 * twicePiwww / triangleAmountwww))
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
    i5+=-0.02f;
    glLoadIdentity();

 glTranslatef(-0.5,0.1,1.0);
    glScalef(0.0028,0.0028,1.0);
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
    i6+=-0.000333333f;
    glLoadIdentity();

glTranslatef(-0.5,0.1,1.0);
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
    i7+=-0.000005555f;
    glLoadIdentity();

//Watch ends


  //car start


glPushMatrix();                        //to move car
glTranslatef(positionC,0,0);


  glBegin(GL_POLYGON);
	glColor3ub (51, 51, 0);
	glVertex2f( -.7,-.4);          //car

glVertex2f(-.7,-.65);
glVertex2f(-.34, -.65);
glVertex2f(-.34, -.56);
glVertex2f(-.42, -.54);
glVertex2f(-.47, -.4);


	glEnd();



int w;

	GLfloat x99=-.63f; GLfloat y99=-.65f; GLfloat radius99=.045f;
	int triangleAmount99 = 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi99 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x99, y99); // center of circle
		for(w = 0; w <= triangleAmount99;w++) {
			glVertex2f(
		            x99 + (radius99 * cos(w *  twicePi99 / triangleAmount99)),
			    y99 + (radius99 * sin(w * twicePi99 / triangleAmount99))
			);
		}
	glEnd();

int w1;

	GLfloat x999=-.63f; GLfloat y999=-.65f; GLfloat radius999=.03f;
	int triangleAmount999= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi999 = 2.0f * PI;
  glColor3ub (0,0,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x999, y999); // center of circle
		for(w1= 0; w1 <= triangleAmount999;w1++) {
			glVertex2f(
		            x999 + (radius999 * cos(w1 *  twicePi999 / triangleAmount999)),
			    y999 + (radius999 * sin(w1 * twicePi999 / triangleAmount999))
			);
		}
	glEnd();
int w11;

	GLfloat x9999=-.63f; GLfloat y9999=-.65f; GLfloat radius9999=.012f;
	int triangleAmount9999= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9999 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9999, y9999); // center of circle
		for(w11= 0; w11 <= triangleAmount9999;w11++) {
			glVertex2f(
		            x9999 + (radius9999 * cos(w11 *  twicePi9999 / triangleAmount9999)),
			    y9999 + (radius9999 * sin(w11 * twicePi9999 / triangleAmount9999))
			);
		}
	glEnd();

int w2;

	GLfloat x992=-.43f; GLfloat y992=-.65f; GLfloat radius992=.045f;
	int triangleAmount992 = 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi992 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x992, y992); // center of circle
		for(w2 = 0; w2 <= triangleAmount992;w2++) {
			glVertex2f(
		            x992 + (radius992 * cos(w2 *  twicePi992 / triangleAmount992)),
			    y992 + (radius992 * sin(w2 * twicePi992 / triangleAmount992))
			);
		}
	glEnd();

int w13;

	GLfloat x9993=-.43f; GLfloat y9993=-.65f; GLfloat radius9993=.03f;
	int triangleAmount9993= 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9993 = 2.0f * PI;
  glColor3ub (0,0,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9993, y9993); // center of circle
		for(w13= 0; w13 <= triangleAmount9993;w13++) {
			glVertex2f(
		            x9993 + (radius999 * cos(w13 *  twicePi999 / triangleAmount9993)),
			    y9993+ (radius9993 * sin(w13 * twicePi9993 / triangleAmount9993))
			);
		}
	glEnd();
int w113;

	GLfloat x99993=-.43f; GLfloat y99993=-.65f; GLfloat radius99993=.012f;
	int triangleAmount99993= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi99993 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x99993, y99993); // center of circle
		for(w113= 0; w113 <= triangleAmount99993;w113++) {
			glVertex2f(
		            x99993 + (radius99993 * cos(w113 *  twicePi99993 / triangleAmount99993)),
			    y99993 + (radius99993 * sin(w113 * twicePi99993 / triangleAmount99993))
			);
		}
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub (128, 85, 0);
	glVertex2f( -.67,-.45);          //car window

glVertex2f(-.67,-.54);
glVertex2f(-.61, -.54);
glVertex2f(-.61, -.45);




	glEnd();
	glTranslatef(.12,0,0);
glBegin(GL_QUADS);
	glColor3ub (128, 85, 0);
	glVertex2f( -.67,-.45);          // car window

glVertex2f(-.67,-.54);
glVertex2f(-.61, -.54);
glVertex2f(-.61, -.45);

	glEnd();

	glPopMatrix();

	glLoadIdentity();        // car end



  //tree start
  glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glTranslatef(.15,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.30,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.45,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.6,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.15,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.30,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.45,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.6,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.95,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
                 //tree END

    //Helicopter start
    int z1;

	GLfloat x88=.81f; GLfloat y88=.03f; GLfloat radius88=.2f;
	int triangleAmount88= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi88 = 2.0f * PI;
  glColor3ub (0, 77, 26);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x88, y88); // center of circle
		for(z1= 0; z1 <= triangleAmount88;z1++) {
			glVertex2f(
		            x88 + (radius88 * cos(z1*  twicePi88 / triangleAmount88)),
			    y88 + (radius88 * sin(z1 * twicePi88 / triangleAmount88))
			);
		}
	glEnd();
	glBegin(GL_POLYGON);
glColor3ub (153, 102, 0);



glVertex2f(.76, .16);
glVertex2f(.71, .16);

glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);

glVertex2f(.76, .01);
glEnd();
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);

glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);

glEnd();
glBegin(GL_QUADS);
glColor3ub (51, 51, 0);

glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);

glEnd();
glBegin(GL_QUADS);
glColor3ub (153, 102, 0);    //last part of helicopter body

glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (153, 102, 0);    //last part pf helicopter body

glVertex2f(.89, .13);

glVertex2f(.9, .05);
glVertex2f(.91, .13);

glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.74, .13);
glVertex2f(.74, .03);

glVertex2f(.77, .03);
glVertex2f(.77, .13);

glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.78, .1);
glVertex2f(.78, .05);

glVertex2f(.8, .05);
glVertex2f(.8, .1);

glEnd();
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.78, .1);
glVertex2f(.78, .05);

glVertex2f(.8, .05);
glVertex2f(.8, .1);

glEnd();
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.71, 0.01);

glVertex2f(.71, -.02);
glEnd();
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.725, 0.01);

glVertex2f(.725, -.05);
glEnd();
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.8, 0.01);

glVertex2f(.8, -.02);
glEnd();
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.815, 0.01);

glVertex2f(.815, -.05);
glEnd();
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.69, -.020);

glVertex2f(.815,-.020);
glEnd();
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.71, -.05);

glVertex2f(.83, -.05);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (138, 138, 92);

glVertex2f(.735, 0.16);

glVertex2f(.735,.18);
glEnd();
int i3;

	GLfloat xz=.735f; GLfloat yz=.18f; GLfloat radiusz =.012f;
	int triangleAmountz = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiz = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xz, yz); // center of circle
		for(i3 = 0; i3 <= triangleAmountz;i3++) {
			glVertex2f(
		            xz + (radiusz* cos(i3 *  twicePiz / triangleAmountz)),
			    yz + (radiusz* sin(i3 * twicePiz / triangleAmountz))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLES);
glColor3ub (138, 138, 92);

glVertex2f(.735, .18);

glVertex2f(.6, .195);
glVertex2f(.6, .165);

glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (138, 138, 92);

glVertex2f(.735, .18);

glVertex2f(.865, .195);
glVertex2f(.865, .165);

glEnd();

// HELICOPTER END




glLoadIdentity();
/*glLineWidth(9);
glBegin(GL_LINES);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(0, -.3);
	glVertex2f(0,-.25);
	glEnd();
 glBegin(GL_LINES);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(.31, -.3);
	glVertex2f(.31,-.25);
	glEnd();
glBegin(GL_QUADS);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(-.1, -.17);
	glVertex2f(-.1,-.25);
	glVertex2f(.39, -.25);
	glVertex2f(.39,-.17);
	glEnd();*/


glBegin(GL_QUADS);                  // shooting car
	glColor3ub (51, 51, 0);
	glVertex2f(0.0, -.05);
	glVertex2f(0.0,-.2);
	glVertex2f(.35, -.2);
	glVertex2f(.35,-.05);
	glEnd();

	glBegin(GL_POLYGON);                  // shooting car
	glColor3ub (46, 46, 31);
	glVertex2f(0.04, -.20);
	glVertex2f(0.06,-.23);
	glVertex2f(.08, -.26);
	glVertex2f(.27,-.26);
	glVertex2f(.29,-.23);
	glVertex2f(.31,-.20);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (46, 46, 31);
	glVertex2f(0.27, .03);
	glVertex2f(0.27,-0.035);
	glVertex2f(.4, -.01);
	glVertex2f(.4,.01);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (46, 46, 31);
	glVertex2f(0.12, .09);
	glVertex2f(0.12,.055);
	glVertex2f(.2, .055);
	glVertex2f(.2,.09);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (51, 51, 0);
	glVertex2f(0.06, -.05);
	glVertex2f(0.05,.055);
	glVertex2f(.3, .055);
	glVertex2f(.28,-.05);
	glEnd();
glLineWidth(5);

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.98, -.3);
	glVertex2f(-.98,-.15);
	glEnd();

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.95, -.3);
	glVertex2f(-.95,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.92, -.3);
	glVertex2f(-.92,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.89, -.3);
	glVertex2f(-.89,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.86, -.3);
	glVertex2f(-.86,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.83, -.3);
	glVertex2f(-.83,-.15);
	glEnd();
glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.8, -.3);
	glVertex2f(-.8,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.77, -.3);
	glVertex2f(-.77,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.74, -.3);
	glVertex2f(-.74,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.71, -.3);
	glVertex2f(-.71,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.68, -.3);
	glVertex2f(-.68,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.65, -.3);
	glVertex2f(-.65,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.62, -.3);
	glVertex2f(-.62,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.59, -.3);
	glVertex2f(-.59,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.56, -.3);
	glVertex2f(-.56,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.53, -.3);
	glVertex2f(-.53,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.505, -.3);
	glVertex2f(-.505,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.48, -.3);
	glVertex2f(-.48,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.45, -.3);
	glVertex2f(-.45,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.42, -.3);
	glVertex2f(-.42,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.39, -.3);
	glVertex2f(-.39,-.15);
	glEnd();glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.36, -.3);
	glVertex2f(-.36,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.33, -.3);
	glVertex2f(-.33,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.31, -.3);
	glVertex2f(-.31,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.28, -.3);
	glVertex2f(-.28,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.25, -.3);
	glVertex2f(-.25,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.22, -.3);
	glVertex2f(-.22,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.19, -.3);
	glVertex2f(-.19,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.16, -.3);
	glVertex2f(-.16,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.13, -.3);
	glVertex2f(-.13,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.10, -.3);
	glVertex2f(-.10,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.07, -.3);
	glVertex2f(-.07,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.04, -.3);
	glVertex2f(-.04,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.01, -.3);
	glVertex2f(-.01,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.02, -.3);
	glVertex2f(.02,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.05, -.3);
	glVertex2f(.05,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.08, -.3);
	glVertex2f(.08,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.11, -.3);
	glVertex2f(.11,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.14, -.3);
	glVertex2f(.14,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.17, -.3);
	glVertex2f(.17,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.20, -.3);
	glVertex2f(.20,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.23, -.3);
	glVertex2f(.23,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.26, -.3);
	glVertex2f(.26,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.29, -.3);
	glVertex2f(.29,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.32, -.3);
	glVertex2f(.32,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.35, -.3);
	glVertex2f(.35,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.38, -.3);
	glVertex2f(.38,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.41, -.3);
	glVertex2f(.41,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.44, -.3);
	glVertex2f(.44,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.47, -.3);
	glVertex2f(.47,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.5, -.3);
	glVertex2f(.5,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.53, -.3);
	glVertex2f(.53,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.55, -.3);
	glVertex2f(.55,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.58, -.3);
	glVertex2f(.58,-.15);
	glEnd();

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.61, -.3);
	glVertex2f(.61,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.64, -.3);
	glVertex2f(.64,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.67, -.3);
	glVertex2f(.67,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.7, -.3);
	glVertex2f(.7,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.73, -.3);
	glVertex2f(.73,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.76, -.3);
	glVertex2f(.76,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.79, -.3);
	glVertex2f(.79,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.82, -.3);
	glVertex2f(.82,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.85, -.3);
	glVertex2f(.85,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.88, -.3);
	glVertex2f(.88,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.91, -.3);
	glVertex2f(.91,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.94, -.3);
	glVertex2f(.94,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.97, -.3);
	glVertex2f(.97,-.15);
	glEnd();
glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-1, -.19);
	glVertex2f(1,-.19);
	glEnd();              //roadside border end


   //river side
   glPushMatrix();
glTranslatef(position,0,0);
glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.9, -.9);
	glVertex2f(-0.87,-.97);
	glVertex2f(-.5, -.97);
	glVertex2f(-.45,-.85);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (255, 255, 153);
	glVertex2f(-0.86, -.84);
	glVertex2f(-0.86,-.9);
	glVertex2f(-.55, -.865);
	glVertex2f(-.55,-.81);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.78, -.78);
	glVertex2f(-0.79,-.84);
	glVertex2f(-.63, -.82);
	glVertex2f(-.62,-.73);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.72, -.74);
	glVertex2f(-0.73,-.77);
	glVertex2f(-.66, -.745);
	glVertex2f(-.65,-.7);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.64, -.77);
	glVertex2f(-0.57,-.71);

	glEnd();
	glPopMatrix() ;          //ship end
	// bridge line

	glBegin(GL_TRIANGLES);
	glColor3ub (0, 0, 0);
	glVertex2f(-0.988, -.05);
	glVertex2f(-0.97,.05);
	glVertex2f(-1,.05);

	glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub (255, 255, 0);

	glVertex2f(-0.97,.05);
	glVertex2f(-0.988, .15);
	glVertex2f(-1,.05);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (0, 41, 51);
	glVertex2f(-0.99, -1);
	glVertex2f(-0.99,-.02);

	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub (0, 0, 0);
	glVertex2f(0.988, -.05);
	glVertex2f(0.97,.05);
	glVertex2f(1,.05);

	glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub (255, 255, 0);

	glVertex2f(0.97,.05);
	glVertex2f(0.988, .15);
	glVertex2f(1,.05);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (0, 41, 51);
	glVertex2f(0.99, -1);
	glVertex2f(0.99,-.02);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 255, 0);
	glVertex2f(-0.07, -.7);
	glVertex2f(-0.07,-.18);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (255, 255, 0);
	glVertex2f(0.14, -.35);
	glVertex2f(0.14,-.02);

	glEnd();
	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub (0, 41, 51);
	glVertex2f(-0.07, -.19);
	glVertex2f(0.14,-.028);

	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(-0.074, -.18);
	glVertex2f(-.98,-.7);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(0.13, -.030);
	glVertex2f(-.98,-.35);

	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(-0.074, -.18);
	glVertex2f(.98,-.7);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(0.13, -.030);
	glVertex2f(.98,-.35);

	glEnd();

	glLoadIdentity();
	glutTimerFunc(8000, Rain_LOOP, 0);

glFlush();
}





void Night_LOOP(int c){
glutDisplayFunc(myDisplayNight);
}







void myDisplayDay(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);
glLineWidth(9);
glPointSize(5.0);



 glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);
    glVertex2f(-1.0, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, .95f);
    glVertex2f(-1.0f, .95f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(26, 163, 255);
    glVertex2f(-1.0, .95f);
    glVertex2f(1.0f, .95f);
    glVertex2f(1.0f, .90f);
    glVertex2f(-1.0f, .90f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(51, 173, 255);
    glVertex2f(-1.0, .90f);
    glVertex2f(1.0f, .90f);
    glVertex2f(1.0f, .85f);
    glVertex2f(-1.0f, .85f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(77, 184, 255);
    glVertex2f(-1.0, .85f);
    glVertex2f(1.0f, .85f);
    glVertex2f(1.0f, .80f);
    glVertex2f(-1.0f, .80f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 194, 255);
    glVertex2f(-1.0, .80f);
    glVertex2f(1.0f, .80f);
    glVertex2f(1.0f, .70f);
    glVertex2f(-1.0f, .70f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 204, 255);
    glVertex2f(-1.0, .70f);
    glVertex2f(1.0f, .70f);
    glVertex2f(1.0f, .60f);
    glVertex2f(-1.0f, .60f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 214, 255);
    glVertex2f(-1.0, .60f);
    glVertex2f(1.0f, .60f);
    glVertex2f(1.0f, .40f);
    glVertex2f(-1.0f, .40f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(179, 224, 255);
    glVertex2f(-1.0, .40f);
    glVertex2f(1.0f, .40f);
    glVertex2f(1.0f, .15f);
    glVertex2f(-1.0f, .15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(204, 235, 255);
    glVertex2f(-1.0, .15f);
    glVertex2f(1.0f, .15f);
    glVertex2f(1.0f, -.15f);
    glVertex2f(-1.0f, -.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 245, 255);
    glVertex2f(-1.0, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();                              //sky end



glPushMatrix();
glTranslatef(0,-positionSun,0);


	int d;                                                             //sun

	GLfloat x61=-.13f; GLfloat y61=.95f; GLfloat radius61=.05f;
	int triangleAmount61 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi61 = 2.0f * PI;
  glColor3ub (255, 230, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x61, y61); // center of circle
		for(d= 0; d <= triangleAmount61;d++) {
			glVertex2f(
		            x61 + (radius61 * cos(d *  twicePi61 / triangleAmount61)),
			    y61 + (radius61 * sin(d* twicePi61 / triangleAmount61))
			);
		}
	glEnd();

	glPopMatrix();


glPushMatrix();
glTranslatef(position,0,0);

int e;                                                             //cloud

	GLfloat x611=-.42f; GLfloat y611=.94f; GLfloat radius611=.03f;
	int triangleAmount611 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi611 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x611, y611); // center of circle
		for(e= 0; e<= triangleAmount611;e++) {
			glVertex2f(
		            x611 + (radius611 * cos(e *  twicePi611 / triangleAmount611)),
			    y611 + (radius611 * sin(e* twicePi611 / triangleAmount611))
			);
		}
	glEnd();
	int f;                                                             //cloud

	GLfloat x6112=-.47f; GLfloat y6112=.94f; GLfloat radius6112=.03f;
	int triangleAmount6112 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6112 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6112, y6112); // center of circle
		for(f= 0; f<= triangleAmount6112;f++) {
			glVertex2f(
		            x6112 + (radius6112 * cos(f *  twicePi6112 / triangleAmount6112)),
			    y6112 + (radius6112 * sin(f* twicePi6112 / triangleAmount6112))
			);
		}
	glEnd();
	int g;                                                             //cloud

	GLfloat x613=-.44f; GLfloat y613=.91f; GLfloat radius613=.03f;
	int triangleAmount613 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi613 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x613, y613); // center of circle
		for(g= 0; g<= triangleAmount613;g++) {
			glVertex2f(
		            x613 + (radius613 * cos(g *  twicePi613 / triangleAmount613)),
			    y613 + (radius613 * sin(g* twicePi613 / triangleAmount613))
			);
		}
	glEnd();
int b;                                                             //cloud

	GLfloat x616=.42f; GLfloat y616=.96f; GLfloat radius616=.03f;
	int triangleAmount616 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi616= 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x616, y616); // center of circle
		for(b= 0; b<= triangleAmount616;b++) {
			glVertex2f(
		            x616 + (radius616 * cos(b *  twicePi616 / triangleAmount616)),
			    y616 + (radius616 * sin(b* twicePi616 / triangleAmount616))
			);
		}
	glEnd();
	int z;                                                             //cloud
float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.9f, yC= 0.93f, radiusC =.05f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.83f, yC= 0.93f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.87f, yC= 0.9f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();

	GLfloat x6114=.47f; GLfloat y6114=.94f; GLfloat radius6114=.03f;
	int triangleAmount6114 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6114 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6114, y6114); // center of circle
		for(z= 0; z<= triangleAmount6114;z++) {
			glVertex2f(
		            x6114+ (radius6114 * cos(z *  twicePi6114 / triangleAmount6114)),
			    y6114 + (radius6114 * sin(z* twicePi6114 / triangleAmount6114))
			);
		}
	glEnd();
	int c;                                                             //cloud

	GLfloat x615=.44f; GLfloat y615=.91f; GLfloat radius615=.03f;
	int triangleAmount615 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi615 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x615, y615); // center of circle
		for(c= 0; c<= triangleAmount615;c++) {
			glVertex2f(
		            x615 + (radius615 * cos(c *  twicePi615 / triangleAmount615)),
			    y615 + (radius615 * sin(c* twicePi615 / triangleAmount615))
			);
		}
	glEnd();
	glTranslatef(-1.2,1.0,0.0);


glColor3ub(255, 255, 255);


GLfloat x1x=0.6f; GLfloat y1y=-0.2f; GLfloat radius1s =.08f; // cloud right circle


int triangleAmount22 = 20;


GLfloat twicePi22 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(x1x, y1y);


for(int i = 0; i <= triangleAmount22; i++)


glVertex2f(x1x + (radius1s * cos(i * twicePi22 / triangleAmount22)),y1y + (radius1s * sin(i * twicePi22 / triangleAmount22)));


glEnd();





glColor3ub(255, 255, 255);


GLfloat x1x1=0.5f; GLfloat y1y1=-0.2f; GLfloat radiuss11 =.1f; // cloud middle circle


int triangleAmount211 = 20;


GLfloat twicePi221 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(x1x1, y1y1);


for(int i = 0; i <= triangleAmount211; i++)


glVertex2f(x1x1 + (radiuss11 * cos(i * twicePi221 / triangleAmount211)),y1y1 + (radiuss11 * sin(i * twicePi221 / triangleAmount211)));


glEnd();





glColor3ub(255, 255, 255);


GLfloat xx2=0.4f; GLfloat yy2=-0.2f; GLfloat radiuss2 =.08f; // cloud left circle


int triangleAmount212 = 20;


GLfloat twicePi212 = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);


glVertex2f(xx2, yy2);


for(int i = 0; i <= triangleAmount212; i++)


glVertex2f(xx2 + (radiuss2 * cos(i * twicePi212 / triangleAmount212)),yy2 + (radiuss2 * sin(i * twicePi212 / triangleAmount212)));


glEnd();



	glPopMatrix();                 //cloud finish

glBegin(GL_QUADS);
glColor3ub (51, 102, 0);
glVertex2f(-1, .7);
glVertex2f( -1,-.3);          //basepart

glVertex2f(1,-.30);
glVertex2f(1, .70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (186,164 , 122);
glVertex2f(-.45, .5);
glVertex2f( -.45,-.3);          //basepart

glVertex2f(1,-.30);
glVertex2f(1, .50);
glEnd();

glBegin(GL_LINES);
glColor3ub (92, 138, 138);

glVertex2f(-.45, .505);

glVertex2f(-.45, -.3);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);               //court boundary
glColor3ub (92, 138, 138);

glVertex2f(-.45, .495);          //court boundary

glVertex2f(-1, .495);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);
glColor3ub (92, 138, 138);

glVertex2f(-.7, .495);

glVertex2f(-.7, -.3);
glEnd();




	glBegin(GL_QUADS);
glColor3ub (77, 153, 0);
glVertex2f(-.457, .479);
glVertex2f( -1,.479);          //football court

glVertex2f(-1,-.30);
glVertex2f(-.457, -.30);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);          // football court center line
glColor3ub (255, 255, 255);

glVertex2f(-.75, .476);

glVertex2f(-.75, -.3);
glEnd();

int i;                              //football court center

	GLfloat x=-.75f; GLfloat y=.1f; GLfloat radius =.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glTranslatef(-.8,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
	glTranslatef(-.6,.3,0);
	glScalef(0.5,0.5,0);
	glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);          //basepart

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
glBegin(GL_LINES);
glColor3ub (77, 38, 0);                     //ring
glVertex2f(-.43, .21);
	glVertex2f(-.43, .49);
glEnd();
glBegin(GL_LINES);
glColor3ub (77, 38, 0);                     //ring
glVertex2f(-.32, .21);
	glVertex2f(-.32, .49);
glEnd();
GLfloat x7=-.35f; GLfloat y7=.31f; GLfloat radius7 =.03f;
	int p;
	int lineAmount = 200;

	GLfloat twicePi7 = 2.0f * PI;
glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(p = 0; p <= lineAmount;p++) {
			glVertex2f(
			    x7 + (radius7 * cos(p *  twicePi7 / lineAmount)),
			    y7 + (radius7* sin(p * twicePi7 / lineAmount))
			);
		}
		glEnd();

		GLfloat x8=-.404f; GLfloat y8=.31f; GLfloat radius8 =.03f;
	int q;
	int lineAmount1 = 200;

	GLfloat twicePi8 = 2.0f * PI;
glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(q= 0; q <= lineAmount;q++) {
			glVertex2f(
			    x8 + (radius8 * cos(q *  twicePi8 / lineAmount1)),
			    y8 + (radius8* sin(q * twicePi8 / lineAmount1))
			);
		}
		glEnd();

		GLfloat x9=-.375f; GLfloat y9=.36f; GLfloat radius9 =.03f;
	int r;
	int lineAmount2 = 190;

	GLfloat twicePi9 = 2.0f * PI;
    glLineWidth(2);
	glBegin(GL_LINE_LOOP);
		for(r = 0; r <= lineAmount2;r++) {
			glVertex2f(
			    x9 + (radius9 * cos(r *  twicePi9 / lineAmount2)),
			    y9 + (radius9* sin(r * twicePi9 / lineAmount2))
			);
		}
		glEnd();
glBegin(GL_LINES);
glColor3ub (77, 38, 0);                     //ring
glVertex2f(-.31, -.2);
	glVertex2f(-.42, -.2);
glEnd();

glBegin(GL_LINES);                  //flag


glVertex2f(-.17, .7);
	glVertex2f(-.17, .52);

glEnd();

glBegin(GL_QUADS);                  //flag

glColor3ub (0, 77, 0);
glVertex2f(-.17, .7);
	glVertex2f(-.25, .7);
	glVertex2f(-.25, .6);
	glVertex2f(-.17, .6);

glEnd();
int s;

	GLfloat x10=-.21f; GLfloat y10=.65f; GLfloat radius10=.02f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(s= 0; s <= triangleAmount10;s++) {
			glVertex2f(
		            x10 + (radius10 * cos(s *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(s* twicePi10 / triangleAmount10))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (51, 51, 0);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
glTranslatef(+.5,0,0);
	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (51, 51, 0);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
	glLoadIdentity();

	glTranslatef(+.3,0,0);

	glBegin(GL_TRIANGLES);      //hills
	glColor3ub (51, 51, 0);

glVertex2f(-.91,.9);
glVertex2f( -1,.7);

glVertex2f(-.74, .7);
//glVertex2f(-.62, 85);



	glEnd();
	glLoadIdentity();


    glBegin(GL_POLYGON);  //hill
    glColor3ub(51, 51, 0);
    glVertex2f(-.9,.7);
    glVertex2f(-.535,.7);
    glVertex2f(-.57,.8);
    glVertex2f(-.7,.85);
    glVertex2f(-.8,.97);

    glEnd();
    glTranslatef(.55,0,0);  //hills
     glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);
    glVertex2f(-.9,.7);
    glVertex2f(-.535,.7);
    glVertex2f(-.57,.8);
    glVertex2f(-.7,.85);
    glVertex2f(-.8,.97);

    glEnd();
 glLoadIdentity();
  glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);  //hill
    glVertex2f(-.1,.7);
    glVertex2f(.5,.7);
    glVertex2f(.4,.97);
    glVertex2f(.3,.91);
    glVertex2f(.15,.86);
    glVertex2f(.05,.99);
 glVertex2f(-.05,.93);

    glEnd();
     glTranslatef(.49,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(51, 51, 0);    //hill
    glVertex2f(-.1,.7);
    glVertex2f(.5,.7);
    glVertex2f(.4,.97);
    glVertex2f(.3,.91);
    glVertex2f(.15,.86);
    glVertex2f(.05,.99);
    glVertex2f(-.05,.93);

    glEnd();
    glLoadIdentity();


glPushMatrix();
glTranslatef(-positionTrain,0,0);


glTranslatef(.0,0.7,0);    //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();

glLoadIdentity();
glPopMatrix();            //Train ends



    glTranslatef(.05,0,0);      //big tent
    glBegin(GL_POLYGON);
	glColor3ub (255, 255, 255);
	glVertex2f( .55,.75);

glVertex2f(.35,.75);
glVertex2f(.25, .55);
glVertex2f(.355, .55);
glVertex2f(.65, .57);


	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);  //tent line
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.45, .56);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);  //tent line
	glColor3ub (217, 217, 217);
	glVertex2f(.55, .75);
	glVertex2f(.55, .56);
	glEnd();
	glLoadIdentity();
	glBegin(GL_QUADS);





	//BackFatTrees
    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.52f,0.45f);
	glVertex2f(-0.48f, 0.45f);
	glVertex2f(-0.48f,0.62f);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glVertex2f(-0.58f,0.6f);
	glVertex2f(-0.55f, 0.63f);
	glVertex2f(-0.58f,0.66f);
	glVertex2f(-0.52f,0.66f);
	glVertex2f(-0.52f, 0.72f);
	glVertex2f(-0.5f,0.69f);///
	glVertex2f(-0.48f,0.72f);
	glVertex2f(-0.48f, 0.66f);
	glVertex2f(-0.42f,0.66f);
	glVertex2f(-0.45f,0.63f);
	glVertex2f(-0.42f, 0.6f);
	glVertex2f(-0.48f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);
	glVertex2f(0.52f,0.45f);
	glVertex2f(0.48f, 0.45f);
	glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();
     glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glVertex2f(0.58f,0.6f);
	glVertex2f(0.55f, 0.63f);
	glVertex2f(0.58f,0.66f);
	glVertex2f(0.52f,0.66f);
	glVertex2f(0.52f, 0.72f);
	glVertex2f(0.5f,0.69f);///
	glVertex2f(0.48f,0.72f);
	glVertex2f(0.48f, 0.66f);
	glVertex2f(0.42f,0.66f);
	glVertex2f(0.45f,0.63f);
	glVertex2f(0.42f, 0.6f);
	glVertex2f(0.48f,0.62f);
    glEnd();

  	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);///
    glVertex2f(-0.68f, 0.64);
     glVertex2f(-0.6f,0.6f);
     glVertex2f(-0.57f, 0.56);
     glVertex2f(-0.52f, 0.5f);
     glVertex2f(-0.5f,0.45f);
     glVertex2f(-1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(1.0f,0.45f);
	glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67);///
    glVertex2f(0.68f, 0.64);
     glVertex2f(0.6f,0.6f);
     glVertex2f(0.57f, 0.56);
     glVertex2f(0.52f, 0.5f);
     glVertex2f(0.5f,0.45f);
     glVertex2f(1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-0.5f,0.45f);
	glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);///
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
     glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(0.5f,0.45f);
	glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);///
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
     glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);
	glVertex2f(-.25f,0.45f);
	glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67);///
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f,0.45f);
	glEnd();

//BackFatTree End

//Bird

glScalef(0.3,1.0,0.0);

glPushMatrix();
glTranslatef(positionB,0,0);

int iBird;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmountB = 20;
	GLfloat twicePiB = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

	GLfloat mmmm=-0.638f; GLfloat nnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnnn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();

    glPopMatrix();
glLoadIdentity();
//Bird End




glColor3ub (0, 128, 0);
glVertex2f(-.15, .6);
glVertex2f( -.15,.3);          //house

glVertex2f(.15,.3);
glVertex2f(.15, .6);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f( -.165,.6);    //house
glVertex2f(.165,.6);
glVertex2f(0, .74);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 77, 77);
glVertex2f(-.12, .6);
glVertex2f( -.12,.3);   //house

glVertex2f(.12,.3);
glVertex2f(.12, .6);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);  //house
glVertex2f( -.1,.61);
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);              //house
glVertex2f( -.1,.61);

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();

glTranslatef(.06,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);              //house
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.09,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);                //house

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);
                                            //house
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.15,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);
glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glTranslatef(.18,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 77, 0);
glVertex2f(-.1, .65);
glVertex2f( -.1,.61);          //house

glVertex2f(-.075,.61);
glVertex2f(-.075, .65);
glEnd();
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glTranslatef(0.03,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();

glTranslatef(0.06,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.09,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.12,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();
glTranslatef(0.15,0,0);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.075, .65);
glVertex2f( -.075,.61);
glEnd();
glLoadIdentity();

glLineWidth(4);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.159, .3);
glVertex2f( .159,.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub (77, 77, 0);
glVertex2f(-.1, .5);
glVertex2f( -.1,.4);          //house

glVertex2f(-.05,.4);
glVertex2f(-.05, .5);
glEnd();
glTranslatef(.15,0,0);
glBegin(GL_QUADS);
glColor3ub (77, 77, 0);
glVertex2f(-.1, .5);
glVertex2f( -.1,.4);          //house

glVertex2f(-.05,.4);
glVertex2f(-.05, .5);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);
glColor3ub (77, 77, 0);
glVertex2f(-.02, .5);
glVertex2f( -.02,.3);          //house

glVertex2f(.02,.3);
glVertex2f(.02, .5);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2f( -.24,.3);          //house

glVertex2f(-.22,.3);
glVertex2f(-.23, .6);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);

glColor3ub (0, 0, 0);
glVertex2f(-.26, .3);
glVertex2f( -.21,.3);
glEnd();


//Circle-Tree Begins

glTranslatef(0.3,-0.15,0);
glScalef(0.7,0.7,0);
glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.72f,-0.15f);
    glVertex2f(-0.65f,-0.2f);
    glVertex2f(-0.735f,-0.17f);
    glVertex2f(-0.74f,-0.25f);
    glVertex2f(-0.775f,-0.17f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.78f,-0.15f);
    //glVertex2f(-0.7f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,-0.15f);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.72f,0.23f);
    glVertex2f(-0.72f,-0.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.76f,0.23f);
    glVertex2f(-0.76f,0.3f);
    glVertex2f(-0.74f,0.3f);
    glVertex2f(-0.74f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.74f,0.23f);
    glVertex2f(-0.71f,0.29f);
    glVertex2f(-0.7f,0.28f);
    glVertex2f(-0.72f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.8f,0.28f);
    glVertex2f(-0.79f,0.29f);
    glVertex2f(-0.76f,0.23f);
    glEnd();

     int iTree;

	GLfloat xT=-.75f; GLfloat yT=.33f; GLfloat radiusT =.06f;
	int triangleAmountT = 20;
	GLfloat twicePiT = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(xT, yT); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            xT + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    yT + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

GLfloat a1=-.68f; GLfloat b1=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(a1, b1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            a1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    b1 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat c1=-.81f; GLfloat d1=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(c1, d1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            c1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    d1 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e1=-.87f; GLfloat f1=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(e1, f1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f1+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat g1=-.61f; GLfloat h1=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(g1, h1); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            g1 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    h1+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat a69=-.61f; GLfloat b69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(a69, b69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            a69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    b69 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat c69=-.88f; GLfloat d69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(c69, d69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            c69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    d69 + (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e69=-.87f; GLfloat f69=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(e69, f69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f69+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat g69=-.61f; GLfloat h69=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(g69, h69); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            g69 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    h69+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat e11=-.64f; GLfloat f11=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(e11, f11); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e11 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f11+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();

	GLfloat e12=-.75f; GLfloat f12=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(e12, f12); // center of circle
		for(iTree = 0; iTree <= triangleAmount;iTree++) {
			glVertex2f(
		            e12 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f12+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	 glBegin(GL_QUADS);
    glColor3ub(10, 120, 38);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

    GLfloat e123=-.8f; GLfloat f123=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(e123, f123); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e123 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f123+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
	GLfloat e1232=-.7f; GLfloat f1232=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(10, 120, 38);
		glVertex2f(e1232, f1232); // center of circle
		for(iTree = 0; iTree <= triangleAmountT;iTree++) {
			glVertex2f(
		            e1232 + (radiusT * cos(iTree *  twicePiT / triangleAmountT)),
			    f1232+ (radiusT * sin(iTree * twicePiT / triangleAmountT))
			);
		}
	glEnd();
glLoadIdentity();
//Circle-Tree End


//Windmill starts

    glTranslatef(-0.718f, 0.6f, 0.0f);
    glScalef(0.4,0.4,0);
	glBegin(GL_QUADS);              // Windmill Vertical Back Body
	glColor3ub(51, 204, 51); // Red
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.7f);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.71,0.88,0);
	glScalef(0.4,0.4,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack

    glRotatef(iW,0.0,0.0,1.0);

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
    iW+=-1.9f;
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

//Windmill ends



int j;                                           //dartboard

	GLfloat x1=-.23f; GLfloat y1=.5f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	int k;

	GLfloat x2=-.23f; GLfloat y2=.5f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	int l;

	GLfloat x3=-.23f; GLfloat y3=.5f; GLfloat radius3 =.035f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
  glColor3ub (0, 0, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l= 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int m;

	GLfloat x4=-.23f; GLfloat y4=.5f; GLfloat radius4 =.025f;
	int triangleAmount4 = 36; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
  glColor3ub (0, 255, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(m= 0; m <= triangleAmount4;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius3 * sin(m* twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	int n;

	GLfloat x5=-.23f; GLfloat y5=.5f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n= 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(n* twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	int o;

	GLfloat x6=-.23f; GLfloat y6=.5f; GLfloat radius6=.01f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o= 0; o <= triangleAmount6;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o* twicePi6 / triangleAmount6))
			);
		}
	glEnd();    //dartboard finish


	glBegin(GL_QUADS);      //river
glColor3ub (77, 184, 255);
glVertex2f(-1,-.3);
glVertex2f( -1,-1);

glVertex2f(1,-1);
glVertex2f(1, -.30);
glEnd();
glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2f(-1,-.35);
glVertex2f( -1,-.7);          //road

glVertex2f(1,-.7);
glVertex2f(1, -.35);
glEnd();
glLineWidth(5);
glBegin(GL_LINES);                  //white line in road
	glColor3ub (255,255,255);
	glVertex2f(-.98, -.525);
	glVertex2f(-.9,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road
	glColor3ub (255,255,255);
	glVertex2f(-.87, -.525);
	glVertex2f(-.79,-.525);
	glEnd();

	glBegin(GL_LINES);                  //white line in road
	glColor3ub (255,255,255);
	glVertex2f(-.76, -.525);
	glVertex2f(-.68,-.525);
	glEnd();glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.65, -.525);
	glVertex2f(-.58,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.55, -.525);
	glVertex2f(-.47,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.44, -.525);
	glVertex2f(-.36,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.33, -.525);
	glVertex2f(-.25,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.22, -.525);
	glVertex2f(-.16,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.13, -.525);
	glVertex2f(-.05,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(-.02, -.525);
	glVertex2f(.06,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.09, -.525);
	glVertex2f(.17,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.2, -.525);
	glVertex2f(.28,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.31, -.525);
	glVertex2f(.39,-.525);
	glEnd();
glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.41, -.525);
	glVertex2f(.49,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.52, -.525);
	glVertex2f(.6,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.63, -.525);
	glVertex2f(.71,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.74, -.525);
	glVertex2f(.82,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.85, -.525);
	glVertex2f(.93,-.525);
	glEnd();
	glBegin(GL_LINES);                  //white line in road start
	glColor3ub (255,255,255);
	glVertex2f(.96, -.525);
	glVertex2f(1,-.525);
	glEnd();




//medicle camp


glBegin(GL_QUADS);
glColor3ub (230, 255, 230);
glVertex2f(.7, .75);
glVertex2f( .7,.41);

glVertex2f(.89,.41);
glVertex2f(.89, .75);
glEnd();
glBegin(GL_QUADS);
glColor3ub (255, 255, 255);
glVertex2f(.68, .8);
glVertex2f( .68,.75);

glVertex2f(.91,.75);
glVertex2f(.91, .8);
glEnd();

glBegin(GL_QUADS);
glColor3ub (85, 128, 0);
glVertex2f(.78, .65);
glVertex2f( .78,.41);

glVertex2f(.82,.41);
glVertex2f(.82, .65);
glEnd();
glBegin(GL_QUADS);
glColor3ub (85, 128, 0);
glVertex2f(.72, .63);
glVertex2f( .72,.55);

glVertex2f(.76,.55);
glVertex2f(.76, .63);
glEnd();
glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glColor3ub (85, 128, 0);
glVertex2f(.72, .63);
glVertex2f( .72,.55);

glVertex2f(.76,.55);
glVertex2f(.76, .63);
glEnd();
glLoadIdentity();
glLineWidth(9);
glBegin(GL_LINES);
	glColor3ub (255, 0, 0);
	glVertex2f(.8,.665);
	glVertex2f(.8,.73);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (255,0,0);
	glVertex2f(.78,.695);
	glVertex2f(.82,.695);
	glEnd();
	//medical camp end


	 // watch tower start
	 glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub (77, 38, 0);
	glVertex2f(.29,.75);
	glVertex2f(.29,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (77, 38, 0);
	glVertex2f(.18,.75);
	glVertex2f(.18,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (153, 153, 102);
	glVertex2f(.16,.75);
	glVertex2f(.31,.75);
	glEnd();
	glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub (0,0,0);
	glVertex2f(.295,.86);
	glVertex2f(.295,.756);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0,0,0);
	glVertex2f(.185,.86);
	glVertex2f(.185,.756);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub (245, 102, 20);
	glVertex2f(.17,.86);
	glVertex2f(.31,.86);
	glVertex2f(.235,.96);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub (51, 0, 0);
	glVertex2f(.21,.82);
	glVertex2f(.21,.76);
	glVertex2f(.27,.76);
	glVertex2f(.27,.82);
	glEnd();

	glLineWidth(9);
	glBegin(GL_LINES);
	glColor3ub (51, 0, 0);
	glVertex2f(.216,.86);
	glVertex2f(.216,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 0, 0);
	glVertex2f(.263,.86);
	glVertex2f(.263,.82);
	glEnd();
	 glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.76);
	glVertex2f(.161,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.175,.76);
	glVertex2f(.175,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.189,.76);
	glVertex2f(.189,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.82);
	glVertex2f(.31,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.31,.76);
	glVertex2f(.31,.82);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.161,.79);
	glVertex2f(.31,.79);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.29,.76);
	glVertex2f(.29,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.26,.76);
	glVertex2f(.26,.82);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (51, 77, 0);
	glVertex2f(.22,.76);
	glVertex2f(.22,.82);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.215,.74);
	glVertex2f(.215,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.74);
	glVertex2f(.255,.5);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.53);
	glVertex2f(.215,.53);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.56);
	glVertex2f(.215,.56);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.59);
	glVertex2f(.215,.59);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.62);
	glVertex2f(.215,.62);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.65);
	glVertex2f(.215,.65);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.68);
	glVertex2f(.215,.68);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.71);
	glVertex2f(.215,.71);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub (0, 0, 0);
	glVertex2f(.255,.73);
	glVertex2f(.215,.73);
	glEnd();               //watch tower end



    /* Watch */

    glTranslatef(-0.505f, -0.3f, 0.0f);
    glScalef(0.5,0.8,0);
	glBegin(GL_QUADS);              // Watch Vertical Back Body
	glColor3ub(17, 28, 84); // Red
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.03f, 0.0f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

glLoadIdentity();
glLineWidth(2.5);

glTranslatef(-0.5,0.1,1.0);
glScalef(0.0028,0.0028,1.0);


int i3w;                              // Watch outside circle shape


    GLfloat xw=0.0f; GLfloat yw=0.0f; GLfloat radiusw =24.5f;
	int triangleAmountw = 100;

	GLfloat twicePiw = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(xw, yw);
		for(i3w = 0; i3w <=triangleAmountw;i3w++) {
			glVertex2f(
		            xw + (radiusw * cos(i3w *  twicePiw / triangleAmountw)),
			    yw + (radiusw * sin(i3w * twicePiw / triangleAmountw))
			);
		}
	glEnd();

	GLfloat xww=0.0f; GLfloat yww=0.0f; GLfloat radiusww =23.0f;

	int lineAmountww = 100;

	GLfloat twicePiww = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(77, 210, 255);
		for(i3w = 0; i3w<=lineAmountww;i3w++) {
			glVertex2f(
			    xww + (radiusww * cos(i3w *  twicePiww / lineAmountww)),
			    yww + (radiusww * sin(i3w * twicePiww / lineAmountww))
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

    GLfloat xwww=0.0f; GLfloat ywww=0.0f; GLfloat radiuswww =1.5f;
	int triangleAmountwww = 50;

	GLfloat twicePiwww = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
		glVertex2f(xwww, ywww);
		for(i4 = 0; i4 <=triangleAmountwww;i4++) {
			glVertex2f(
		            xwww + (radiuswww * cos(i4 *  twicePiwww / triangleAmountwww)),
			    ywww + (radiuswww * sin(i4 * twicePiwww / triangleAmountwww))
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
    i5+=-0.02f;
    glLoadIdentity();

 glTranslatef(-0.5,0.1,1.0);
    glScalef(0.0028,0.0028,1.0);
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
    i6+=-0.000333333f;
    glLoadIdentity();

glTranslatef(-0.5,0.1,1.0);
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
    i7+=-0.000005555f;
    glLoadIdentity();

//Watch ends


  //car start


glPushMatrix();                        //to move car
glTranslatef(positionC,0,0);


  glBegin(GL_POLYGON);
	glColor3ub (51, 51, 0);
	glVertex2f( -.7,-.4);          //car

glVertex2f(-.7,-.65);
glVertex2f(-.34, -.65);
glVertex2f(-.34, -.56);
glVertex2f(-.42, -.54);
glVertex2f(-.47, -.4);


	glEnd();



int w;

	GLfloat x99=-.63f; GLfloat y99=-.65f; GLfloat radius99=.045f;
	int triangleAmount99 = 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi99 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x99, y99); // center of circle
		for(w = 0; w <= triangleAmount99;w++) {
			glVertex2f(
		            x99 + (radius99 * cos(w *  twicePi99 / triangleAmount99)),
			    y99 + (radius99 * sin(w * twicePi99 / triangleAmount99))
			);
		}
	glEnd();

int w1;

	GLfloat x999=-.63f; GLfloat y999=-.65f; GLfloat radius999=.03f;
	int triangleAmount999= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi999 = 2.0f * PI;
  glColor3ub (0,0,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x999, y999); // center of circle
		for(w1= 0; w1 <= triangleAmount999;w1++) {
			glVertex2f(
		            x999 + (radius999 * cos(w1 *  twicePi999 / triangleAmount999)),
			    y999 + (radius999 * sin(w1 * twicePi999 / triangleAmount999))
			);
		}
	glEnd();
int w11;

	GLfloat x9999=-.63f; GLfloat y9999=-.65f; GLfloat radius9999=.012f;
	int triangleAmount9999= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9999 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9999, y9999); // center of circle
		for(w11= 0; w11 <= triangleAmount9999;w11++) {
			glVertex2f(
		            x9999 + (radius9999 * cos(w11 *  twicePi9999 / triangleAmount9999)),
			    y9999 + (radius9999 * sin(w11 * twicePi9999 / triangleAmount9999))
			);
		}
	glEnd();

int w2;

	GLfloat x992=-.43f; GLfloat y992=-.65f; GLfloat radius992=.045f;
	int triangleAmount992 = 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi992 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x992, y992); // center of circle
		for(w2 = 0; w2 <= triangleAmount992;w2++) {
			glVertex2f(
		            x992 + (radius992 * cos(w2 *  twicePi992 / triangleAmount992)),
			    y992 + (radius992 * sin(w2 * twicePi992 / triangleAmount992))
			);
		}
	glEnd();

int w13;

	GLfloat x9993=-.43f; GLfloat y9993=-.65f; GLfloat radius9993=.03f;
	int triangleAmount9993= 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9993 = 2.0f * PI;
  glColor3ub (0,0,0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9993, y9993); // center of circle
		for(w13= 0; w13 <= triangleAmount9993;w13++) {
			glVertex2f(
		            x9993 + (radius999 * cos(w13 *  twicePi999 / triangleAmount9993)),
			    y9993+ (radius9993 * sin(w13 * twicePi9993 / triangleAmount9993))
			);
		}
	glEnd();
int w113;

	GLfloat x99993=-.43f; GLfloat y99993=-.65f; GLfloat radius99993=.012f;
	int triangleAmount99993= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi99993 = 2.0f * PI;
  glColor3ub (92, 92, 61);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x99993, y99993); // center of circle
		for(w113= 0; w113 <= triangleAmount99993;w113++) {
			glVertex2f(
		            x99993 + (radius99993 * cos(w113 *  twicePi99993 / triangleAmount99993)),
			    y99993 + (radius99993 * sin(w113 * twicePi99993 / triangleAmount99993))
			);
		}
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub (128, 85, 0);
	glVertex2f( -.67,-.45);          //car window

glVertex2f(-.67,-.54);
glVertex2f(-.61, -.54);
glVertex2f(-.61, -.45);




	glEnd();
	glTranslatef(.12,0,0);
glBegin(GL_QUADS);
	glColor3ub (128, 85, 0);
	glVertex2f( -.67,-.45);          // car window

glVertex2f(-.67,-.54);
glVertex2f(-.61, -.54);
glVertex2f(-.61, -.45);

	glEnd();

	glPopMatrix();

	glLoadIdentity();        // car end



  //tree start
  glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glTranslatef(.15,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.30,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.45,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(.6,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.15,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.30,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.45,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.6,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
glTranslatef(1.95,0,0);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (128, 85, 0);

glVertex2f(-.95, .505);

glVertex2f(-.95, .56);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.98, .61);

glVertex2f(-.99, .56);
glVertex2f(-.91, .56);

glVertex2f(-.92, .61);
glEnd();
glBegin(GL_QUADS);
glColor3ub (38, 77, 0);

glVertex2f(-.975, .65);

glVertex2f(-.99, .61);
glVertex2f(-.91, .61);

glVertex2f(-.925, .65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (38, 77, 0);



glVertex2f(-.99, .65);
glVertex2f(-.91, .65);

glVertex2f(-.95, .74);
glEnd();
glLoadIdentity();
                 //tree END

//Helicopter start
         int z1;

	GLfloat x88=.81f; GLfloat y88=.03f; GLfloat radius88=.2f;
	int triangleAmount88= 120; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi88 = 2.0f * PI;
  glColor3ub (0, 77, 26);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x88, y88); // center of circle
		for(z1= 0; z1 <= triangleAmount88;z1++) {
			glVertex2f(
		            x88 + (radius88 * cos(z1*  twicePi88 / triangleAmount88)),
			    y88 + (radius88 * sin(z1 * twicePi88 / triangleAmount88))
			);
		}
	glEnd();

	glLoadIdentity();

glPushMatrix();
glTranslatef(-positionH,positionH,0);


	glBegin(GL_POLYGON);
glColor3ub (240, 212, 34);



glVertex2f(.76, .16);
glVertex2f(.71, .16);

glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);

glVertex2f(.76, .01);
glEnd();
glBegin(GL_QUADS);
glColor3ub (59, 43, 196);

glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);

glEnd();
glBegin(GL_QUADS);
glColor3ub (105, 112, 0);

glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);

glEnd();
glBegin(GL_QUADS);
glColor3ub (240, 212, 34);    //last part of helicopter body

glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (240, 212, 34);    //last part pf helicopter body

glVertex2f(.89, .13);

glVertex2f(.9, .05);
glVertex2f(.91, .13);

glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.74, .13);
glVertex2f(.74, .03);

glVertex2f(.77, .03);
glVertex2f(.77, .13);

glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.78, .1);
glVertex2f(.78, .05);

glVertex2f(.8, .05);
glVertex2f(.8, .1);

glEnd();
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);



glVertex2f(.78, .1);
glVertex2f(.78, .05);

glVertex2f(.8, .05);
glVertex2f(.8, .1);

glEnd();



glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.71, 0.01);

glVertex2f(.71, -.02);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.725, 0.01);

glVertex2f(.725, -.05);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.8, 0.01);

glVertex2f(.8, -.02);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.815, 0.01);

glVertex2f(.815, -.05);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.69, -.020);

glVertex2f(.815,-.020);
glEnd();
glBegin(GL_LINES);
glColor3ub (1, 1, 1);

glVertex2f(.71, -.05);

glVertex2f(.83, -.05);
glEnd();
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (255, 255, 255);

glVertex2f(.735, 0.16);

glVertex2f(.735,.18);
glEnd();
int i3;

	GLfloat xz=.735f; GLfloat yz=.18f; GLfloat radiusz =.012f;
	int triangleAmountz = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiz = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xz, yz); // center of circle
		for(i3 = 0; i3 <= triangleAmountz;i3++) {
			glVertex2f(
		            xz + (radiusz* cos(i3 *  twicePiz / triangleAmountz)),
			    yz + (radiusz* sin(i3 * twicePiz / triangleAmountz))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);

glVertex2f(.735, .18);

glVertex2f(.6, .195);
glVertex2f(.6, .165);

glEnd();
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);

glVertex2f(.735, .18);

glVertex2f(.865, .195);
glVertex2f(.865, .165);

glEnd();


// HELICOPTER END

glPopMatrix();


glLoadIdentity();
/*glLineWidth(9);
glBegin(GL_LINES);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(0, -.3);
	glVertex2f(0,-.25);
	glEnd();
 glBegin(GL_LINES);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(.31, -.3);
	glVertex2f(.31,-.25);
	glEnd();
glBegin(GL_QUADS);                  //SITTING BENCH
	glColor3ub (77, 38, 0);
	glVertex2f(-.1, -.17);
	glVertex2f(-.1,-.25);
	glVertex2f(.39, -.25);
	glVertex2f(.39,-.17);
	glEnd();*/


glBegin(GL_QUADS);                  // shooting car
	glColor3ub (51, 51, 0);
	glVertex2f(0.0, -.05);
	glVertex2f(0.0,-.2);
	glVertex2f(.35, -.2);
	glVertex2f(.35,-.05);
	glEnd();

	glBegin(GL_POLYGON);                  // shooting car
	glColor3ub (105, 112, 0);
	glVertex2f(0.04, -.20);
	glVertex2f(0.06,-.23);
	glVertex2f(.08, -.26);
	glVertex2f(.27,-.26);
	glVertex2f(.29,-.23);
	glVertex2f(.31,-.20);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (105, 112, 0);
	glVertex2f(0.27, .03);
	glVertex2f(0.27,-0.035);
	glVertex2f(.4, -.01);
	glVertex2f(.4,.01);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (105, 112, 0);
	glVertex2f(0.12, .09);
	glVertex2f(0.12,.055);
	glVertex2f(.2, .055);
	glVertex2f(.2,.09);
	glEnd();
	glBegin(GL_QUADS);                  // shooting car
	glColor3ub (51, 51, 0);
	glVertex2f(0.06, -.05);
	glVertex2f(0.05,.055);
	glVertex2f(.3, .055);
	glVertex2f(.28,-.05);
	glEnd();
glLineWidth(5);

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.98, -.3);
	glVertex2f(-.98,-.15);
	glEnd();

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.95, -.3);
	glVertex2f(-.95,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.92, -.3);
	glVertex2f(-.92,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.89, -.3);
	glVertex2f(-.89,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.86, -.3);
	glVertex2f(-.86,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.83, -.3);
	glVertex2f(-.83,-.15);
	glEnd();
glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.8, -.3);
	glVertex2f(-.8,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.77, -.3);
	glVertex2f(-.77,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.74, -.3);
	glVertex2f(-.74,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.71, -.3);
	glVertex2f(-.71,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.68, -.3);
	glVertex2f(-.68,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.65, -.3);
	glVertex2f(-.65,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.62, -.3);
	glVertex2f(-.62,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.59, -.3);
	glVertex2f(-.59,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.56, -.3);
	glVertex2f(-.56,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.53, -.3);
	glVertex2f(-.53,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.505, -.3);
	glVertex2f(-.505,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.48, -.3);
	glVertex2f(-.48,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.45, -.3);
	glVertex2f(-.45,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.42, -.3);
	glVertex2f(-.42,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.39, -.3);
	glVertex2f(-.39,-.15);
	glEnd();glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.36, -.3);
	glVertex2f(-.36,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.33, -.3);
	glVertex2f(-.33,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.31, -.3);
	glVertex2f(-.31,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.28, -.3);
	glVertex2f(-.28,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.25, -.3);
	glVertex2f(-.25,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.22, -.3);
	glVertex2f(-.22,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.19, -.3);
	glVertex2f(-.19,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.16, -.3);
	glVertex2f(-.16,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.13, -.3);
	glVertex2f(-.13,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.10, -.3);
	glVertex2f(-.10,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.07, -.3);
	glVertex2f(-.07,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.04, -.3);
	glVertex2f(-.04,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-.01, -.3);
	glVertex2f(-.01,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.02, -.3);
	glVertex2f(.02,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.05, -.3);
	glVertex2f(.05,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.08, -.3);
	glVertex2f(.08,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.11, -.3);
	glVertex2f(.11,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.14, -.3);
	glVertex2f(.14,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.17, -.3);
	glVertex2f(.17,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.20, -.3);
	glVertex2f(.20,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.23, -.3);
	glVertex2f(.23,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.26, -.3);
	glVertex2f(.26,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.29, -.3);
	glVertex2f(.29,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.32, -.3);
	glVertex2f(.32,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.35, -.3);
	glVertex2f(.35,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.38, -.3);
	glVertex2f(.38,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.41, -.3);
	glVertex2f(.41,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.44, -.3);
	glVertex2f(.44,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.47, -.3);
	glVertex2f(.47,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.5, -.3);
	glVertex2f(.5,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.53, -.3);
	glVertex2f(.53,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.55, -.3);
	glVertex2f(.55,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.58, -.3);
	glVertex2f(.58,-.15);
	glEnd();

	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.61, -.3);
	glVertex2f(.61,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.64, -.3);
	glVertex2f(.64,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.67, -.3);
	glVertex2f(.67,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.7, -.3);
	glVertex2f(.7,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.73, -.3);
	glVertex2f(.73,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.76, -.3);
	glVertex2f(.76,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.79, -.3);
	glVertex2f(.79,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.82, -.3);
	glVertex2f(.82,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.85, -.3);
	glVertex2f(.85,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.88, -.3);
	glVertex2f(.88,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.91, -.3);
	glVertex2f(.91,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.94, -.3);
	glVertex2f(.94,-.15);
	glEnd();
	glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(.97, -.3);
	glVertex2f(.97,-.15);
	glEnd();
glBegin(GL_LINES);                  //roadside border
	glColor3ub (0,0,0);
	glVertex2f(-1, -.19);
	glVertex2f(1,-.19);
	glEnd();              //roadside border end


   //river side
   glPushMatrix();
glTranslatef(position,0,0);
glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.9, -.9);
	glVertex2f(-0.87,-.97);
	glVertex2f(-.5, -.97);
	glVertex2f(-.45,-.85);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (107, 107, 71);
	glVertex2f(-0.86, -.84);
	glVertex2f(-0.86,-.9);
	glVertex2f(-.55, -.865);
	glVertex2f(-.55,-.81);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.78, -.78);
	glVertex2f(-0.79,-.84);
	glVertex2f(-.63, -.82);
	glVertex2f(-.62,-.73);
	glEnd();
	glBegin(GL_QUADS);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.72, -.74);
	glVertex2f(-0.73,-.77);
	glVertex2f(-.66, -.745);
	glVertex2f(-.65,-.7);
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);                  // ship
	glColor3ub (20, 31, 31);
	glVertex2f(-0.64, -.77);
	glVertex2f(-0.57,-.71);

	glEnd();
	glPopMatrix() ;          //ship end
	// bridge line

	glBegin(GL_TRIANGLES);
	glColor3ub (0, 0, 0);
	glVertex2f(-0.988, -.05);
	glVertex2f(-0.97,.05);
	glVertex2f(-1,.05);

	glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub (255, 51, 0);

	glVertex2f(-0.97,.05);
	glVertex2f(-0.988, .15);
	glVertex2f(-1,.05);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(-0.99, -1);
	glVertex2f(-0.99,-.02);

	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub (0, 0, 0);
	glVertex2f(0.988, -.05);
	glVertex2f(0.97,.05);
	glVertex2f(1,.05);

	glEnd();
     glBegin(GL_TRIANGLES);
	glColor3ub (255, 51, 0);

	glVertex2f(0.97,.05);
	glVertex2f(0.988, .15);
	glVertex2f(1,.05);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(0.99, -1);
	glVertex2f(0.99,-.02);

	glEnd();
	glLineWidth(15);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(-0.07, -.7);
	glVertex2f(-0.07,-.18);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(0.14, -.35);
	glVertex2f(0.14,-.02);

	glEnd();
	glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub (255, 51, 0);
	glVertex2f(-0.07, -.19);
	glVertex2f(0.14,-.028);

	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(-0.074, -.18);
	glVertex2f(-.98,-.7);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(0.13, -.030);
	glVertex2f(-.98,-.35);

	glEnd();
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(-0.074, -.18);
	glVertex2f(.98,-.7);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub (26, 255, 163);
	glVertex2f(0.13, -.030);
	glVertex2f(.98,-.35);

	glEnd();

	glLoadIdentity();
	glutTimerFunc(8000, Night_LOOP, 0);

glFlush();
}

void soundRain()
{

    PlaySound("ArmyCamp_Rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void soundStopRain()
{

    PlaySound("ArmyCamp_StopRain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void soundDay()
{

    PlaySound("ArmyCamp_Day.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void soundNight()
{

    PlaySound("ArmyCamp_Night.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void handleKeypress1(unsigned char key, int x, int y) {
	switch (key) {
case 'b':
    speedC = 0.0f;
    break;
case 'c':
    speedC = 0.005f;
    break;
case 'r':
    glutDisplayFunc(myDisplayRain);
    soundRain();
    speedR = 0.09f;
    speedC = 0.002f;
    break;
case 't':
    soundStopRain();
    speedR = 0.0f;
    break;
case 'd':
    glutDisplayFunc(myDisplayDay);
    soundDay();
    break;
case 'n':
    glutDisplayFunc(myDisplayNight);
    soundNight();
    speedC = 0.0f;
    break;
glutPostRedisplay();
	}
}




int main(int argc, char** argv)
{




    cout << endl << "*********** Military Base Camp ********************" << endl << endl;

    cout << "Press c / Press left button of mouse : To Forward the Jeep" << endl << endl;
    cout << "Press right button of mouse : To Backward the Jeep" << endl << endl;
    cout << "Press b : To Stop the Jeep" << endl << endl;

    cout << "Press r : For Rain & generate Rain Sound" << endl << endl;
    cout << "Press t : To Stop The Rain & generate Firing Sound" << endl << endl;

    cout << "Press n : For Night Mode & generate Night Sound" << endl << endl;
    cout << "Press d : For Day Mode & generate Day Sound" << endl << endl<<endl;



    cout << "          COMPUTER GRAPHICS [E]           " << endl ;
    cout << "  Project Submission [ Summer 2020-2021 ]" << endl << endl;
    cout << "Submitted To : ANEEM AL AHSAN RUPAI" << endl << endl;
    cout << "Submitted By : Nura Solahin Esha" << endl ;
    cout << "ID           : 18-38828-3" << endl << endl<< endl;
    cout << "Submitted By : Mahmud, Nafi" << endl ;
    cout << "ID           : 17-33793-1" << endl << endl<< endl;
    cout << "        Thank you!" << endl << endl;



glutInit(&argc, argv);

glutInitWindowSize (320, 320);
glutInitWindowPosition (50, 50);
glutCreateWindow ("Military Base Camp");
glutDisplayFunc(myDisplayDay);
glutKeyboardFunc(handleKeypress1);
glutMouseFunc(handleMouse);
glutTimerFunc(100, updateSun, 0);
glutTimerFunc(100, updateMoon, 0);
glutTimerFunc(100, updateC, 0);
glutTimerFunc(100, updateR, 0);
glutTimerFunc(100, updateR, 0);
glutTimerFunc(100, updateH, 0);
glutTimerFunc(100, updateB, 0);
glutTimerFunc(100, updateTrain, 0);
glutTimerFunc(100, update_s, 0);
soundDay();

glutMainLoop();
return 0;
}

