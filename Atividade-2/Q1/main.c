#include <GL/freeglut.h>
#include <GL/gl.h>
#include <stdio.h>
//ATV_2 Q_1
int init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); //define a cor do fundo

    glMatrixMode(GL_PROJECTION); //carrega a matriz de projeção
    gluOrtho2D(0.0, 200.0, 0.0, 150.0); //define projeção ortogonal 2D
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); //desenha o fundo (limpa a janela)

    glBegin(GL_TRIANGLES); //desenha um triângulo

        glColor3f(0.0, 1.0, 0.0); //altera o atributo da cor
        glVertex2i(50.0, 37.5);

        glColor3f(0.0, 0.0, 1.0); //altera o atributo da cor
        glVertex2i(100.0, 112.5);

        glColor3f(1.0, 0.0, 0.0);  //altera o atributo da cor
        glVertex2i(150.0, 37.5);

    glEnd();

    glFlush(); //desenha os comandos não executados
}

void GerenciaMouse(int button, int state, int x, int y){
    switch(state)
    {
    case GLUT_DOWN:
        printf('Tecla %d pressionada\n', state);
        break;

    case GLUT_UP:
        printf('Tecla %d liberada', state);
    default:
        break;

    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); //inicializa o GLUT
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB); //Configura o modo de display
    glutInitWindowSize(400, 300); //Configura a altura e a largura da janela de exibição
    glutMouseFunc(GerenciaMouse);
    glutInitWindowPosition(200, 0);
    glutCreateWindow("Questao_1"); //Cria janela de exibição

    init(); //executa a função de inicialização
    glutDisplayFunc(display);//estabelece a função "display" como função callback da exibição
    glutMainLoop(); //mostre tudo e espere
    return 0;
}
