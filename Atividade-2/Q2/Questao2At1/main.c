#include <GL/freeglut.h>
#include <GL/gl.h>
//ATV_2 Q_2
int init(void)
{
    glClearColor(1, 1, 1, 1); //define a cor do fundo

    glMatrixMode(GL_PROJECTION); //carrega a matriz de projeção
    gluOrtho2D(0.0, 200.0, 0.0, 150.0); //define projeção ortogonal 2D
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); //desenha o fundo (limpa a janela)
//Cabeça
    glBegin(GL_QUADS); //desenha um triângulo

        glColor3f(0,0,0); //altera o a cor
        glVertex2i(90, 120);
        glVertex2i(90, 90);
        glVertex2i(130, 90);
        glVertex2i(130,120);


    glEnd();
//miolo do laço
     glBegin(GL_QUADS); //desenha um triângulo

        glColor3f(1,1,0); //altera o a cor
        glVertex2i(110, 130);
        glVertex2i(110, 120);
        glVertex2i(120, 120);
        glVertex2i(120,130);

    glEnd();
//vestido
    glBegin(GL_TRIANGLES); //desenha um triângulo

        glColor3f(1, 0, 0.5); //altera o a cor
        glVertex2i(80,40);
        glVertex2i(110.5, 90);
        glVertex2i(150,40);

    glEnd();

//laço1
    glBegin(GL_TRIANGLES); //desenha um triângulo

            glColor3f(1, 0, 0.5); //altera o a cor
            glVertex2i(100,140);
            glVertex2i(110, 130);
            glVertex2i(100,120);

        glEnd();

//laço2
    glBegin(GL_TRIANGLES); //desenha um triângulo

            glColor3f(1, 0, 0.5); //altera o a cor
            glVertex2i(130,140);
            glVertex2i(120, 130);
            glVertex2i(130,120);

        glEnd();

//braço1
    glBegin(GL_LINES); //desenha um triângulo

                glColor3f(0, 0, 0); //altera o a cor
                glPointSize(50.0);
                glVertex2i(100,70);
                glVertex2i(80, 100);


            glEnd();

//braço2
    glBegin(GL_LINES); //desenha um triângulo

            //  glPointSize(10);
            //  glLineWidth(10);
                glColor3f(0, 0, 0); //altera o a cor
                glVertex2i(126,70 );
                glVertex2i(150, 100);


            glEnd();

//perna1
    glBegin(GL_LINES); //desenha um triângulo

            //  glPointSize(10);
            //  glLineWidth(10);
                glColor3f(0, 0, 0); //altera o a cor
                glVertex2i(110.5,40);
                glVertex2i(110.5,10);


            glEnd();

//perna2
    glBegin(GL_LINES); //desenha um triângulo

            //  glPointSize(10);
            //  glLineWidth(10);
                glColor3f(0, 0, 0); //altera o a cor
                glVertex2i(130,40);
                glVertex2i(130,10);


            glEnd();





    glFlush(); //desenha os comandos não executados
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); //inicializa o GLUT
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB); //Configura o modo de display
    glutInitWindowSize(400, 300); //Configura a altura e a largura da janela de exibição
    glutInitWindowPosition(200, 0);
    glutCreateWindow("Questao_2"); //Cria janela de exibição

    init(); //executa a função de inicialização
    glutDisplayFunc(display);//estabelece a função "display" como função callback da exibição
    glutMainLoop(); //mostre tudo e espere
    return 0;
}
