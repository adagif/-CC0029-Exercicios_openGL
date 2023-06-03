#include <stdio.h>
#include <stdlib.h>
#include <GL/freeglut.h>
#include <GL/gl.h>

float alpha=0, beta=0, delta=1;

//alpha = ângulo de rotação em x
//beta = ângulo de rotação em y
//delta = escala uniforme

int init(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5, 5, -5, 5, -5, 5);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glScalef(delta, delta, delta);

    glColor3f(1, 1, 0);
    glPushMatrix();
        glTranslatef(-3, 0, 0);
        glRotatef(beta, 0, 1, 0);
        glRotatef(alpha, 1, 0, 0);
        glWireSphere(1, 20, 20);
    glPopMatrix();

    glColor3f(1, 0, 0);
    glPushMatrix();
        glTranslatef(3, 0, 0);
        glRotated()


    glFlush();

}

//Função que trata as teclas especiais.
void keyPressed_special(int key, int x, int y){

    if(key == GLUT_KEY_PAGE_UP){ //zoom-in
        delta = delta * 1.1f;
    }
    if(key == GLUT_KEY_PAGE_DOWN){ //zoom-out
        delta = delta * 0.9f;
    }
    if(key == GLUT_KEY_RIGHT){ //gira sobre o eixo-y
        beta = beta -1;
    }
    if(key == GLUT_KEY_LEFT){ //gira sobre o eixo-y
        beta = beta +1;
    }
    if(key == GLUT_KEY_UP){ //gira sobre o eixo-x
        alpha = alpha -1;
    }
    if(key == GLUT_KEY_DOWN){
        alpha = alpha + 1;
    }

    glutPostRedisplay();

}

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowPosition(200,0);
  glutInitWindowSize(400,400);
  glutCreateWindow("3D");

  init();
  glutSpecialFunc(keyPressed_special);
  glutDisplayFunc(display);
  glutMainLoop();

    return 0;
}
