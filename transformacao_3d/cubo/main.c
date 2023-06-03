#include <stdio.h>
#include <stdlib.h>
#include <GL/freeglut.h>
#include <GL/gl.h>

int init(){


glClearColor(1.0f, 1.0f, 1.0f, 1.0f );
glEnable(GL_DEPTH_TEST);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);


gluLookAt(-0.75f, -0.75f, -2.0f,
           0.0f, 0.0f, 0.0f,
           0.0f, -1.0f, 0.0f);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();

glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0);

}


void display(){

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glColor3f(1.0f, 0.0f, 0.0f);
glutWireCube(1.0f);

glFlush();
}

int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(200,0);
glutCreateWindow("Atividade 5");

init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
