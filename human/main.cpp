#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>
#include<cstdio>
#include<time.h>

# define PI           3.14159265358979323846
using namespace std;
bool stop = 1;                   ///declare variable
bool temp =0;
bool rainday = false;             ///initialy false jno bristy na hoy
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
GLfloat e = 0.0f;
float _move2= 0.0;
float _move = 0.0;
float _move1=0.0;   /// translate variable for moving
float _move3=0.0;
float _move4=0.0;
float _move5=0.0;
float _move6=0.0;


//int dayStatus=0;
int nightStatus=0;

GLfloat position = 0.1f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.005f;


GLfloat position1 = 0.1f;



void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}



void update(int value) {

    if(position <-2.0)
       position =+2.0f;
       position -= speed;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 <-0.40)
       position1 =+0.0f;
       position1 -= speed1;

glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}

void drawLeaf(float x, float y, float radius) {
    // Set the color to green
    glColor3f(0.0, 0.28, 0.0);

    // Draw a circle for the leaf
    glBegin(GL_POLYGON);
    for (int i = 0; i < 16; i++) {
        float angle = i * 2 * M_PI / 16;
        float cx = x + radius * cos(angle);
        float cy = y + radius * sin(angle);
        glVertex2f(cx, cy);
    }
    glEnd();

}

void drawLeg(float x, float y, float width, float height) {
    // Set the color to brown for the leg
    glColor3f(0.5, 0.3, 0.0);

    // Draw the leg as a rectangle
    glPushMatrix();
    glTranslatef(x, y, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(width, 0.0);
    glVertex2f(width, height);
    glVertex2f(0.0, height);
    glEnd();
    glPopMatrix();
}

void drawMale() {

    glPushMatrix();
    glTranslatef(0.0f,-0.2f,0.0f);
    glScalef(1.0f,1.8f,0.0f);
    // Draw the shirt
    glColor3f( 1.0, 1.0, 0.5); // Blue shirt color
    glBegin(GL_POLYGON);
    glVertex2f(0.2, 0.0);
    glVertex2f(-0.2, 0.0);
    glVertex2f(-0.2, -0.6);
    glVertex2f(0.2, -0.6);
    glEnd();

glPopMatrix();
glEnd();


glEnd();
    // Draw the head
    glColor3f(1.0, 0.9, 0.8); // Skin color
    glPushMatrix();
    glTranslatef(0.0, 0.1, 0.0); // Move up from the body
    glutSolidSphere(0.20, 16, 16); // Draw the head as a sphere
    glPopMatrix();

    glEnd();
    glPushMatrix();


glPopMatrix();


glPushMatrix();
glScalef(0.7f,1.0f,0.0f);
glTranslatef(-0.2f,-0.68f,0.0f);
      // Draw the legs
    glColor3f(0.3, 0.3, 0.3); // Dark grey leg color
    glBegin(GL_POLYGON);
    glVertex2f(0.05, -0.6);
    glVertex2f(-0.05, -0.6);
    glVertex2f(-0.1, -1.0);
    glVertex2f(0.1, -1.0);
    glEnd();

    // Draw the shoes
    glColor3f(0.1, 0.1, 0.1); // Black shoe color
    glBegin(GL_POLYGON);
    glVertex2f(0.1, -1.0);
    glVertex2f(-0.1, -1.0);
    glVertex2f(-0.15, -1.1);
    glVertex2f(0.15, -1.1);
    glEnd();
    glPopMatrix();







glPushMatrix();
glScalef(0.7f,1.0f,0.0f);
glTranslatef(0.2f,-0.68f,0.0f);
      // Draw the legs
    glColor3f(0.3, 0.3, 0.3); // Dark grey leg color
    glBegin(GL_POLYGON);
    glVertex2f(0.05, -0.6);
    glVertex2f(-0.05, -0.6);
    glVertex2f(-0.1, -1.0);
    glVertex2f(0.1, -1.0);
    glEnd();

    // Draw the shoes
    glColor3f(0.1, 0.1, 0.1); // Black shoe color
    glBegin(GL_POLYGON);
    glVertex2f(0.1, -1.0);
    glVertex2f(-0.1, -1.0);
    glVertex2f(-0.15, -1.1);
    glVertex2f(0.15, -1.1);
    glEnd();
    glPopMatrix();
}

void moon(){
     {


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    {


    int j;

    GLfloat p2=0.65f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.2, 0.2, 0.2);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}



void tree()
{


glPushMatrix();
glColor3f(0.6, 0.4, 0.2);
glBegin(GL_QUADS);
glScalef(0.3f,0.3f,0.0f);
glTranslatef(0.6f,-0.6f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f,0.1f);
glVertex2f(-0.2f,-0.2f);
glVertex2f(-0.1f,-0.2f);

glEnd();
glPopMatrix();
glEnd();
}



void drawBranch(float x, float y, float length, float angle, float thickness) {
    // Draw the branch as a line
    glLineWidth(thickness);
    glBegin(GL_LINES);
    glVertex2f(x, y);
    glVertex2f(x + length * sin(angle), y + length * cos(angle));
    glEnd();
}

void drawTreeBranch(float x, float y, float length, float angle, float radius, int depth) {
    // Draw the branch
    glPushMatrix();
    glTranslatef(x, y, 0.0);
    glRotatef(angle, 0.0, 0.0, 1.0);
    glColor3f(0.5, 0.3, 0.0);
    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    gluCylinder(quadratic, radius, radius, length, 16, 16);
    glPopMatrix();

    // Draw the leaves
    if (depth > 0) {
        float leafRadius = radius * 2;
        float leafAngle = M_PI / 4;
        float leafCount = 8;
        float leafGap = leafAngle * 2;
        float leafStart = -leafAngle * (leafCount - 1) / 2;
        for (int i = 0; i < leafCount; i++) {
            float leafAngle = leafStart + i * leafGap;
            float leafX = x + cos(angle) * length + cos(leafAngle) * leafRadius;
            float leafY = y + sin(angle) * length + sin(leafAngle) * leafRadius;
            drawLeaf(leafX, leafY, leafRadius);
        }
    }

    // Draw child branches
    if (depth > 1) {
        int childCount = 2;
        float childAngleRange = M_PI / 4;
        float childAngleStart = -childAngleRange * (childCount - 1) / 2;
        float childLength = length / 2;
        float childRadius = radius / 2;
        for (int i = 0; i < childCount; i++) {
            float childAngle = childAngleStart + i * childAngleRange;
            drawTreeBranch(x + cos(angle) * length, y + sin(angle) * length, childLength, angle + childAngle, childRadius, depth - 1);
        }
    }
}

void drawPalmTree(float x, float y, float height, float trunkRadius, float leafRadius, float leafLength) {
    // Set the color to brown for the trunk
    glColor3f(0.5, 0.3, 0.0);

    // Draw the trunk as a cylinder
    glPushMatrix();
    glTranslatef(x, y, 0.0);
    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    gluCylinder(quadratic, trunkRadius, trunkRadius, height, 16, 16);
    glPopMatrix();

    // Set the color to green for the leaves
    glColor3f(0.0, 0.5, 0.0);

    // Draw the leaves as triangles
    float leafAngle = M_PI / 4; // angle between two leaves
    float leafCount = 8; // number of leaves
    float leafGap = leafAngle * 1.2; // gap between two leaves
    float leafStart = -leafAngle * (leafCount - 1) / 2; // start angle of the first leaf
    for (int i = 0; i < leafCount; i++) {
        float angle = leafStart + i * leafGap; // angle of the current leaf
        float x1 = x + sin(angle) * trunkRadius;
        float y1 = y + cos(angle) * trunkRadius;
        float x2 = x1 + sin(angle) * leafLength;
        float y2 = y1 + cos(angle) * leafLength;
        float x3 = x2 + sin(angle + leafAngle) * leafRadius;
        float y3 = y2 + cos(angle + leafAngle) * leafRadius;
        float x4 = x2 + sin(angle - leafAngle) * leafRadius;
        float y4 = y2 + cos(angle - leafAngle) * leafRadius;
        glBegin(GL_POLYGON);
        glVertex2f(x1, y1);
        glVertex2f(x3, y3);
        glVertex2f(x2, y2);
        glVertex2f(x4, y4);
        glEnd();
    }



}




void DrawCircle(float cx, float cy, float r)
{
    glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i < 300; i++)
        {
            double theta = 2.0f * 3.1416f * i /300;//get current angle
            double x = r * cosf(theta);//calculate x
            double y = r * sinf(theta);//calculate y
            glVertex2f(x + cx, y + cy);//output vertex
        }
    glEnd();
    glFlush();
}


   void tree1()
{

    glColor3f(0.2f ,0.5f, 0.1f);//middle
    DrawCircle(0.70, 0.40,0.06);
    DrawCircle(0.80, 0.40,0.06);
    DrawCircle(0.75, 0.45,0.06);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.67, 0.45,0.06);
    DrawCircle(0.82, 0.45,0.06);
    DrawCircle(0.75, 0.52,0.06);
    DrawCircle(0.82, 0.36,0.06);
    DrawCircle(0.68, 0.35,0.06);
    glEnd();

    glLineWidth(18.5);//middle
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.75f, -0.12f);
    glVertex2f(0.75f, 0.40f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//left
    DrawCircle(0.67, 0.28,0.06);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.65, 0.25,0.06);
    DrawCircle(0.64, 0.30,0.06);
    glEnd();

    glLineWidth(12.5);//left
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.75f, 0.22f);
    glVertex2f(0.70f, 0.27f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//right
    DrawCircle(0.82, 0.24,0.05);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.84, 0.26,0.05);
    DrawCircle(0.83, 0.21,0.05);

    glEnd();

    glLineWidth(12.5);//right
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.75f, 0.15f);
    glVertex2f(0.80f, 0.22f);
    glEnd();


    glFlush();

}




void tree2()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f ,0.4f, 0.0f);//deep green
    glVertex2f(0.0f, -0.15f);
    glVertex2f(0.03f, 0.05f);
    glVertex2f(0.05f, -0.15f);

    glColor3f(0.0f ,0.4f, 0.0f);
    glVertex2f(0.06f, 0.01f);
    glVertex2f(0.08f, -0.15f);
    glVertex2f(0.04f, -0.15f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//middle
    DrawCircle(-0.05, 0.50,0.07);
    DrawCircle(0.05, 0.50,0.07);
    DrawCircle(0.0, 0.55,0.07);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.09, 0.55,0.07);
    DrawCircle(0.0, 0.62,0.07);
    DrawCircle(0.08, 0.45,0.07);
    DrawCircle(0.08, 0.55,0.07);
    DrawCircle(-0.09, 0.45,0.07);
    glEnd();

    glLineWidth(18.5);//middle
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.0f, 0.50f);
    glVertex2f(0.0f, -0.15f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//left
    DrawCircle(-0.10, 0.34,0.07);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.14, 0.40,0.07);
    DrawCircle(-0.12, 0.30,0.07);
    glEnd();

    glLineWidth(12.5);//left
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.1f, 0.38f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//right
    DrawCircle(0.10, 0.31,0.07);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.12, 0.26,0.07);
    DrawCircle(0.13, 0.35,0.07);

    glEnd();

    glLineWidth(12.5);//right
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.0f, 0.20f);
    glVertex2f(0.1f, 0.30f);
    glEnd();

    //glFlush();

}

void doorDesign(){

    glPushMatrix();
 glColor3f(0.8, 0.8, 0.8);

    // Draw the first quad
    glBegin(GL_QUADS);
    glVertex2f(-0.8, -0.8);
    glVertex2f(-0.6, -0.8);
    glVertex2f(-0.6, -0.6);
    glVertex2f(-0.8, -0.6);
    glEnd();

    glPopMatrix();
    glEnd();
}
void windowBorder()
{

    glPushMatrix();
    glTranslatef(-0.5f,0.3f,0.0f);
glScalef(0.15f,0.2f,0.0f);
glColor3f(0.5, 0.3, 0.2);
glLineWidth(5.0);

glBegin(GL_LINES);
glVertex2f(0.0f,0.0f);
glVertex2f(0.3f,0.2f);
glBegin(GL_LINES);
glVertex2f(0.3f,0.2f);
glVertex2f(0.6f,0.0f);
glEnd();
    glPopMatrix();
glEnd();







    glPushMatrix();
 // Draw the window frame
 glTranslatef(-0.455f,0.25f,0.0f);
glScalef(0.07f,0.15f,0.0f);
    glColor3f(0.4, 0.2, 0.1); // set color to vintage wood
    glBegin(GL_POLYGON);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(-0.4, 0.4);
    glEnd();

    // Draw the window panes
    glColor4f(0.0, 0.0, 0.0, 0.0); // set color to faded off white
    glLineWidth(0.5);

    glBegin(GL_LINES);
    glVertex2f(-0.2, -0.4);
    glVertex2f(-0.2, 0.4);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.2, 0.4);
    glVertex2f(-0.4, 0);
    glVertex2f(0.4, 0);

glPopMatrix();
glEnd();
glPopMatrix();
}
void border()
{

     // Draw the earth in front of the palace
    glColor3f(0.6, 0.4, 0.2); // set color to brown
    glBegin(GL_POLYGON);
    glVertex2f(-1.0, -0.5);
    glVertex2f(1.0, -0.5);
    glVertex2f(1.0, -0.7);
    glVertex2f(-1.0, -0.7);
    glEnd();

}

void roofBorder()
{

    //Border of roof
glLineWidth(20.0); // set line width to 2 pixels
glColor3f(0.0, 0.0, 0.0); // set color to black
glBegin(GL_LINE_LOOP);
glVertex2f(-0.7, 0.5);
glVertex2f(0.7, 0.5);
glVertex2f(0.3, 0.9);
glVertex2f(-0.3, 0.9);

glEnd();
}
void palace(){

    glPushMatrix();
glColor3f(0.95, 0.91, 0.82); // set color to vintage off white
    glScalef(1.0f,2.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.55, 0.2);
    glVertex2f(-0.55, 0.2);
    glEnd();
glPopMatrix();

glPushMatrix();


glScalef(1.0f,1.0f,0.0f);
glTranslatef(0.0f,0.2f,0.0f);
    glColor3f(0.7, 0.7, 0.7); // set color to brown
    glBegin(GL_POLYGON);

    glVertex2f(-0.55, 0.2);
    glVertex2f(0.55, 0.2);
    glVertex2f(0.2, 0.6);
    glVertex2f(-0.2, 0.6);
    glEnd();

glPopMatrix();

glPushMatrix();
  // Draw the moon in the sky
moon();
    glPopMatrix();

    glEnd();
}


void hair() {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=70;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.0,0.0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=70;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.0,0.0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=70;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0,0.0,0.0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }









//////nightcloud

void cloudNight(){
     {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}
void plot(float x,float y,float a,float b)
{
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
    glVertex2f(((-5.0*x)+a),(b+(0.0*y)));
    glVertex2f(((5.0*x)+a),(b+(y*0.0)));
    glVertex2f(((0.0*x)+a),(b+(-y*5.0)));
    glVertex2f(((0.0*x)+a),(b+(y*10.0)));
    glEnd();

}
void Body(float x,float y,float a,float b)
{
    glColor3ub(210.0f,105.0,30.0);//RGB chocholate
    glBegin(GL_QUADS);//body
    glVertex2f(((-1.0*x)+a),(b+(-y*2.0f)));
    glVertex2f(((0.5*x)+a),(b+(y*0.0f)));
    glVertex2f(((0.80*x)+a),(b+(y*8.0f)));
    glVertex2f(((-0.5*x)+a),(b+(y*6.0f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Left_Branch
    glVertex2f(((-0.5*x)+a),(b+(y*6.0f)));
    glVertex2f(((-3.5*x)+a),(b+(y*9.0f)));
    glVertex2f(((-0.5*x)+a),(b+(y*5.4f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Right_Branch
    glVertex2f(((0.5*x)+a),(b+(y*5.8f)));
    glVertex2f(((5.0*x)+a),(b+(y*11.5f)));
    glVertex2f(((0.7*x)+a),(b+(y*5.3f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Right_root
    glVertex2f(((0.5*x)+a),(b+(y*0.0f)));
    glVertex2f(((0.4*x)+a),(b+(y*1.0f)));
    glVertex2f(((4.0*x)+a),(b+(y*0.0f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Left_root
    glVertex2f(((-0.5*x)+a),(b+(y*0.5f)));
    glVertex2f(((-0.4*x)+a),(b+(y*1.5f)));
    glVertex2f(((-4.0*x)+a),(b+(y*0.0f)));
    glEnd();

}
void Leaf(float x,float y,float a,float b)
{

    glBegin(GL_POLYGON);// Draw a green circle centered at up left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(a+(x*( (r * cos(A))-5)));
            float q =(b+(y*( 10+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(a+(x*((r * cos(A))-4)));
            float q =(b+(q*(13+r * sin(A))));
            glVertex2f(p,q);
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up Right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (a+(x*((r * cos(A))+5)));
            float q = (b+(y*(10+r * sin(A))));
            glVertex2f(p,q);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (a+(x*((r * cos(A))-4)));
            float q = (b+(y*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

		glBegin(GL_POLYGON);// Draw a green circle centered at upper right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (a+(x*((r * cos(A))+4)));
            float q = (b+(y*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up middle
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.5;
            float p = (a+(x*(r * cos(A))));
            float q = (b+(y*(13+r * sin(A))));
            glVertex2f(p,q);
        }

	glEnd();

	glFlush();  // Render now

}
void Tree() {

glutInitWindowSize(320,320);
gluOrtho2D(0.0,500.0,0.0,500.0);

glPointSize(200);
float x=30,y=30;//Scale
float a=0,b=0;//Position
glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
//glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(20.0);
Body(x,y,a,b);
Leaf(x,y,a,b);
//plot(x,y);

 glEnd();
}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(0.0, 0.0, 1.0);




	glPushMatrix();
    // Draw the sky as a blue gradient
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-1.0, 1.0);
    glVertex2f(1.0, 1.0);
    glColor3f(0.3, 0.3, 0.3); // light blue color
    glVertex2f(1.0, -1.0);
    glVertex2f(-1.0, -1.0);
glEnd();




     // Draw the earth rectangle
    glColor3f(0.4, 0.3, 0.2);
    glBegin(GL_POLYGON);
    glVertex2f(-2.0, -2.0);
    glVertex2f(2.0, -2.0);
    glVertex2f(2.0, -0.5);
    glVertex2f(-2.0, -0.5);
    glEnd();

 glPushMatrix();
    //glScalef(1.2f,1.5f,0.0f);
    glScalef(1.2f,1.0f,0.0f);
    palace();
    glEnd();
    glPopMatrix();

    glEnd();

    glPushMatrix();
    glScalef(0.48f,0.2f,0.0f);
    border();
    glPopMatrix();


     glPushMatrix();
    glScalef(0.52f,0.2f,0.0f);
    glTranslatef(0.0f,1.4f,0.0f);
    border();
    glPopMatrix();

 glPushMatrix();
    glScalef(0.45f,0.2f,0.0f);
    glTranslatef(0.0f,-1.7f,0.0f);
    border();
    glPopMatrix();


glEnd();

glPushMatrix();
glScalef(0.8f,1.2f,0.0f);
glTranslatef(0.0f,-0.18f,0.0f);
//roofBorder();
glPopMatrix();

glEnd();

glPushMatrix();

windowBorder();

glPopMatrix();

glEnd();



glPushMatrix();
glTranslatef(0.15f,0.0f,0.0f);
windowBorder();

glPopMatrix();


glPushMatrix();
glTranslatef(0.3f,0.0f,0.0f);
windowBorder();

glPopMatrix();


glPushMatrix();
glTranslatef(0.45f,0.0f,0.0f);
windowBorder();

glPopMatrix();



glPushMatrix();
glTranslatef(0.6f,0.0f,0.0f);
windowBorder();

glPopMatrix();



glPushMatrix();
glTranslatef(0.75f,0.0f,0.0f);
windowBorder();

glPopMatrix();




glPushMatrix();
glTranslatef(0.9f,0.0f,0.0f);
windowBorder();

glPopMatrix();





glPushMatrix();
glTranslatef(0.00f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();




glPushMatrix();
glTranslatef(0.15f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();


glPushMatrix();
glTranslatef(0.30f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.45f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.60f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.75f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.90f,-0.25f,0.0f);
windowBorder();

glPopMatrix();
glEnd();


//Third row

glPushMatrix();
glTranslatef(0.029f,-0.55f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.16f,-0.55,0.0f);
windowBorder();

glPopMatrix();

glEnd();




glPushMatrix();
glTranslatef(0.30f,-0.55f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.45f,-0.55f,0.0f);
windowBorder();

glPopMatrix();
glEnd();





glPushMatrix();
glTranslatef(0.60f,-0.55f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.75f,-0.55f,0.0f);
windowBorder();

glPopMatrix();
glEnd();

glPushMatrix();
glTranslatef(0.87f,-0.55f,0.0f);
windowBorder();

glPopMatrix();
glEnd();




glPushMatrix();
glTranslatef(0.08f,-0.9f,0.0f);
windowBorder();

glPopMatrix();
glEnd();

//4th row window

glPushMatrix();
glTranslatef(0.2f,-0.9f,0.0f);
windowBorder();

glPopMatrix();
glEnd();




glPushMatrix();
glTranslatef(0.5f,-0.9f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



glPushMatrix();
glTranslatef(0.65f,-0.9f,0.0f);
windowBorder();

glPopMatrix();
glEnd();




glPushMatrix();
glTranslatef(0.8f,-0.9f,0.0f);
windowBorder();

glPopMatrix();
glEnd();



//Door and Design
glPushMatrix();
glTranslatef(-0.1f,-0.64f,0.0f);
glScalef(0.15f,0.32f,0.0f);
 glColor3f(0.4, 0.2, 0.1); // set color to vintage wood
    glBegin(GL_POLYGON);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(-0.4, 0.4);
    glEnd();

glPopMatrix();
glEnd();

glPopMatrix();

glPushMatrix();
glScalef(0.2f,0.5f,0.0f);
glTranslatef(0.37f,-0.7f,0.0f);
doorDesign();

glPopMatrix();

glEnd();

glPopMatrix();

glPushMatrix();
glScalef(0.2f,0.5f,0.0f);
glTranslatef(0.05f,-0.7f,0.0f);
doorDesign();

glPopMatrix();
glEnd();




glPushMatrix();
glScalef(0.2f,0.5f,0.0f);
glTranslatef(0.05f,-0.45f,0.0f);
doorDesign();

glPopMatrix();
glEnd();



glPushMatrix();
glScalef(0.2f,0.5f,0.0f);
glTranslatef(0.37f,-0.45f,0.0f);
doorDesign();

glPopMatrix();
glEnd();


glPushMatrix();
glScalef(0.2f,0.3f,0.0f);
glTranslatef(3.8f,0.4f,0.0f);
    // Draw two palm trees
    drawPalmTree(-0.6, -0.3, 1.0, 0.05, 0.2, 0.3);
    drawPalmTree(0.6, -0.4, 1.2, 0.07, 0.3, 0.4);

    glPopMatrix();
    glEnd();

glPushMatrix();
glScalef(0.1f,0.8f,0.0f);
glTranslatef(8.9f,-0.53f,0.0f);
      glColor3f(0.5, 0.35, 0.05); // set color to brown
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, -0.5);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.2, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.2, -0.4);
    glEnd();
glPopMatrix();








glPushMatrix();
glScalef(0.2f,0.3f,0.0f);
glTranslatef(3.8f,0.4f,0.0f);
    // Draw two palm trees
    drawPalmTree(-0.6, -0.3, 1.0, 0.05, 0.2, 0.3);
    drawPalmTree(0.6, -0.4, 1.2, 0.07, 0.3, 0.4);

    glPopMatrix();
    glEnd();

glPushMatrix();
glScalef(0.1f,0.8f,0.0f);
glTranslatef(6.5f,-0.50f,0.0f);
      glColor3f(0.5, 0.35, 0.05); // set color to brown
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, -0.5);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.2, -0.4);
    glVertex2f(0.2, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.2, -0.4);
    glEnd();
glPopMatrix();
glEnd();

glPushMatrix();
glLineWidth(0.01);
glRotatef(97,1,1,0);
glScalef(0.3f,0.5,0.3f);
glTranslatef(-1.9f,1.7,0.0f);
// Set the color to brown
    glColor3f(0.0, 0.0, 0.0);

    // Draw the tree leg curve
    glBegin(GL_LINE_STRIP);
    for (float x = -1.0; x <= 1.0; x += 0.05) {
        float y = exp(-x*x) * cos(2*M_PI*x);
        glVertex2f(x, y);
    }
    glEnd();

glPopMatrix();

glEnd();





glPushMatrix();
glLineWidth(0.01);
glRotatef(96,0,1,0);
glScalef(0.1f,0.4,0.3f);
glTranslatef(2.3f,-1.0,0.0f);
// Set the color to brown
    glColor3f(0.0, 0.0, 0.0);

    // Draw the tree leg curve
    glBegin(GL_LINE_STRIP);
    for (float x = -1.0; x <= 1.0; x += 0.05) {
        float y = exp(-x*x) * cos(2*M_PI*x);
        glVertex2f(x, y);
    }
    glEnd();

glPopMatrix();

glPushMatrix();
glScalef(0.3f,0.3f,0.0f);
glTranslatef(1.5,-3.0f,0.0f);
  // Draw a tree branch with leaves
    drawTreeBranch(0.0, 0.0, 0.5, 0.0, 0.05, 3);

 glPopMatrix();
glEnd();

glPushMatrix();

glColor4f(0.5, 0.7, 0.3, 0.5); // set color to transparent earth color
glBegin(GL_POLYGON);
glVertex2f(-1.0, -0.5);
glVertex2f(1.0, -0.5);
glVertex2f(1.0, -1.0);
glVertex2f(-1.0, -1.0);
glEnd();



glEnd();

    glPushMatrix();
    glScalef(0.3f,0.3f,0.0f);
    glTranslatef(-2.8, -1.3, 0.0); // Move to the left of the screen
    drawMale();
    glPopMatrix();

    glEnd();







glPushMatrix();
glScalef(0.05f,0.1f,0.0f);
glTranslatef(-16.8f,-4.0f,0.0f);
glBegin(GL_QUADS);
glColor3f(1.0, 0.9, 0.8); // set the color to red
    glVertex3f(-0.5, -0.5, 0.0); // specify the vertices
    glVertex3f(-0.5, 0.5, 0.0);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glEnd(); // end the drawing
glPopMatrix();






glEnd();


glPushMatrix();
 glColor3f( 1.0, 1.0, 0.5);
 glScalef(0.8f,0.9,0.0f);
   glTranslatef(-1.1, -0.61, 0.0);
   glBegin(GL_QUADS);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.1, 0.0);
      glVertex2f(0.1, 0.1);
      glVertex2f(0.0, 0.1);
   glEnd();

glPushMatrix();
glScalef(0.7f,1.7f,0.0f);
glTranslatef(0.05f,-0.1f,0.0f);


glPopMatrix();
   glPopMatrix();
glEnd();

glPushMatrix();
glColor3f(1.0, 0.9, 0.8);
glScalef(0.3f,0.2f,0.0f);
glTranslatef(-2.5f,-2.6f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-0.2f,-0.2f);
glVertex2f(0.1f,-0.3f);
glVertex2f(0.1f,-0.2f);
glVertex2f(-0.1f,-0.1f);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(0.1f,-0.2f);
glVertex2f(0.1f,-0.3f);
glVertex2f(0.5f,0.0f);
glVertex2f(0.45f,0.1f);
glEnd();
glPopMatrix();
glEnd();


glPushMatrix();
glScalef(0.3f,0.3f,0.0f);
glTranslatef(-3.0f,-2.0f,0.0f);
//hair();

glPopMatrix();

glEnd();
glPushMatrix();
glScalef(0.25f,0.25f,0.0f);
glTranslatef(-3.5f,-2.3f,0.0f);
//hair();

glPopMatrix();

glEnd();


glPushMatrix();

glPopMatrix();


glEnd();

 glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloudNight();
   glPopMatrix();
glEnd();

glPushMatrix();
glScalef(0.4f,0.4f,0.0f);
glTranslatef(-0.2f,0.8f,0.0f);
tree();
glPopMatrix();

glPushMatrix();
glScalef(0.9f,0.9f,0.0f);
glTranslatef(-0.1f,-0.8f,0.0f);
tree1();
glPopMatrix();



glPopMatrix();

    glEnd();
	glFlush();


    //glFlush();
}


//////move algo//////////
void keyboard(unsigned char key, int x, int y){


	 if (key == 's' || key == 's'){		//sun start
//		sunStatus = 1;
		speed1=0.002;
	}
	 if (key == 'S' || key == 'S'){		//sun stop
		speed1=0;
	}
	if (key == 'l' || key == 'l'){		//carLight start
		//carLightStatus = 1;
	}
	 if (key == 'L' || key == 'L'){		//carLight stop
//		carLightStatus=0;
	}
	if (key == 'n' || key == 'n'){		//carLight stop
		nightStatus=1;
	}
	if (key == 'N' || key == 'N'){		//carLight stop
		nightStatus=0;
	}



}

void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(700, 700);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("Old Palace");
   glutDisplayFunc(display);
   glutKeyboardFunc(keyboard);
   glutTimerFunc(100,update,0);
   glutTimerFunc(100,update1,0);
   sndPlaySound("sound.wav",SND_ASYNC);
   myInit();
   glutMainLoop();
   return 0;
}
