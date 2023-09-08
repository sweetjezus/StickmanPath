#include <GL/glut.h>

//+++++++++++++++++++++++++++++++++++++++++++++++++VARIAVEIS++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#define PI 3.1415926535
//Variavel alternar entre telas
int tela = 1;
int fecha = 0;

// Mudar valor de level/energia
int levelenergyCounter = 0;

//Cores tabuleiro
float tr = 0.7, tg = 0.7, tb = 0.4;
//variaveis de movimento
GLfloat move_x = 0.0f;
GLfloat move_y = 0.0f;

//variaveis de nivel e agua
int nivel = 1;
int water = 5;
int w1 = 4, w2 = 4, w3 = 3, w4 = 3;

//variaveis posiçao (quadrado) stickman
int px = 0, py = 0;

//cores boss
// boss1
float rb1 = tr;
float gb1 = tg;
float bb1 = tb;
float b1er = 1, b1eg = 0, b1eb = 0; //olhos boss 1
// boss2
float rb2 = tr;
float gb2 = tg;
float bb2 = tb; 
float b2er = 1, b2eg = 0, b2eb = 0; //olhos boss 2
// boss3
float rb3 = tr;
float gb3 = tg;
float bb3 = tb; 
float b3er = 1, b3eg = 0, b3eb = 0; //olhos boss 3
//boss4
float rb4 = tr;
float gb4 = tg;
float bb4 = tb;

 // RGB zona boss 

//out energy
float out1 = 0,out2=0,out3=0,out4=0;

//dead boss
float boss1 = 0, boss2 = 0, boss3 = 0, boss4 = 0;

//Telas de fim de jogo
float lost = 0;