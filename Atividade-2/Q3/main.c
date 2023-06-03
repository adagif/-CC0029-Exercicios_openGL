#include <GL/freeglut.h>
#include <GL/gl.h>
//ATV_2 Q_3
int init(void)
{
    glClearColor(1, 1, 1, 1); //define a cor do fundo

    glMatrixMode(GL_PROJECTION); //carrega a matriz de projeção
    gluOrtho2D(0.0, 200.0, 0.0, 150.0); //define projeção ortogonal 2D
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); //desenha o fundo (limpa a janela)
//preto
    glBegin(GL_QUADS); //desenha um triângulo

        glColor3f(0,0,0); //altera o a cor
        glVertex2i(20, 110);
        glVertex2i(20, 40);
        glVertex2i(70, 40);
        glVertex2i(70,110);


    glEnd();

    //amarelo
    glBegin(GL_QUADS); //desenha um triângulo

        glColor3f(1,1,0); //altera o a cor
        glVertex2i(70,110);
        glVertex2i(70, 40);
        glVertex2i(120, 40);
        glVertex2i(120,110);


    glEnd();

    //red
    glBegin(GL_QUADS); //desenha um triângulo

        glColor3f(1,0,0); //altera o a cor
        glVertex2i(120, 110);
        glVertex2i(120, 40);
        glVertex2i(170, 40);
        glVertex2i(170,110);


    glEnd();

    glFlush(); //desenha os comandos não executados
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); //inicializa o GLUT
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB); //Configura o modo de display
    glutInitWindowSize(400, 300); //Configura a altura e a largura da janela de exibição
    glutInitWindowPosition(200, 0);
    glutCreateWindow("Questao_3"); //Cria janela de exibição

    init(); //executa a função de inicialização
    glutDisplayFunc(display);//estabelece a função "display" como função callback da exibição
    glutMainLoop(); //mostre tudo e espere
    return 0;
}
