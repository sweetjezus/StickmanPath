#pragma once
#include "tabuleiro.h";

void stickman() {
    glColor3f(0, 0, 0); // Cor do stickman
    //cabeça
    glBegin(GL_POLYGON);
    glVertex2f(49 + move_x, 54 + move_y);
    glVertex2f(51 + move_x, 54 + move_y);
    glVertex2f(51 + move_x, 56 + move_y);
    glVertex2f(49 + move_x, 56 + move_y);
    glEnd();
    //corpo
    glBegin(GL_LINES);
    glVertex2f(50 + move_x, 54 + move_y);
    glVertex2f(50 + move_x, 50 + move_y);
    glEnd();
    //braços
    glBegin(GL_LINE_STRIP);
    glVertex2f(48 + move_x, 51 + move_y);
    glVertex2f(50 + move_x, 54 + move_y);
    glVertex2f(52 + move_x, 51 + move_y);
    glEnd();
    //pernas
    glBegin(GL_LINE_STRIP);
    glVertex2f(48 + move_x, 47 + move_y);
    glVertex2f(50 + move_x, 50 + move_y);
    glVertex2f(52 + move_x, 47 + move_y);
    glEnd();

}

void caveira(void) {
    //CAPA
    //QUADRADO MAXILAR
    //QUADRADO MAXILAR
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0); // R, G, B
    glVertex2f(35, 35);
    glVertex2f(65, 35);
    glVertex2f(65, 70);
    glVertex2f(35, 70);
    glEnd();
    //circulo
    float angleb4, raio_xb4, raio_yb4;
    int ib4, circle_pointsb4 = 1000;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(1.0);

    glBegin(GL_POLYGON);//heroi
    raio_xb4 = 30.0;
    raio_yb4 = 30.0;
    for (ib4 = 0; ib4 < circle_pointsb4; ib4++) {
        angleb4 = (2 * PI * ib4) / circle_pointsb4;
        glVertex2f(50.0 + raio_xb4 * cos(angleb4), 70.0 + raio_yb4 * sin(angleb4));
    }
    glEnd();
    //QUADRADO MAXILAR
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0.8); // R, G, B
    glVertex2f(40, 35);
    glVertex2f(60, 35);
    glVertex2f(60, 70);
    glVertex2f(40, 70);
    glEnd();

    //circulo
    
    ib4, circle_pointsb4 = 1000;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1.0f, 1.0f, 0.8f);
    glPointSize(1.0);

    glBegin(GL_POLYGON);//heroi
    raio_xb4 = 20.0;
    raio_yb4 = 20.0;
    for (ib4 = 0; ib4 < circle_pointsb4; ib4++) {
        angleb4 = (2 * PI * ib4) / circle_pointsb4;
        glVertex2f(50.0 + raio_xb4 * cos(angleb4), 70.0 + raio_yb4 * sin(angleb4));
    }
    glEnd();

    //olhos 
    
    ib4, circle_pointsb4 = 500;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(1.0);
    glBegin(GL_POLYGON);//heroi
    raio_xb4 = 3.5;
    raio_yb4 = 3.5;
    for (ib4 = 0; ib4 < circle_pointsb4; ib4++) {
        angleb4 = (2 * PI * ib4) / circle_pointsb4;
        glVertex2f(60 + raio_xb4 * cos(angleb4), 70.0 + raio_yb4 * sin(angleb4));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    for (ib4 = 0; ib4 < circle_pointsb4; ib4++) {
        angleb4 = (2 * PI * ib4) / circle_pointsb4;
        glVertex2f(40 + raio_xb4 * cos(angleb4), 70.0 + raio_yb4 * sin(angleb4));
    }
    glEnd();

    //nariz
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(48, 55);
    glVertex2f(52, 55);
    glVertex2f(50, 60);
    glEnd();


    //boca
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(40, 42);
    glVertex2f(60, 42);
    glEnd();

    //vertical
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(45, 45);
    glVertex2f(45, 39);
    glVertex2f(50, 45);
    glVertex2f(50, 39);
    glVertex2f(55, 45);
    glVertex2f(55, 39);
    glEnd();
   
}

void boss_1(void) {
    //CAPA
    glBegin(GL_POLYGON);
    glColor3f(0, 0.3, 0); // R, G, B
    glVertex2f(67, 63);
    glVertex2f(73, 63);
    glVertex2f(73, 70);
    glVertex2f(67, 70);
    glEnd();
    //circulo
    float angle3, raio_x3, raio_y3;
    int i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 5.5;
    raio_y3 = 5.5;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(70.0 + raio_x3 * cos(angle3), 70 + raio_y3 * sin(angle3));
    }
    glEnd();
    //CABECA
    //QUADRADO MAXILAR
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0.8); // R, G, B
    glVertex2f(68, 63);
    glVertex2f(72, 63);
    glVertex2f(72, 70);
    glVertex2f(68, 70);
    glEnd();

    i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1, 1, 0.8);
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 3.5;
    raio_y3 = 3.5;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(70.0 + raio_x3 * cos(angle3), 70 + raio_y3 * sin(angle3));
    }
    glEnd();

    //olhos 
    float angle2, raio2_x, raio2_y;
    int i2, circle_points2 = 500;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(b1er, b1eg, b1eb);
    glPointSize(1.0);
    glBegin(GL_POLYGON);//heroi
    raio2_x = 0.8;
    raio2_y = 0.8;
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(71.5 + raio2_x * cos(angle2), 70.5 + raio2_y * sin(angle2));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(68.5 + raio2_x * cos(angle2), 70.5 + raio2_y * sin(angle2));
    }
    glEnd();

    //nariz
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(69.5, 68);
    glVertex2f(70.5, 68);
    glVertex2f(70, 70);
    glEnd();

    //boca
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(68, 65);
    glVertex2f(72, 65);
    glEnd();

    //vertical
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(70, 64.2);
    glVertex2f(70, 65.8);
    glEnd();
    glFlush();
}

void boss_2(void) {
    //CAPA
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.2, 0); // R, G, B
    glVertex2f(7, 83);
    glVertex2f(13, 83);
    glVertex2f(13, 90);
    glVertex2f(7, 90);
    glEnd();
    //circulo
    float angle3, raio_x3, raio_y3;
    int i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPointSize(1.0);
    glBegin(GL_POLYGON);
    raio_x3 = 6.0;
    raio_y3 = 6.0;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(10.0 + raio_x3 * cos(angle3), 90 + raio_y3 * sin(angle3));
    }
    glEnd();
    //CABECA
    //QUADRADO MAXILAR
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0.8); // R, G, B
    glVertex2f(8, 83);
    glVertex2f(12, 83);
    glVertex2f(12, 90);
    glVertex2f(8, 90);
    glEnd();

    i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1, 1, 0.8);
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 4.0;
    raio_y3 = 4.0;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(10.0 + raio_x3 * cos(angle3), 90 + raio_y3 * sin(angle3));
    }
    glEnd();

    //olhos 
    float angle2, raio2_x, raio2_y;
    int i2, circle_points2 = 500;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(b2er, b2eg, b2eb);
    glPointSize(1.0);
    glBegin(GL_POLYGON);//heroi
    raio2_x = 0.8;
    raio2_y = 0.8;
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(11.5 + raio2_x * cos(angle2), 90.5 + raio2_y * sin(angle2));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(8.5 + raio2_x * cos(angle2), 90.5 + raio2_y * sin(angle2));
    }
    glEnd();

    //nariz
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(9.5, 88);
    glVertex2f(10.5, 88);
    glVertex2f(10, 90);
    glEnd();

    //boca
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(8, 85);
    glVertex2f(12, 85);
    glEnd();

    //vertical
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(8.6, 84.2);
    glVertex2f(8.6, 85.8);

    glVertex2f(11.4, 84.2);
    glVertex2f(11.5, 85.8);
    glEnd();
    glFlush();
}

void boss_3(void) {
    //CAPA
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0); // R, G, B
    glVertex2f(7, 3);
    glVertex2f(13, 3);
    glVertex2f(13, 10);
    glVertex2f(7, 10);
    glEnd();
    //circulo
    float angle3, raio_x3, raio_y3;
    int i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 6.0;
    raio_y3 = 6.0;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(10.0 + raio_x3 * cos(angle3), 10 + raio_y3 * sin(angle3));
    }
    glEnd();
    //CABECA
    //QUADRADO MAXILAR
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0.8); // R, G, B
    glVertex2f(8, 3);
    glVertex2f(12, 3);
    glVertex2f(12, 10);
    glVertex2f(8, 10);
    glEnd();

    i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1, 1, 0.8);
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 4.0;
    raio_y3 = 4.0;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(10.0 + raio_x3 * cos(angle3), 10 + raio_y3 * sin(angle3));
    }
    glEnd();

    //olhos 
    float angle2, raio2_x, raio2_y;
    int i2, circle_points2 = 500;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(b3er, b3eg, b3eb);
    glPointSize(1.0);
    glBegin(GL_POLYGON);//heroi
    raio2_x = 0.8;
    raio2_y = 0.8;
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(11.5 + raio2_x * cos(angle2), 10.5 + raio2_y * sin(angle2));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(8.5 + raio2_x * cos(angle2), 10.5 + raio2_y * sin(angle2));
    }
    glEnd();

    //nariz
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(9.5, 8);
    glVertex2f(10.5, 8);
    glVertex2f(10, 10);
    glEnd();

    //boca
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(8, 5);
    glVertex2f(12, 5);
    glEnd();

    //vertical
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(8.6, 4.2);
    glVertex2f(8.6, 5.8);
    glVertex2f(10, 4.2);
    glVertex2f(10, 5.8);
    glVertex2f(11.4, 4.2);
    glVertex2f(11.5, 5.8);
    glEnd();
    glFlush();
}

void boss_4(void) {
    //CAPA
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0, 0); // R, G, B
    glVertex2f(87,  3);
    glVertex2f(93,  3);
    glVertex2f(93, 10);
    glVertex2f(87, 10);
    glEnd();
    //circulo
    float angle3, raio_x3, raio_y3;
    int i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
   
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 6.0;
    raio_y3 = 6.0;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(90.0 + raio_x3 * cos(angle3), 10 + raio_y3 * sin(angle3));
    }
    glEnd();
    //CABECA
    //QUADRADO MAXILAR
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0.8); // R, G, B
    glVertex2f(88, 3);
    glVertex2f(92, 3);
    glVertex2f(92, 10);
    glVertex2f(88, 10);
    glEnd();

    i3, circle_points3 = 100;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1, 1, 0.8);
    glPointSize(1.0);

    glBegin(GL_POLYGON);
    raio_x3 = 4.0;
    raio_y3 = 4.0;
    for (i3 = 0; i3 < circle_points3; i3++) {
        angle3 = (2 * PI * i3) / circle_points3;
        glVertex2f(90.0 + raio_x3 * cos(angle3), 10 + raio_y3 * sin(angle3));
    }
    glEnd();

    //olhos 
    float angle2, raio2_x, raio2_y;
    int i2, circle_points2 = 500;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1, 0, 0);
    glPointSize(1.0);
    glBegin(GL_POLYGON);//heroi
    raio2_x = 0.8;
    raio2_y = 0.8;
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(91.5 + raio2_x * cos(angle2), 10.5 + raio2_y * sin(angle2));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (i2 = 0; i2 < circle_points2; i2++) {
        angle2 = (2 * PI * i2) / circle_points2;
        glVertex2f(88.5 + raio2_x * cos(angle2), 10.5 + raio2_y * sin(angle2));
    }
    glEnd();
    
    //nariz
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(89.5, 8);
    glVertex2f(90.5, 8);
    glVertex2f(90, 10);
    glEnd();

    //boca
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(88, 5);
    glVertex2f(92, 5);
    glEnd();

    //vertical
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(88.7, 4.2);
    glVertex2f(88.7, 5.8);

    glVertex2f(89.5,   4.2);
    glVertex2f(89.5,   5.8);

    glVertex2f(90, 4.2);
    glVertex2f(90, 5.8);

    glVertex2f(90.7, 4.2);
    glVertex2f(90.7, 5.8);

    glVertex2f(91.3, 4.2);
    glVertex2f(91.3, 5.8);
    glEnd();
    glFlush();
}