#include "variaveis.h";
#include<GL/glut.h>
#include<GL/freeglut.h>
#include <errno.h>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

//escrever
// Fun��o de texto 3D
void escreve(int width, int height, float x, float y, void* font, string texto)
{
    float xxx = (float)x;
    float yyy = (float)y;

    glRasterPos2f(xxx, yyy);
    for (int i = 0; i < texto.length(); i++)
        glutBitmapCharacter(font, texto.at(i));
}


//+++++++++++++++++++++++++++++++++++++++++++++++++TABULEIRO++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void background() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5, 105, -5, 125);
    glEnd();       
}

void tela1() {
    glBegin(GL_QUADS);
    glColor3f(tr, tg, tb); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 120);
    glVertex2f(0, 120);
    glEnd();
    //TEXTO
    glColor3f(0, 0, 0);
    escreve(0, 0, 30, 105, GLUT_BITMAP_TIMES_ROMAN_24, "THE  STICKMAN  PATH");
    glColor3f(0.3, 0, 0.9);
    escreve(0, 0, 25, 20, GLUT_BITMAP_TIMES_ROMAN_24, "F4 PARA COMECAR");
    escreve(0, 0, 25, 10, GLUT_BITMAP_TIMES_ROMAN_24, "F3 PARA FECHAR");
    glutSwapBuffers();
    glEnd();
    
}

void tela2() {
    glBegin(GL_QUADS);
    glColor3f(tr, tg, tb); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 120);
    glVertex2f(0, 120);
    glEnd();
    //TEXTO
    glColor3f(0, 0, 0);
    escreve(0, 0, 30, 105, GLUT_BITMAP_TIMES_ROMAN_24, "THE  STICKMAN  PATH");
    glColor3f(0, 0.5, 0);
    escreve(0, 0, 5, 95, GLUT_BITMAP_TIMES_ROMAN_24, "INDICACOES:");
    glColor3f(0.3, 0, 0.9);
    escreve(0, 0, 5, 90, GLUT_BITMAP_9_BY_15, "-USE AS SETAS PARA MOVER O STICKMAN;");
    escreve(0, 0, 5, 85, GLUT_BITMAP_9_BY_15, "-COMECE POR DERROTAR OS MONSTROS DE NIVEL INFERIOR;");
    escreve(0, 0, 5, 80, GLUT_BITMAP_9_BY_15, "-A FORCA DOS MONSTROS É INDICADA PELO NUMERO DE TRACOS NA BOCA;");
    escreve(0, 0, 5, 75, GLUT_BITMAP_9_BY_15, "-NAO DEIXE A ENERGIA CHEGAR A 0;");
    escreve(0, 0, 5, 70, GLUT_BITMAP_9_BY_15, "-BEBA LATAS M PARA GANHAR ENERGIA;");
    escreve(0, 0, 5, 65, GLUT_BITMAP_9_BY_15, "-LATAS ROXAS DAO +4 DE ENERGIA;");
    escreve(0, 0, 5, 60, GLUT_BITMAP_9_BY_15, "-LATAS PRETASS DAO +3 DE ENERGIA;");
    glColor3f(0.3, 0.3, 0.3);
    escreve(0, 0, 25, 50, GLUT_BITMAP_TIMES_ROMAN_24, "PRIMA F1 PARA COMECAR");
    glutSwapBuffers();
    glEnd();

}



void tabuleiro() {
    //mapa
    glBegin(GL_QUADS);
    glColor3f(tr, tg, tb); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 100);
    glVertex2f(0, 100);
    glEnd();

    //boss's
        //Boss 1
    glBegin(GL_QUADS);
    glColor3f(rb1, gb1, bb1); // R, G, B
    glVertex2f(60, 60);
    glVertex2f(80, 60);
    glVertex2f(80, 80);
    glVertex2f(60, 80);
    glEnd();
    //Boss 2
    glBegin(GL_QUADS);
    glColor3f(rb2, gb2, bb2); // R, G, B
    glVertex2f(0, 80);
    glVertex2f(20, 80);
    glVertex2f(20, 100);
    glVertex2f(0, 100);
    glEnd();
    //Boss 3
    glBegin(GL_QUADS);
    glColor3f(rb3, gb3, bb3); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(20, 0);
    glVertex2f(20, 20);
    glVertex2f(0, 20);
    glEnd();
    //Boss 4 (final)
    glBegin(GL_QUADS);
    glColor3f(rb4, gb4, bb4); // R, G, B 
    glVertex2f(80, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 20);
    glVertex2f(80, 20);
    glEnd();

    //Water zones

    //++++++++++++++++++++++++++++++++++++++++++++++
    //Water zone 1 ( +4)
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.5);
    glVertex2f(48 + out1, 86 + out1);
    glVertex2f(49 + out1, 85 + out1);
    glVertex2f(52 + out1, 85 + out1);
    glVertex2f(53 + out1, 86 + out1);
    glVertex2f(53 + out1, 94 + out1);
    glVertex2f(52 + out1, 95 + out1);
    glVertex2f(49 + out1, 95 + out1);
    glVertex2f(48 + out1, 94 + out1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);
    glVertex2f(48 + out1, 86 + out1);
    glVertex2f(49 + out1, 85 + out1);
    glVertex2f(52 + out1, 85 + out1);
    glVertex2f(53 + out1, 86 + out1);
    glVertex2f(53 + out1, 94 + out1);
    glVertex2f(52 + out1, 95 + out1);
    glVertex2f(49 + out1, 95 + out1);
    glVertex2f(48 + out1, 94 + out1);
    glVertex2f(48 + out1, 86 + out1);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.2, 1, 0.2);
    glVertex2f(49 + out1, 87 + out1);
    glVertex2f(49 + out1, 92 + out1);
    glVertex2f(50.5 + out1, 89 + out1);
    glVertex2f(52 + out1, 92 + out1);
    glVertex2f(52 + out1, 87 + out1);
    glEnd();

    //++++++++++++++++++++++++++++++++++++++++++++++
    //Water zone 2 ( +4)
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.5);
    glVertex2f(8 + out2, 46 + out2);
    glVertex2f(9 + out2, 45 + out2);
    glVertex2f(12 + out2, 45 + out2);
    glVertex2f(13 + out2, 46 + out2);
    glVertex2f(13 + out2, 54 + out2);
    glVertex2f(12 + out2, 55 + out2);
    glVertex2f(9 + out2, 55 + out2);
    glVertex2f(8 + out2, 54 + out2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);
    glVertex2f(8 + out2, 46 + out2);
    glVertex2f(9 + out2, 45 + out2);
    glVertex2f(12 + out2, 45 + out2);
    glVertex2f(13 + out2, 46 + out2);
    glVertex2f(13 + out2, 54 + out2);
    glVertex2f(12 + out2, 55 + out2);
    glVertex2f(9 + out2, 55 + out2);
    glVertex2f(8 + out2, 54 + out2);
    glVertex2f(8 + out2, 46 + out2);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.2, 1, 0.2);
    glVertex2f(9 + out2, 47 + out2);
    glVertex2f(9 + out2, 52 + out2);
    glVertex2f(10.5 + out2, 49 + out2);
    glVertex2f(12 + out2, 52 + out2);
    glVertex2f(12 + out2, 47 + out2);
    glEnd();


    //++++++++++++++++++++++++++++++++++++++++++++++
    //Water zone 3 ( +3)
    
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(28 + out3, 26 + out3);
    glVertex2f(29 + out3, 25 + out3);
    glVertex2f(32 + out3, 25 + out3);
    glVertex2f(33 + out3, 26 + out3);
    glVertex2f(33 + out3, 34 + out3);
    glVertex2f(32 + out3, 35 + out3);
    glVertex2f(29 + out3, 35 + out3);
    glVertex2f(28 + out3, 34 + out3);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);
    glVertex2f(28 + out3, 26 + out3);
    glVertex2f(29 + out3, 25 + out3);
    glVertex2f(32 + out3, 25 + out3);
    glVertex2f(33 + out3, 26 + out3);
    glVertex2f(33 + out3, 34 + out3);
    glVertex2f(32 + out3, 35 + out3);
    glVertex2f(29 + out3, 35 + out3);
    glVertex2f(28 + out3, 34 + out3);
    glVertex2f(28 + out3, 26 + out3);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.2, 1, 0.2);
    glVertex2f(29 + out3, 27 + out3);
    glVertex2f(29 + out3, 32 + out3);
    glVertex2f(30.5 + out3, 29 + out3);
    glVertex2f(32 + out3, 32 + out3);
    glVertex2f(32 + out3, 27 + out3);
    glEnd();

    //++++++++++++++++++++++++++++++++++++++++++++++
    //Water zone 4 ( +3)
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(68 + out4, 46 + out4);
    glVertex2f(69 + out4, 45 + out4);
    glVertex2f(72 + out4, 45 + out4);
    glVertex2f(73 + out4, 46 + out4);
    glVertex2f(73 + out4, 54 + out4);
    glVertex2f(72 + out4, 55 + out4);
    glVertex2f(69 + out4, 55 + out4);
    glVertex2f(68 + out4, 54 + out4);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1, 1, 1);
    glVertex2f(68 + out4, 46 + out4);
    glVertex2f(69 + out4, 45 + out4);
    glVertex2f(72 + out4, 45 + out4);
    glVertex2f(73 + out4, 46 + out4);
    glVertex2f(73 + out4, 54 + out4);
    glVertex2f(72 + out4, 55 + out4);
    glVertex2f(69 + out4, 55 + out4);
    glVertex2f(68 + out4, 54 + out4);
    glVertex2f(68 + out4, 46 + out4);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.2, 1, 0.2);
    glVertex2f(69 + out4, 47 + out4);
    glVertex2f(69 + out4, 52 + out4);
    glVertex2f(70.5 + out4, 49 + out4);
    glVertex2f(72 + out4, 52 + out4);
    glVertex2f(72 + out4, 47 + out4);
    glEnd();

    //linhas para dividir
    glColor3f(0, 0, 0); //cor linhas
    glBegin(GL_LINES);
    glVertex2f(20, 100);
    glVertex2f(20, 0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(40, 100);
    glVertex2f(40, 0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(60, 100);
    glVertex2f(60, 0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(80, 100);
    glVertex2f(80, 0);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0, 20);
    glVertex2f(100, 20);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0, 40);
    glVertex2f(100, 40);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0, 60);
    glVertex2f(100, 60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0, 80);
    glVertex2f(100, 80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(  0, 100);
    glVertex2f(100, 100);
    glEnd();
}

void LevelEnergy() {
    //LEVEL
    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f); // R, G, B, Alpha
    glVertex2f(0, 100);
    glVertex2f(50, 100);
    glVertex2f(50, 120);
    glVertex2f(0, 120);
    glEnd();
        //Texto
        string level = to_string(nivel);
        glColor3f(0, 0, 0);
        escreve(0, 0, 10, 108, GLUT_BITMAP_TIMES_ROMAN_24, "NIVEL:");
        escreve(0, 0, 28, 108, GLUT_BITMAP_TIMES_ROMAN_24, level);

        

    //Energy
    glBegin(GL_QUADS);
    glColor4f(0.0f, 0.8f, 0.2f, 0.0f); // R, G, B, Alpha
    glVertex2f(50, 100);
    glVertex2f(100, 100);
    glVertex2f(100, 120);
    glVertex2f(50, 120);
    glEnd();
        //Texto
        string energy = to_string(water);
        glColor3f(0, 0, 0);
        escreve(0, 0, 60, 108, GLUT_BITMAP_TIMES_ROMAN_24, "ENERGIA:");
        escreve(0, 0, 85, 108, GLUT_BITMAP_TIMES_ROMAN_24, energy);
    
    //Lines
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0); // R, G, B, Alpha
    glVertex2f(0, 100);
    glVertex2f(50, 100);
    glVertex2f(50, 120);
    glVertex2f(0, 120);
    glVertex2f(0, 100);
    glVertex2f(100, 100);
    glVertex2f(100, 120);
    glVertex2f(50, 120);
    glEnd();
}


void losingscreen1() {
    glBegin(GL_QUADS);
    glColor3f(0.5, 0, 0); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 120);
    glVertex2f(0, 120);
    glEnd();
    //TEXTO
    glColor3f(1, 0, 0);
    escreve(0, 0, 35, 90, GLUT_BITMAP_TIMES_ROMAN_24, "GAME OVER");
    glColor3f(0, 0, 0);
    escreve(0, 0, 25, 80, GLUT_BITMAP_TIMES_ROMAN_24, "FICOU SEM ENERGIA!");
    glColor3f(1, 1, 1);
    escreve(0, 0, 20, 70, GLUT_BITMAP_TIMES_ROMAN_24, "F1 PARA RECOMECAR");
    escreve(0, 0, 20, 60, GLUT_BITMAP_TIMES_ROMAN_24, "F2 PARA VOLTAR AO MENU");
    escreve(0, 0, 20, 50, GLUT_BITMAP_TIMES_ROMAN_24, "F3 PARA FECHAR");
    glColor3f(0, 0.8, 0);
    escreve(0, 0, 0, 30, GLUT_BITMAP_TIMES_ROMAN_24, "DICA:");
    glColor3f(0.9, 0.8, 0.8);
    escreve(0, 0, 15, 30, GLUT_BITMAP_TIMES_ROMAN_24, "CONSUMA LATAS");
    glColor3f(0.2, 1, 0.2);
    escreve(0, 0, 61, 30, GLUT_BITMAP_TIMES_ROMAN_24, "M"); 
    glColor3f(0.9, 0.8, 0.8);
    escreve(0, 0, 69, 30, GLUT_BITMAP_TIMES_ROMAN_24, "PARA");
    escreve(0, 0, 15, 20, GLUT_BITMAP_TIMES_ROMAN_24, "RECUPERAR ENERGIA");

    escreve(0, 0, 15, 10, GLUT_BITMAP_TIMES_ROMAN_24, "LATAS ROXAS +4");
    escreve(0, 0, 15, 2, GLUT_BITMAP_TIMES_ROMAN_24, "LATAS PRETAS +3");
    glutSwapBuffers();

    glEnd();

}

void losingscreen2() {
    glBegin(GL_QUADS);
    glColor3f(0.5, 0, 0); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 120);
    glVertex2f(0, 120);
    glEnd();
    //TEXTO
    glColor3f(1, 0, 0);
    escreve(0, 0, 35, 90, GLUT_BITMAP_TIMES_ROMAN_24, "GAME OVER");
    glColor3f(0, 0, 0);
    escreve(0, 0, 25, 80, GLUT_BITMAP_TIMES_ROMAN_24, "FOI DERROTADO!");
    glColor3f(1, 1, 1);
    escreve(0, 0, 20, 60, GLUT_BITMAP_TIMES_ROMAN_24, "F1 PARA RECOMECAR");
    escreve(0, 0, 20, 50, GLUT_BITMAP_TIMES_ROMAN_24, "F2 PARA VOLTAR AO MENU");
    escreve(0, 0, 20, 40, GLUT_BITMAP_TIMES_ROMAN_24, "F3 PARA FECHAR");
    glColor3f(0, 0.8, 0);
    escreve(0, 0, 0, 10, GLUT_BITMAP_TIMES_ROMAN_24, "DICA:");
    glColor3f(0.9, 0.8, 0.8);
    escreve(0, 0, 15, 10, GLUT_BITMAP_TIMES_ROMAN_24, "COMECE PELOS INIMIGOS DE");
    escreve(0, 0, 15, 2, GLUT_BITMAP_TIMES_ROMAN_24, "NIVEL INFERIOR");
    glutSwapBuffers();

    glEnd();

}

void winningscreen(void) {
    glBegin(GL_QUADS);
    glColor3f(0, 0.8, 0); // R, G, B
    glVertex2f(0, 0);
    glVertex2f(100, 0);
    glVertex2f(100, 120);
    glVertex2f(0, 120);
    glEnd();
    //TEXTO
    glColor3f(1, 0, 0);
    escreve(0, 0, 35, 100, GLUT_BITMAP_TIMES_ROMAN_24, "PARABENS");
    escreve(0, 0, 30, 90, GLUT_BITMAP_TIMES_ROMAN_24, "PASSOU O JOGO");
    glColor3f(0.3, 0, 0.9);
    escreve(0, 0, 20, 10, GLUT_BITMAP_TIMES_ROMAN_24, "F2 PARA VOLTAR AO MENU");
    escreve(0, 0, 20, 05, GLUT_BITMAP_TIMES_ROMAN_24, "F3 PARA FECHAR");
    glColor3f(0.2, 0.1, 0.1);
    escreve(0, 0, 15, 80, GLUT_BITMAP_9_BY_15, "REALIZADO POR:");
    escreve(0, 0, 15, 70, GLUT_BITMAP_9_BY_15, "FRANCISCO OLIVEIRA");
    escreve(0, 0, 15, 60, GLUT_BITMAP_9_BY_15, "GILLES RATAO");
    escreve(0, 0, 15, 50, GLUT_BITMAP_9_BY_15, "HUGO POCAS");
    escreve(0, 0, 15, 40, GLUT_BITMAP_9_BY_15, "JOAO PINTO");
    glutSwapBuffers();

    glEnd();
}
