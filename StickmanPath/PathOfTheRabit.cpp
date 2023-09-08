#include <GL/glut.h>
#include<Windows.h>
#include<mmsystem.h>
#include "keys.h"

#include <vector>


//+++++++++++++++++++++++++++++++++++++++++++++++++RESHAPE++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void reshape(int w, int h)
{
    if (w >= h)
        glViewport(0, 0, (GLsizei)h, (GLsizei)h);
    else
        glViewport(0, 0, (GLsizei)w, (GLsizei)w);
}


//+++++++++++++++++++++++++++++++++++++++++++++++++MOSTRAR_ECRA++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void display() { 
    background();
    if (tela == 1) {
        tela1();
        caveira();
        glFlush();
    }
    else if (tela == 2) {
        tabuleiro();
        if (levelenergyCounter == 0) {
            LevelEnergy();
        }
        else {
            LevelEnergy();
            levelenergyCounter = 0;
        }
        boss_1();
        boss_2();
        boss_3();
        boss_4();
        stickman();
        glFlush();
    }
    else if (tela == 3) {
        if (lost == 0) {
            losingscreen1();
            lost = 0;
        }
        else if (lost == 1) {
            losingscreen2();
            glFlush();
            lost = 0;
        }
    }
    else if (tela == 4) {
        winningscreen();
        glFlush();
    }
    else if (tela == 5) {
        winningscreen();
        glFlush();
    }
    else if (tela == 6) {
        tela2();
        glFlush();
    }     
}

//+++++++++++++++++++++++++++++++++++++++++++++++++MAIN++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("The StickMan Path");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutSpecialFunc(SpecialKeys);
    PlaySound(TEXT("..\\Debug\\Music\\music.wav"), NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
    glutMainLoop();       
}