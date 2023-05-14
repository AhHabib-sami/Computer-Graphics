#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<bits/stdc++.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
float rightL = 0.0;

void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
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

void humanface()
{


      glBegin(GL_QUADS);
        glColor3f(0.0f ,0.0f, 0.0f);  //body // belly
        glVertex2f(0.19f, 0.07f);
        glVertex2f(0.21f, 0.10f);
        glVertex2f(0.21f, 0.10f);
        glVertex2f(0.19f, 0.05f);
    glEnd();


    /*  glBegin(GL_QUADS);
        glColor3f(0.0f ,0.0f, 0.0f);  //body // belly
        glVertex2f(0.23f, 0.07f);
        glVertex2f(0.21f, 0.10f);
        glVertex2f(0.21f, 0.10f);
        glVertex2f(0.23f, 0.05f);
    glEnd();

*/


        glBegin(GL_QUADS);
        glColor3f(0.0f ,0.0f, 0.0f);  //body // belly
        glVertex2f(0.23f, 0.10f);
        glVertex2f(0.21f, 0.05f);
        glVertex2f(0.21f, 0.07f);
        glVertex2f(0.23f, 0.10f);
            glEnd();

}


void king()
{


     glColor3f(0.0f, 0.0f, 0.0f); //hair
     DrawCircle(0.2, 0.12, 0.03);

      glColor3f(1.0f, 1.0f, 0.6f); //neck
     DrawCircle(0.2, 0.07,0.02);


     glColor3f(1.0f, 1.0f, 0.6f); //face
     DrawCircle(0.2, 0.1, 0.03);


     glColor3f(0.0f, 0.0f, 0.0f); //left eye
     DrawCircle(0.186, 0.1,0.004);

     glColor3f(0.0f, 0.0f, 0.0f); //right eye
     DrawCircle(0.215, 0.1,0.004);


     glColor3f(0.0f, 0.0f, 0.0f); //right eye
     DrawCircle(0.215, 0.1,0.004);


     glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 0.0f, 1.0f); //body // chest
        glVertex2f(0.2, 0.06);
        glVertex2f(0.252f, 0.0f);
        glVertex2f(0.148f, 0.0f);
    glEnd();


    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 1.0f);  //body // belly
        glVertex2f(0.165f, 0.0f);
        glVertex2f(0.235f, 0.0f);
        glVertex2f(0.235f, -0.18f);
        glVertex2f(0.165f, -0.18f);
    glEnd();


    glLineWidth(14.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 1.0f); // left hand upper
        glVertex2f(0.156f, 0.0f);
        glVertex2f(0.156f, -0.02f);
    glEnd();

    glLineWidth(14.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 1.0f); // right hand upper
        glVertex2f(0.244f, 0.0f);
        glVertex2f(0.244f, -0.02f);
    glEnd();

    glLineWidth(12.5f);
    glBegin(GL_LINES);
        glColor3f(0.190f, 0.190f, 0.190f); // left hand upper now sword
        glVertex2f(0.14f, -0.18f);
        glVertex2f(0.17f, -0.01f);

    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 0.6f); // left hand lower
        glVertex2f(0.14f, -0.05f);
        glVertex2f(0.17f, -0.07f);
    glEnd();

    glLineWidth(12.5f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 0.6f); // right hand upper
        glVertex2f(0.23f, -0.01f);
        glVertex2f(0.26f, -0.05f);

    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 0.6f); // right hand lower
        glVertex2f(0.26f, -0.05f);
        glVertex2f(0.23f, -0.07f);
    glEnd();

    glLineWidth(14.0f);
    glBegin(GL_LINES);
        glColor3f(0.6f, 0.3f, 0.1f); // right leg
        glVertex2f(0.22f, -0.18f);
        glVertex2f(0.22f, -0.24f);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f); //right foot
    DrawCircle(0.22, -0.25,0.011);


    glLineWidth(14.0f);
    glBegin(GL_LINES);
        glColor3f(0.6f, 0.3f, 0.1f); // left leg
        glVertex2f(0.18f, -0.18f);
        glVertex2f(0.18f, -0.24f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); //left foot
    DrawCircle(0.18, -0.25, 0.011);


}




void quads()
{
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_QUADS); // begin drawing a quad
    glVertex2f(-0.5, -0.5); // bottom left vertex
    glVertex2f(-0.5, 0.5); // top left vertex
    glVertex2f(0.5, 0.5); // top right vertex
    glVertex2f(0.5, -0.5); // bottom right vertex
    glEnd();
}
void face()
{
 //glLoadIdentity();
    glPushMatrix();
glScalef(0.45f,0.45f,0.0f);
glTranslatef(-2.03,-1.4f,0.0f);
    glBegin(GL_POLYGON);


	glColor3f(0.0f, 0.0f, 0.0f); // Red
	// x, y
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.4f, 0.75f);
	glVertex2f(0.3f, 0.75f);
	glVertex2f(0.3f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0, 0.9, 0.8);
// Red
	// x, y
	glVertex2f(-0.22f, -0.06f);
	glVertex2f(-0.06f, 0.5f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.22f, -0.3f);

    glEnd();

   glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.06f, 0.5f);
	glVertex2f(-0.25f, -0.2f);
	glEnd();
	   glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	// x, y
	glVertex2f(-0.21f, -0.06f);
	glVertex2f(0.2f, -0.29f);
	glVertex2f(0.18f, -0.51f);
	glVertex2f(-0.27f, -0.3f);

    glEnd();

       glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	// x, y
	glVertex2f(-0.25f, -0.2f);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(0.32f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glVertex2f(-0.4f, -0.2f);

glEnd();
glPopMatrix();
glEnd();

}
void memberFace()
{
    //glLoadIdentity();
    glPushMatrix();
glScalef(0.45f,0.45f,0.0f);
glTranslatef(-2.03,-1.4f,0.0f);
    glBegin(GL_POLYGON);


	glColor3f(0.0f, 0.0f, 0.0f); // Red
	// x, y
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.4f, 0.75f);
	glVertex2f(0.3f, 0.75f);
	glVertex2f(0.3f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0, 0.9, 0.8);
// Red
	// x, y
	glVertex2f(-0.22f, -0.06f);
	glVertex2f(-0.06f, 0.5f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.22f, -0.3f);

    glEnd();

   glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.06f, 0.5f);
	glVertex2f(-0.25f, -0.2f);
	glEnd();
	   glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	// x, y
	glVertex2f(-0.21f, -0.06f);
	glVertex2f(0.2f, -0.29f);
	glVertex2f(0.18f, -0.51f);
	glVertex2f(-0.27f, -0.3f);

    glEnd();

       glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	// x, y
	glVertex2f(-0.25f, -0.2f);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(0.32f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glVertex2f(-0.4f, -0.2f);

glEnd();
glPopMatrix();
glEnd();

//Body

glPushMatrix();
glScalef(1.9f,1.9f,0.0f);
glTranslatef(-0.5f,-0.8f,0.0f);
glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();



    glRotatef(rightL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();





//body
    glBegin(GL_POLYGON);
    glVertex2f(-.065,.37);
    glVertex2f(-.1,.3);
    glVertex2f(-.08,0);
    glVertex2f(.08,0);
    glVertex2f(.083,.28);
    glVertex2f(.04,.35);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.084,.22);
    glVertex2f(.01,.2);

    glEnd();
glPopMatrix();
glEnd();

glPushMatrix();
glScalef(4.3f,5.0f,0.0f);
glTranslatef(0.55f,0.3f,0.0f);
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


glPopMatrix();

}
void guard()
{

    glColor3ub(253,231,173);
    glBegin(GL_TRIANGLES);
    glVertex2f(.12,.48);
    glVertex2f(.08,.55);
    glVertex2f(.0,.48);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.05,.538);
    glVertex2f(.07,.55);
    glVertex2f(.09,.545);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(.0455,.45);
    glVertex2f(.075,.438);
    glVertex2f(.085,.445);
    glEnd();
    glColor3ub(253,231,173);

    glBegin(GL_QUADS);
    glVertex2f(-.06,.43);
    glVertex2f(-.06,.35);
    glVertex2f(.03,.35);
    glVertex2f(.03,.43);
    glEnd();

    //leg


    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();



    glRotatef(rightL,0,0,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.05,-.5);
    glVertex2f(.1,-.5);
    glVertex2f(.09,-.45);
    glVertex2f(.05,-.45);
    glVertex2f(.08,0);
    glVertex2f(-.08,0);
    glEnd();





//body
  //  getColor();
    glBegin(GL_POLYGON);
    glVertex2f(-.065,.37);
    glVertex2f(-.1,.3);
    glVertex2f(-.08,0);
    glVertex2f(.08,0);
    glVertex2f(.083,.28);
    glVertex2f(.04,.35);
    glEnd();

    glColor3ub(253,231,173);
    glBegin(GL_POLYGON);

    glVertex2f(-.02,.14);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.1,.1);
    glVertex2f(.0,.05);
    glVertex2f(.02,.11);
    glEnd();
//    getColor();
    glBegin(GL_POLYGON);
    glVertex2f(.04,.3);
    glVertex2f(-.07,.3);
    glVertex2f(-.084,.22);
    glVertex2f(.01,.2);

    glEnd();


}

void fan()
{

  glColor3f(0.56f, 0.93f, 0.56f); // Light green color
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

// Draw fan blades
glPushMatrix();
glScalef(0.1f, 0.2f, 0.35f);
glTranslatef(-3.5f, 3.5f, 0.0f);
glLineWidth(2.0);
for (int i = 0; i < 6; i++) {
    glBegin(GL_TRIANGLES);
    glColor3f(0.56f, 0.93f, 0.56f); // Use light green color for triangles
    glVertex2f(0, 0);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.5, -0.3);
    glEnd();

    glRotatef(60, 0, 0, 1);
}
glPopMatrix();

glEnd();


}


    // Draw handle



void handle()
{

     glPushMatrix();
    glScalef(0.025f,0.25f,0.0f);
    glTranslatef(-16.5f,2.6f,0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);

    glPopMatrix();
    glEnd();


}
void Design(){
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();  // end drawing lines

glPushMatrix();
glColor3f(1.0f,1.0f,0.0f);
glTranslatef(0.17f,-0.45f,0.0f);
glScalef(1.0f,0.7f,0.0f);
     glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
    glPopMatrix();
}
void drawPillar() {
  // Draw the base of the pillar
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, -0.7);
    glVertex2f(0.05, -0.7);
    glVertex2f(0.07, -0.65);
    glVertex2f(0.07, 0.65);
    glVertex2f(0.05, 0.7);
    glVertex2f(-0.05, 0.7);
    glVertex2f(-0.07, 0.65);
    glVertex2f(-0.07, -0.65);
    glEnd();

    // Draw the top of the pillar
    glPushMatrix();
    glTranslatef(0.0,-0.5, 0.0);  // Translate to the top of the pillar
    glBegin(GL_POLYGON);
    glVertex2f(-0.04, 0.5);
    glVertex2f(0.04, 0.5);
    glVertex2f(0.07, 0.45);
    glVertex2f(0.07, -0.05);
    glVertex2f(0.04, -0.1);
    glVertex2f(-0.04, -0.1);
    glVertex2f(-0.07, -0.05);
    glVertex2f(-0.07, 0.45);
    glEnd();
    glPopMatrix();
    glEnd();
     // Draw the dome
    glPushMatrix();

    glTranslatef(0.0, 0.7, 0.0);  // Translate to the top of the pillar
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, 0.0);
    const int num_segments = 20;
    const float radius = 0.05;
    for(int i = 0; i <= num_segments; ++i) {
        const float theta = (2 * M_PI * i) / num_segments;
        const float x = radius * cos(theta);
        const float y = radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    glEnd();
}
void body()
{



  glPushMatrix();
    //glTranslatef(0.0,-0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04, 0.5);
    glVertex2f(0.04, 0.5);
    glVertex2f(0.07, 0.45);
    glVertex2f(0.07, -0.05);
    glVertex2f(0.04, -0.1);
    glVertex2f(-0.04, -0.1);
    glVertex2f(-0.07, -0.05);
    glVertex2f(-0.07, 0.45);
glEnd();
    glPopMatrix();
    glEnd();
     // Draw the dome


    glEnd();

}



void neck()
{
    glColor3f(0.5,0.5,0.5);

    glBegin(GL_QUADS);

    glVertex2f(-0.5f, -0.5f);
      glVertex2f(0.5f, -0.5f);
      glVertex2f(0.5f, 0.5f);
      glVertex2f(-0.5f, 0.5f);
    glEnd();
}
void human()
{
       glColor3f(0.5, 0.5, 0.5);  // Set color to gray

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.2f, 0.0f); // change y-coordinate to move the circle to the bottom
    for (int i = 0; i <= 180; ++i) {
        float theta = 2.0f * 3.1415926f * i / 180;
        float x = 0.05 * cosf(theta)-0.2f;
        float y = 0.05 * sinf(theta) - 0.0f; // subtract 0.8 from y-coordinate to move circle down
        glVertex2f(x, y);
    }

glEnd();
     glPushMatrix();
        glTranslatef(-0.2f,-0.085f,0.0f);
        glScalef(0.05f,0.1f,0.0f);
        neck();
        glPopMatrix();

        glEnd();

        glPushMatrix();
        glScalef(0.8f,0.4f,0.0f);
        glTranslatef(-0.25f,-0.67f,0.0f);
        body();
        glPopMatrix();

        glEnd();
}




void body2()
{



  glPushMatrix();
    //glTranslatef(0.0,-0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04, 0.5);
    glVertex2f(0.04, 0.5);
    glVertex2f(0.07, 0.45);
    glVertex2f(0.07, -0.05);
    glVertex2f(0.04, -0.1);
    glVertex2f(-0.04, -0.1);
    glVertex2f(-0.07, -0.05);
    glVertex2f(-0.07, 0.45);
glEnd();
    glPopMatrix();
    glEnd();
     // Draw the dome


    glEnd();

}



void neck2()
{
    glColor3f(0.2,0.2,0.2);

    glBegin(GL_QUADS);

    glVertex2f(-0.5f, -0.5f);
      glVertex2f(0.5f, -0.5f);
      glVertex2f(0.5f, 0.5f);
      glVertex2f(-0.5f, 0.5f);
    glEnd();
}
void human2()
{
       glColor3f(0.2, 0.2, 0.2);  // Set color to gray

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.2f, 0.0f); // change y-coordinate to move the circle to the bottom
    for (int i = 0; i <= 180; ++i) {
        float theta = 2.0f * 3.1415926f * i / 180;
        float x = 0.05 * cosf(theta)-0.2f;
        float y = 0.05 * sinf(theta) - 0.0f; // subtract 0.8 from y-coordinate to move circle down
        glVertex2f(x, y);
    }

glEnd();
     glPushMatrix();
        glTranslatef(-0.2f,-0.085f,0.0f);
        glScalef(0.05f,0.1f,0.0f);
        neck2();
        glPopMatrix();

        glEnd();

        glPushMatrix();
        glScalef(0.9f,0.4f,0.0f);
        glTranslatef(-0.22f,-0.68f,0.0f);
        body2();
        glPopMatrix();

        glEnd();
}
void ChairSide(){


glLineWidth(5.0);
  glBegin(GL_LINES);
    glColor3f(1.0f,0.5f,0.0f);

    glVertex2f(-0.4f,0.6f);
    glVertex2f(-0.3f,0.8f);


    glBegin(GL_LINES);
    glVertex2f(-0.3f,0.8f);

    glVertex2f(-0.2f,0.6f);
    glBegin(GL_LINES);
    glVertex2f(-0.2f,0.6f);
    glVertex2f(-0.1f,0.8f);

    glBegin(GL_LINES);
    glVertex2f(-0.1f,0.8f);
    glVertex2f(0.0f,0.6f);

    glBegin(GL_LINES);
    glVertex2f(0.0f,0.6f);
    glVertex2f(0.1f,0.8f);

    glBegin(GL_LINES);
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.2f,0.6f);

    //glEnd();


    glBegin(GL_LINES);
    glVertex2f(-0.4f,0.6f);
    glVertex2f(-0.3f,0.3f);



    glBegin(GL_LINES);
    glVertex2f(0.2f,0.6f);
    glVertex2f(0.1f,0.3f);
    glEnd();
}
void Chair()
{  // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);




// chair back side1
	glColor3f(0.5f, 0.35f, 0.05f); // brown
	glVertex2f(-0.17f, 0.70f);
	glVertex2f(-0.20f, 1.25f);
    glVertex2f(0.20f, 1.25f);
	glVertex2f(0.17f, 0.70f);
	glEnd();
	//chair back side 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); // white
	glVertex2f(-0.15f, 0.52f);
	glVertex2f(-0.18f, 0.98f);
    glVertex2f(0.18f, 0.98f);
	glVertex2f(0.15f, 0.52f);
    glEnd();
///////////
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.35f, 0.05f); //side line1
	glVertex2f(0.17f, 0.78f);
	glVertex2f(0.17f, 0.80f);
    glVertex2f(0.3f, 0.79f);
	glVertex2f(0.28f, 0.76f);
	glEnd();
    glBegin(GL_POLYGON);
    //glColor3f(0.5f, 0.35f, 0.05f); // handle
    glVertex2f(0.25f, 0.50f);
    glVertex2f(0.3f, 0.79f);
	glVertex2f(0.28f, 0.76f);
	glVertex2f(0.23f, 0.50f);
    glEnd();
//////////////
    glBegin(GL_POLYGON);
    //glColor3f(0.5f, 0.35f, 0.05f); // handle
    glVertex2f(0.15f, 0.50f);
    glVertex2f(0.2f, 0.55f);
	glVertex2f(0.25f, 0.55f);
	glVertex2f(0.30f, 0.50f);
    glEnd();
     glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.35f, 0.05f); // leg
    glVertex2f(0.25f, 0.38f);
    glVertex2f(0.25f, 0.50f);
    glVertex2f(0.23f, 0.50f);
    glVertex2f(0.23f, 0.38f);
    glEnd();

//anther side of chair
 glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.35f, 0.05f); //side line1
	glVertex2f(-0.17f, 0.78f);
	glVertex2f(-0.17f, 0.80f);
    glVertex2f(-0.3f, 0.79f);
	glVertex2f(-0.28f, 0.76f);
	glEnd();
    glBegin(GL_POLYGON);
    //glColor3f(0.5f, 0.35f, 0.05f); // handle
    glVertex2f(-0.25f, 0.50f);
    glVertex2f(-0.3f, 0.79f);
	glVertex2f(-0.28f, 0.76f);
	glVertex2f(-0.23f, 0.50f);
    glEnd();
//////////////
    glBegin(GL_POLYGON);
    //glColor3f(0.5f, 0.35f, 0.05f); // handle
    glVertex2f(-0.15f, 0.50f);
    glVertex2f(-0.2f, 0.55f);
	glVertex2f(-0.25f, 0.55f);
	glVertex2f(-0.30f, 0.50f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.35f, 0.05f); // leg
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.25f, 0.50f);
    glVertex2f(-0.23f, 0.50f);
    glVertex2f(-0.23f, 0.38f);
    glEnd();
//bench
glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.35f, 0.05f); // brown// ban
	glVertex2f(-0.25f, 0.43f);
	glVertex2f(0.25f, 0.43f);
	glVertex2f(0.20f, 0.48f);
    glVertex2f(-0.20f, 0.48f);
    glEnd();
//feet
 glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.35f, 0.05f); // brown
	glVertex2f(-0.30f, 0.35f);
	glVertex2f(-0.30f, 0.38f);
	glVertex2f(0.30f, 0.38f);
    glVertex2f(0.30f, 0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.6f, 0.3f);//light brown
	glVertex2f(-0.25f, 0.32f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(0.25f, 0.35f);
    glVertex2f(0.25f, 0.32f);
    glEnd();
     glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.35f, 0.05f); // brown
	glVertex2f(-0.20f, 0.29f);
	glVertex2f(-0.20f, 0.32f);
	glVertex2f(0.20f, 0.32f);
    glVertex2f(0.20f, 0.29f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.35f, 0.05f); // brown
	glVertex2f(-0.10f, 0.26f);
	glVertex2f(-0.10f, 0.29f);
	glVertex2f(0.10f, 0.29f);
    glVertex2f(0.10f, 0.26f);
    glEnd();








}



void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


     glColor3f(0.5, 0.5, 0.5);  // Set color to gray

    // Draw the base of the pillar
    glBegin(GL_POLYGON);
    glVertex2f(-0.2, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.3, -0.4);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.2, 0.3);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.3, -0.4);
    glEnd();

    // Draw the top of the pillar
    glPushMatrix();

    glTranslatef(0.0, 0.3, 0.0);  // Translate to the top of the pillar
    glBegin(GL_POLYGON);
    glVertex2f(-0.1, 0.1);
    glVertex2f(0.1, 0.1);
    glVertex2f(0.2, 0.0);
    glVertex2f(0.2, -0.1);
    glVertex2f(0.1, -0.2);
    glVertex2f(-0.1, -0.2);
    glVertex2f(-0.2, -0.1);
    glVertex2f(-0.2, 0.0);
    glEnd();
    glPopMatrix();




    // Draw walls
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, -1.0f);
    glEnd();

    // Draw floor
    glColor3f(0.7f, 0.7f, 0.7f); // Gray
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(-1.0f, -0.5f);
        glVertex2f(1.0f, -0.5f);
        glVertex2f(1.0f, -1.0f);
    glEnd();

    // Draw red carpet
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glBegin(GL_QUADS);
        glVertex2f(-0.1f, -0.5f);
        glVertex2f(-0.1f, 0.3f);
        glVertex2f(0.1f, 0.3f);
        glVertex2f(0.1f, -0.5f);
    glEnd();
 // Draw yellow stars

    /*glBegin(GL_QUADS);
        // Stick figure 1
        glVertex3f(-0.8f, -0.9f, 0.0f);
        glVertex3f(-0.8f, -0.8f, 0.0f);
        glVertex3f(-0.7f, -0.8f, 0.0f);
        glVertex3f(-0.7f, -0.9f, 0.0f);


*/

    // Draw red carpet
glColor3f(1.0f, 0.0f, 0.0f); // Red
glBegin(GL_QUADS);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, -0.5f);
glEnd();
// Set yellow color
/*glColor3f(1.0f, 1.0f, 1.0f);

// Draw star
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f); // Center of the star
    const float r = 0.02f;
    const float twicePi = 2.0f * 3.141592f;
    for (int i = 0; i <= 10; i++) {
        float angle = i * twicePi / 10.0f;
        float x = r * cos(angle);
        float y = r * sin(angle);
        if (i % 2 == 0) {
            glVertex2f(x, y);
        } else {
            glVertex2f(x / 2.0f, y / 2.0f);
        }
    }
glEnd();

glPushMatrix();
glTranslatef(-0.06f, -0.15f, 0.0f); // Translate one unit down
glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(0.0f, 0.0f); // Center of the star
    const float r2 = 0.02f;
    const float twicePi2 = 2.0f * 3.141592f;
    for (int i = 0; i <= 10; i++) {
        float angle = i * twicePi2 / 10.0f;
        float x = r2 * cos(angle);
        float y = r2 * sin(angle);
        if (i % 2 == 0) {
            glVertex2f(x, y);
        } else {
            glVertex2f(x / 2.0f, y / 2.0f);
        }
    }
glEnd();
glPopMatrix();

*/

// Draw filled circle


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.76f, -0.5f,0.0f);
human2();
glPopMatrix();




glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.65f, -0.45f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.52f, -0.5f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.43f, -0.45f,0.0f);
human2();
glPopMatrix();




glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.33f, -0.45f,0.0f);
human2();
glPopMatrix();




glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.2f, -0.5f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(-0.09f, -0.42f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.04f, -0.47f,0.0f);
human2();
glPopMatrix();



glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.17f, -0.419f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.3f, -0.48f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.3f, -0.48f,0.0f);
human2();
glPopMatrix();

glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.43f, -0.5f,0.0f);
human2();
glPopMatrix();



glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.55f, -0.45f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.68f, -0.45f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.81f, -0.5f,0.0f);
human2();
glPopMatrix();

glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(0.94f, -0.5f,0.0f);
human2();
glPopMatrix();


glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(1.07f, -0.45f,0.0f);
human2();
glPopMatrix();

glPushMatrix();
glScalef(1.0f,1.4f,0.0f);
glTranslatef(1.2f, -0.45f,0.0f);
human2();
glPopMatrix();


glEnd();




//*********************CHAIR************************

    glPushMatrix();  // Push the current matrix onto the stack
    glScalef(0.4, 0.4, 0.0);  // Scale the object down by a factor of 0.5
    glColor3f(1.0, 1.0, 0.5);  // Set color to gray
    glTranslatef(-2, -1, 0.0);
   glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();

//Third leg of every chair
    glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.06, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();




glPushMatrix();
glTranslatef(0.79f,0.8f,0.0f);
       glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.07, 0.0);
        glVertex2f(0.05, -0.18);
        glVertex2f(0.0,  -0.18);
    glEnd();
    glPopMatrix();


glPushMatrix();
glTranslatef(0.49f,0.0f,0.0f);
       glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.07, 0.0);
        glVertex2f(0.05, -0.18);
        glVertex2f(0.0,  -0.18);
    glEnd();
    glPopMatrix();


glPushMatrix();
glTranslatef(1.2f,1.4f,0.0f);
       glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.07, 0.0);
        glVertex2f(0.05, -0.18);
        glVertex2f(0.0,  -0.18);
    glEnd();
    glPopMatrix();


    glPushMatrix();
glTranslatef(2.7f,1.2f,0.0f);
       glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.07, 0.0);
        glVertex2f(0.05, -0.18);
        glVertex2f(0.0,  -0.18);
    glEnd();
    glPopMatrix();



    glPushMatrix();
glTranslatef(3.05f,0.64f,0.0f);
       glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.07, 0.0);
        glVertex2f(0.05, -0.18);
        glVertex2f(0.0,  -0.18);
    glEnd();
    glPopMatrix();


        glPushMatrix();
glTranslatef(3.45f,0.0f,0.0f);
       glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.07, 0.0);
        glVertex2f(0.05, -0.18);
        glVertex2f(0.0,  -0.18);
    glEnd();
    glPopMatrix();


 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

     glPopMatrix();  // Pop the current matrix off the stack



      glPushMatrix();  // Push the current matrix onto the stack
    glScalef(0.3, 0.3, 0.0);  // Scale the object down by a factor of 0.5
    glColor3f(1.0, 1.0, 0.5);  // Set color to gray
    glTranslatef(-2, -0.3, 0.0);
   glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();


    glColor3f(0.0, 0.0, 0.0);  // Set color to red
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();
 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

     glPopMatrix();  // Pop the current matrix off the stack


      glPushMatrix();  // Push the current matrix onto the stack
    glScalef(0.3, 0.3, 0.0);  // Scale the object down by a factor of 0.5
    glColor3f(1.0, 1.0, 0.5);  // Set color to gray
    glTranslatef(-2, -0.3, 0.0);
   glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();


    glColor3f(0.0, 0.0, 0.0);  // Set color to red
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();
 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

     glPopMatrix();  // Pop the current matrix off the stack


 glPushMatrix();  // Push the current matrix onto the stack
    glScalef(0.2, 0.2, 0.0);  // Scale the object down by a factor of 0.5
    glColor3f(1.0, 1.0, 0.5);  // Set color to gray
    glTranslatef(-2, 0.7, 0.0);
   glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();


    glColor3f(0.0, 0.0, 0.0);  // Set color to red
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();
 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

     glPopMatrix();  // Pop the current matrix off the stack

//**********RIGHT SIDE CHAIR*****************************

   glPushMatrix();
       glColor3f(1.0, 1.0, 0.5);  // Set color to gray

   glScalef(0.4, 0.4, 0.0);
    glTranslatef(1, -1, 0.0);  // Translate the parallelogram to the right
    glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();


    glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();
 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

    glPopMatrix();



    glEnd();



//2


glPushMatrix();
       glColor3f(1.0, 1.0, 0.5);  // Set color to gray

   glScalef(0.3, 0.3, 0.0);
    glTranslatef(1, -0.5, 0.0);  // Translate the parallelogram to the right
    glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();


    glColor3f(0.0, 0.0, 0.0);  // Set color to red
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();
 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

    glPopMatrix();



    glEnd();

    glPushMatrix();
       glColor3f(1.0, 1.0, 0.5);  // Set color to gray

   glScalef(0.2, 0.2, 0.0);
    glTranslatef(1, 0.3, 0.0);  // Translate the parallelogram to the right
    glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);  // Bottom-left vertex
        glVertex2f(0.5, 0.0);  // Bottom-right vertex
        glVertex2f(0.8, 0.5);  // Top-right vertex
        glVertex2f(0.3, 0.5);  // Top-left vertex
    glEnd();


    glColor3f(0.0, 0.0, 0.0);  // Set color to red
     glBegin(GL_QUADS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.05, 0.0);
        glVertex2f(0.05, -0.28);
        glVertex2f(0.0,  -0.28);
    glEnd();
 // Draw a quad at the Top-right vertex
    glBegin(GL_QUADS);
        glVertex2f(0.8, 0.5);
        glVertex2f(0.85,0.5);
        glVertex2f(0.85, 0.15);
        glVertex2f(0.8, 0.15);
    glEnd();

    glPopMatrix();


glEnd();


    glColor3f(0.5, 0.5, 0.5);  // Set color to gray

    // Draw the left pillar
    glPushMatrix();
    glTranslatef(-0.92, 0.183, 0.0);  // Translate to the left of the screen
    glPopMatrix();

    // Draw the right pillar
    glPushMatrix();
    glTranslatef(0.92, 0.183, 0.0);  // Translate to the right of the screen

    glPopMatrix();

    glEnd();



glColor3f(0.5, 0.5, 0.5);  // Set color to gray

    // Draw the left pillar
    glPushMatrix();
    glTranslatef(-0.92, 0.183, 0.0);  // Translate to the left of the screen
    drawPillar();
    glPopMatrix();
    glEnd();


    // Draw the right pillar
    glPushMatrix();
    glTranslatef(0.92, 0.183, 0.0);  // Translate to the right of the screen
    drawPillar();
    glPopMatrix();

    glEnd();



    glPushMatrix();
    glScalef(0.5f,0.5f,0.0f);
    glTranslatef(0.0f,0.6f,0.0f);
    Chair();
    glPopMatrix();
    glEnd();

    //draw ChairSide()
    glPushMatrix();
    glScalef(0.5f,0.5f,0.0f);
    //ChairSide();
    glPopMatrix();
    glEnd();


    //draw the face()
    glPushMatrix();
    glScalef(0.2f,0.3f,0.0f);
   // face();
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glScalef(0.1f,0.3f,0.0f);
    glTranslatef(-9.4,2.5f,0.0f);
    Design();
    glPopMatrix();

    glPushMatrix();
    //glRotatef(80,0.0,1.0,0.0);
glEnd();


glPushMatrix();
glTranslatef(-2.0f,0.0f,0.0f);
fan();
glPopMatrix();
glEnd();

glPushMatrix();
handle();
glPopMatrix();
glEnd();


//Dessign of the pillar
glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(-9.38f,2.45f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glScalef(0.1f,0.2f,0.35f);
glTranslatef(-9.2f,1.8f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();



glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(-9.38f,1.2f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glScalef(0.1f,0.2f,0.35f);
glTranslatef(-9.2f,0.5f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();





glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(-9.38f,-0.1f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glScalef(0.1f,0.2f,0.35f);
glTranslatef(-9.2f,-0.75f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();




glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(-9.38f,-1.4f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(1.0f,1.0f,0.0f);
glScalef(0.1f,0.2f,0.35f);
glTranslatef(-9.2f,-2.0f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();



//Right side pillar
















glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(9.0f,2.45f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glScalef(0.1f,0.2f,0.35f);
glTranslatef(9.2f,1.8f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();



glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(9.0f,1.2f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glScalef(0.1f,0.2f,0.35f);
glTranslatef(9.2f,0.5f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();


glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(9.0f,-0.1f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glScalef(0.1f,0.2f,0.35f);
glTranslatef(9.2f,-0.75f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();





glPushMatrix();
glScalef(0.1f,0.2f,0.0f);
glTranslatef(9.0f,-1.4f,0.0f);
 glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.5, 0.0);
        glVertex2f(0.9, 0.0);
    glEnd();
glBegin(GL_LINES);
       glVertex2f(-0.5f,-0.05f);
       glVertex2f(0.9f,-0.05f);
    glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(1.0f,1.0f,0.0f);
glScalef(0.1f,0.2f,0.35f);
glTranslatef(9.2f,-2.0f,0.0f);
    glLineWidth(2.0);
    for (int i = 0; i < 6; i++) {
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);
        glVertex2f(0, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.5, -0.3);
        glEnd();

 glRotatef(60, 0, 0, 1);

    }
glPopMatrix();

glEnd();



glPushMatrix();
glScalef(0.17f,0.17f,0.0f);
glTranslatef(-2.2f,5.2f,0.0f);

memberFace();
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.54f,0.670f,0.0f);
glScalef(0.04f,0.05f,0.0f);
quads();

glPopMatrix();
glEnd();


glPushMatrix();
glTranslatef(-0.3f,0.7f,0.0f);
glScalef(1.5f,1.5f,0.0f);
king();

glPopMatrix();
glPushMatrix();
glScalef(0.04f,0.01f,0.0f);
glTranslatef(0.0f,40.6f,0.0f);
quads();
glPopMatrix();
    glFlush();

}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
       // glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("Room with Red Carpet"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
//    glutReshapeFunc(reshape);
//    init();
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}


