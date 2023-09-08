#pragma once
#include "personagens.h";
#include <iostream>

using namespace std;

//+++++++++++++++++++++++++++++++++++++++++++++++++ MOVIMENTO & REGRAS DO JOGO ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void SpecialKeys(int key, int x, int y)
{
    if (key == GLUT_KEY_UP && tela == 2) {
        if (py <= 1) {
            move_y += 20;
            py += 1;
            water--;
            cout << "Valor X: " << px << " Valor Y: " << py << " Nivel: " << nivel << " Agua:" << water << "\n";
            levelenergyCounter++;

            //+++++++++++++++++++++++++++++Agua+++++++++++++++++++++++++++++
                 //Morre em 0
            if (water <= 0) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                out1 = out2 = out3 = out4 = 0; //Energy back
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                cout << "ficou sem agua! \n";
                tela = 3;
            }
            //Fonte 1 (topo) 
            if (py == 2 && px == 0) {
                water += w1;
                w1 = 0;
                out1 = -5000;//fonte seca
            }
            //fonte 2(esquerda mid)
            if (py == 0 && px == -2) {
                water += w2;
                w2 = 0;
                out2 = -5000; //fonte seca
            }

            //fonte 3 (esquerda y = -1 x =-1)
            if (py == -1 && px == -1) {
                water += w3;
                w3 = 0;
                out3 = -5000; //fonte seca
            }

            //fonte 4 (direita mid x = 1)
            if (py == 0 && px == 1) {
                water += w4;
                w4 = 0;
                out4 = -5000; //fonte seca
            }

            //+++++++++++++++++++++++++++++boss nivel 1+++++++++++++++++++++++++++++
            if (py == 1 && px == 1 && nivel == 1) {
                nivel++;
                py = 1;
                px = 1;
                rb1 = 0, gb1 = 1, bb1 = 0; //zona green
                b1er = 0, b1eg = 1, b1eb = 0; //olhos cor R, G, B
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";

            }
            //+++++++++++++++++++++++++++++Boss nivel 2+++++++++++++++++++++++++++++
            if (py == 2 && px == -2 && nivel == 2) {
                nivel++;
                rb2 = 0, gb2 = 1, bb2 = 0; // Zona green
                b2er = 0, b2eg = 1, b2eb = 0; //olhos cor R, G, B
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";
            }
            else if (py == 2 && px == -2 && nivel == 1) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0;
                lost = 1;
                tela = 3;
                cout << "Personagem derrotado! Tente outra vez!";
            }
        }
    }


    if (key == GLUT_KEY_DOWN && tela == 2) {
        if (py >= -1) {
            move_y -= 20;
            py -= 1;
            water--;
            cout << "Valor X: " << px << " Valor Y: " << py << " Nivel: " << nivel << " Agua:" << water << "\n";
            levelenergyCounter++;
            //+++++++++++++++++++++++++++++Agua+++++++++++++++++++++++++++++
                //Morre em 0
            if (water <= 0) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                tela = 3;
                out1 = out2 = out3 = out4 = 0; //Energya de volta
                
                cout << "ficou sem agua! \n";
            }
            //Fonte 1 (topo) 
            if (py == 2 && px == 0) {
                water += w1;
                w1 = 0;
                out1 = -5000; //fonte seca
            }
            //fonte 2(esquerda mid)
            if (py == 0 && px == -2) {
                water += w2;
                w2 = 0;
                out2 = -5000; //fonte seca
            }

            //fonte 3 (esquerda y = -1 x =-1)
            if (py == -1 && px == -1) {
                water += w3;
                w3 = 0;
                out3 = -5000; //fonte seca
            }

            //fonte 4 (direita mid x = 1)
            if (py == 0 && px == 1) {
                water += w4;
                w4 = 0;
                out4 = -5000; //fonte seca
            }

            //+++++++++++++++++++++++++++++boss nivel 1+++++++++++++++++++++++++++++
            if (py == 1 && px == 1 && nivel == 1) {
                nivel++;
                rb1 = 0, gb1 = 1, bb1 = 0;
                b1er = 0, b1eg = 1, b1eb = 0; //olhos cor R, G, B
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";
            }


            //+++++++++++++++++++++++++++++Boss nivel 3+++++++++++++++++++++++++++++
            if (py == -2 && px == -2 && (nivel == 1 || nivel == 2)) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                out1 = out2 = out3 = out4 = 0; //Energy back
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                lost = 1;
                tela = 3;
                cout << "Personagem derrotado! Tente outra vez!";
            }
            else if (py == -2 && px == -2 && nivel == 3) {
                nivel++;
                rb3 = 0, gb3 = 1, bb3 = 0; // Zona green
                b3er = 0, b3eg = 1, b3eb = 0; //olhos cor R, G, B
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";
            }


            //+++++++++++++++++++++++++++++Boss Final+++++++++++++++++++++++++++++
            if (py == -2 && px == 2 && nivel == 4) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                tela = 4;
                cout << "Jogo Concluido! \n";

            }
            else if (py == -2 && px == 2 && !(nivel == 4)) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                lost = 1;
                tela = 3;
                cout << "Personagem derrotado! Tente outra vez!";
            }

        }

    }
    if (key == GLUT_KEY_LEFT && tela == 2) {
        if (px >= -1) {
            move_x -= 20;
            px--;
            water--;
            cout << "Valor X: " << px << " Valor Y: " << py << " Nivel: " << nivel << " Agua:" << water << "\n";
            levelenergyCounter++;
            //+++++++++++++++++++++++++++++Agua+++++++++++++++++++++++++++++
                //Morre em 0
            if (water <= 0) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                tela = 3;
                cout << "ficou sem agua! \n";
            }
            //Fonte 1 (topo) 
            if (py == 2 && px == 0) {
                water += w1;
                w1 = 0;
                out1=-5000; //fonte seca
            }
            //fonte 2(esquerda mid)
            if (py == 0 && px == -2) {
                water += w2;
                w2 = 0;
                out2=-5000; //fonte seca
            }

            //fonte 3 (esquerda y = -1 x =-1)
            if (py == -1 && px == -1) {
                water += w3;
                w3 = 0;
                out3=-5000; //fonte seca
            }

            //fonte 4 (direita mid x = 1)
            if (py == 0 && px == 1) {
                water += w4;
                w4 = 0;
                out4=-5000; //fonte seca
            }

            //+++++++++++++++++++++++++++++boss nivel 1+++++++++++++++++++++++++++++
            if (py == 1 && px == 1 && nivel == 1) {
                nivel++;
                py = 1;
                px = 1;
                rb1 = 0, gb1 = 1, bb1 = 0; //zona cor
                b1er = 0, b1eg = 1, b1eb = 0; //olhos cor R, G, B
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";

            }
            //+++++++++++++++++++++++++++++Boss nivel 2+++++++++++++++++++++++++++++
            if (py == 2 && px == -2 && nivel == 2) {
                nivel++;
                rb2 = 0, gb2 = 1, bb2 = 0; // Zona green
                b2er = 0, b2eg = 1, b2eb = 0;
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";
            }
            else if (py == 2 && px == -2 && nivel == 1) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                lost = 1;
                tela = 3;
                cout << "Personagem derrotado! Tente outra vez!";
            }

            //+++++++++++++++++++++++++++++Boss nivel 3+++++++++++++++++++++++++++++
            if (py == -2 && px == -2 && (nivel == 1 || nivel == 2)) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                lost = 1;
                tela = 3;
                cout << "Personagem derrotado! Tente outra vez!";
            }
            else if (py == -2 && px == -2 && nivel == 3) {
                nivel++;
                rb3 = 0, gb3 = 1, bb3 = 0; // Zona green
                b3er = 0, b3eg = 1, b3eb = 0; //olhos cor R, G, B
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";
            }

        }


    }
    if (key == GLUT_KEY_RIGHT && tela == 2) {
        if (px <= 1) {
            move_x += 20;
            px++;
            water--;
            levelenergyCounter++;
            cout << "Valor X: " << px << " Valor Y: " << py << " Nivel: " << nivel << " Agua:" << water << "\n";

            //+++++++++++++++++++++++++++++Agua+++++++++++++++++++++++++++++
                //Morre em 0
            if (water <= 0) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                out1 = out2 = out3 = out4 = 0; //Energy back
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                tela = 3;
                cout << "ficou sem agua! \n";
            }
            //Fonte 1 (topo) 
            if (py == 2 && px == 0) {
                water += w1;
                w1 = 0;
                out1 = -5000; //fonte seca
            }
            //fonte 2(esquerda mid)
            if (py == 0 && px == -2) {
                water += w2;
                w2 = 0;
                out2 = -5000; //fonte seca
            }

            //fonte 3 (esquerda y = -1 x =-1)
            if (py == -1 && px == -1) {
                water += w3;
                w3 = 0;
                out3 = -5000; //fonte seca
            }

            //fonte 4 (direita mid x = 1)
            if (py == 0 && px == 1) {
                water += w4;
                w4 = 0;
                out4 = -5000; //fonte seca
            }

            //+++++++++++++++++++++++++++++boss nivel 1+++++++++++++++++++++++++++++
            if (py == 1 && px == 1 && nivel == 1) {
                nivel = 2;
                py = 1;
                px = 1;
                rb1 = 0, gb1 = 1, bb1 = 0;
                b1er = 0, b1eg = 1, b1eb = 0;
                cout << "Subiu de Nivel! Novo Nivel: " << nivel << " \n ";
            }

            //+++++++++++++++++++++++++++++Boss Final+++++++++++++++++++++++++++++
            if (py == -2 && px == 2 && nivel == 4) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                cout << "Jogo Concluido! \n";
                tela = 4;
            }
            else if (py == -2 && px == 2 && !(nivel == 4)) {
                nivel = 1;
                py = 0;
                px = 0;
                move_x = 0;
                move_y = 0;
                water = 5;
                w1 = 4, w2 = 4, w3 = 3, w4 = 3;
                rb1 = 1, gb1 = 0.3, bb1 = 0.3; //RGB BOSS 1
                rb2 = 1, gb2 = 0.2, bb2 = 0.2; //RGB BOSS 2
                rb3 = 1, gb3 = 0.1, bb3 = 0.1; //RGB BOSS 3
                b1er = 1, b1eg = 0, b1eb = 0; //olhos cor R, G, B
                b2er = 1, b2eg = 0, b2eb = 0; //olhos cor R, G, B
                b3er = 1, b3eg = 0, b3eb = 0; //olhos cor R, G, B
                out1 = out2 = out3 = out4 = 0; //Energy back
                lost = 1;
                tela = 3;
                cout << "Personagem derrotado! Tente outra vez!";
            }
        }
    }

    if (key == GLUT_KEY_F1 && (tela == 6 || tela ==3)) {
        tela = 2;
        lost = 0;
        cout << "Jogo Iniciado!";
    }
    if (key == GLUT_KEY_F2 && (tela == 3 || tela == 4)) {
        tela = 1;
        
    }
    if (key == GLUT_KEY_F3 && (tela == 1 || tela == 3 || tela == 4)) {
        exit(0);
        
    }
    if (key == GLUT_KEY_F4 && tela == 1) {
        tela = 6;
        
    }

    glutPostRedisplay();
}