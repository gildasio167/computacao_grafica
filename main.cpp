#include <iostream>

using namespace std;

#include <gui.h>

        float px = 0.0;
        float py = 1.0;

        float raio = 0.2;

        void primeiroObjeto()
        {
            GUI::setColor(0.0,0.0,0.0);
            glBegin(GL_QUADS);
            glNormal3f(0,0,1);
                glVertex3f(0,0,0);
                glVertex3f(1,0,0);
                glVertex3f(1,1,0);
                //glVertex3f(0.5,1.5,0);
                //glVertex3f(0,1,0);
            glEnd();

            glBegin(GL_QUADS);
            glNormal3f(0,1,0);
                glVertex3f(0,0,0);
                glVertex3f(0,0,1);
                glVertex3f(1,0,1);
                glVertex3f(1,0,0);
            glEnd();
        }

        void trianguloColorido()
        {
//            glBegin(GL_QUADS);
//            glNormal3f(0,0,1);
//                GUI::setColor(0.0,0.8,0.0);
//                glVertex3f(0,0,0);
//                GUI::setColor(0.8,0.0,0.0);
//                glVertex3f(1,0,0);
//                GUI::setColor(0.0,0.0,0.8);
//                glVertex3f(1,1,0);
//            glEnd();
        }

        float tx = 0.0;
        float ty = 0.0;
        float ang = 0.5;
        float sx = 1.0;
        float sy = 1.0;
        float sz = 1.0;





        void desenha() {
            GUI::displayInit();

           GUI::setLight(0, 0,1,10, true, false);

            //GUI::setLight(0,5,0,10, true, false);



            GUI::setColor(87,85,81,1,true);
            GUI::drawFloor(6,6,0.3,0.3);


            glRotatef(ang, 0,0,1);
            glTranslatef(tx,ty,0);
            glScalef(sx,sy,sz);

            glPushMatrix();
            GUI::drawOrigin(0.5);

            GUI::setColor(0,0,0);
//            glDisable(GL_CULL_FACE);

//            glBegin(GL_LINE_LOOP);
//            glNormal3f(0,0,1);
//                glVertex3f(-0.8,0.4,0);
//                glVertex3f(0.8,0.4,0);
//                glVertex3f(0.8,3,0);
//                glVertex3f(-0.8,3,0);

//            glEnd();
            //Parte interior
            glBegin(GL_LINE_LOOP);

            glNormal3f(0,0,1);
                glVertex3f(-0.8,0.4,0);
                glVertex3f(-0.8,0.4,-0.6);
                glVertex3f(0.8,0.4,-0.6);
                glVertex3f(0.8,0.4,0);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                    glVertex3f(-0.8,0.4,0);
                    glVertex3f(0.8,0.4,0);
                    glVertex3f(0.8,3,0);
                    glVertex3f(-0.8,3,0);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,3,0);
                glVertex3f(-0.8,3,-0.6);
                glVertex3f(0.8,3,-0.6);
                glVertex3f(0.8,3,0);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,0.4,-0.6);
                glVertex3f(0.8,0.4,-0.6);
                glVertex3f(0.8,3,-0.6);
                glVertex3f(-0.8,3,-0.6);

            glEnd();
            //Fim da Parte interior
            glBegin(GL_LINE_LOOP);

            glNormal3f(0,0,1);
                glVertex3f(-0.85,0.35,0.05);
                glVertex3f(-0.85,0.35,-0.65);
                glVertex3f(0.85,0.35,-0.65);
                glVertex3f(0.85,0.35,0.05);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,0.05);
                    glVertex3f(0.85,0.35,0.05);
                    glVertex3f(0.85,3.05,0.05);
                    glVertex3f(-0.85,3.05,0.05);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.85,3.05,0.05);
                glVertex3f(-0.85,3.05,-0.65);
                glVertex3f(0.85,3.05,-0.65);
                glVertex3f(0.85,3.05,0.05);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.85,0.35,-0.65);
                glVertex3f(0.85,0.35,-0.65);
                glVertex3f(0.85,3.05,-0.65);
                glVertex3f(-0.85,3.05,-0.65);

            glEnd();

//            glBegin(GL_LINE_LOOP);
//            glNormal3f(0,0,1);
//                glVertex3f(-0.85,0.35,0);
//                glVertex3f(0.85,0.35,0);
//                glVertex3f(0.85,3.05,0);
//                glVertex3f(-0.85,3.05,0);
//            glEnd();


            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,2.4,0);
                glVertex3f(-0.8,2.43,0);
                glVertex3f(0.8,2.43,0);
                glVertex3f(0.8,2.4,0);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,2.40,0);
                glVertex3f(-0.8,2.40,-0.6);
                glVertex3f(0.8,2.40,-0.6);
                glVertex3f(0.8,2.40,0);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,2.43,0);
                glVertex3f(-0.8,2.43,-0.6);
                glVertex3f(0.8,2.43,-0.6);
                glVertex3f(0.8,2.43,0);
            glEnd();



            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,1.33,0);
                glVertex3f(-0.8,1.33,-0.6);
                glVertex3f(0.8,1.33,-0.6);
                glVertex3f(0.8,1.33,0);
            glEnd();
            glBegin(GL_LINE_LOOP);
            glNormal3f(0,0,1);
                glVertex3f(-0.8,1.30,0);
                glVertex3f(-0.8,1.30,-0.6);
                glVertex3f(0.8,1.30,-0.6);
                glVertex3f(0.8,1.30,0);
            glEnd();


//            glBegin(GL_LINES);
//            glNormal3f(0,0,1);
//                glVertex3f(-0.8,1.30,0);
//                glVertex3f(0.8,1.30,0);
//            glEnd();




            glBegin(GL_LINES);
            glNormal3f(0,0,1);
                glVertex3f(-0.06,0.4,0);
                glVertex3f(-0.06,3,0);
            glEnd();
            glBegin(GL_LINES);
            glNormal3f(0,0,1);
                glVertex3f(-0.03,0.4,0);
                glVertex3f(-0.03,3,0);
            glEnd();

            glBegin(GL_LINES);
            glNormal3f(0,0,1);
                glVertex3f(-0.06,0.4,-0.6);
                glVertex3f(-0.06,3,-0.6);
            glEnd();
            glBegin(GL_LINES);
            glNormal3f(0,0,1);
                glVertex3f(-0.03,0.4,-0.6);
                glVertex3f(-0.03,3,-0.6);
            glEnd();



            glPushMatrix();
                GUI::setColor(0,0,0);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.03,0.4,0);
                    glVertex3f(-0.03,0.4,-0.6);
                    glVertex3f(-0.03,3,-0.6);
                    glVertex3f(-0.03,3,0);
                glEnd();
                glEnable(GL_CULL_FACE);


                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.06,0.4,0);
                    glVertex3f(-0.06,0.4,-0.6);
                    glVertex3f(-0.06,3,-0.6);
                    glVertex3f(-0.06,3,0);
                glEnd();
            glPopMatrix();


            glPushMatrix();
                GUI::setColor(230,232,250);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.06,0.4,0);
                    glVertex3f(-0.06,3,0);
                    glVertex3f(-0.03,3,0);
                    glVertex3f(-0.03,0.4,0);
                glEnd();
                glEnable(GL_CULL_FACE);


                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.06,0.4,-0.6);
                    glVertex3f(-0.06,3,-0.6);
                    glVertex3f(-0.03,3,-0.6);
                    glVertex3f(-0.03,0.4,-0.6);
                glEnd();
                glEnable(GL_CULL_FACE);
            glPopMatrix();


            glPushMatrix();
                GUI::setColor(230,232,250);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,0.05);
                    glVertex3f(-0.8,0.35,0.05);
                    glVertex3f(-0.8,3.05,0.05);
                    glVertex3f(-0.85,3.05,0.05);
                glEnd();
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(0.85,0.35,0.05);
                    glVertex3f(0.8,0.35,0.05);
                    glVertex3f(0.8,3.05,0.05);
                    glVertex3f(0.85,3.05,0.05);
                glEnd();
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,3.05,0.05);
                    glVertex3f(0.8,3.05,0.05);
                    glVertex3f(0.8,3.0,0.05);
                    glVertex3f(-0.85,3.0,0.05);
                glEnd();
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,0.05);
                    glVertex3f(0.8,0.35,0.05);
                    glVertex3f(0.8,0.40,0.05);
                    glVertex3f(-0.85,0.40,0.05);
                glEnd();
            glPopMatrix();


            glPushMatrix();
                GUI::setColor(230,232,250);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,-0.65);
                    glVertex3f(-0.8,0.35,-0.65);
                    glVertex3f(-0.8,3.05,-0.65);
                    glVertex3f(-0.85,3.05,-0.65);
                glEnd();
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(0.85,0.35,-0.65);
                    glVertex3f(0.8,0.35,-0.65);
                    glVertex3f(0.8,3.05,-0.65);
                    glVertex3f(0.85,3.05,-0.65);
                glEnd();
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,3.05,-0.65);
                    glVertex3f(0.8,3.05,-0.65);
                    glVertex3f(0.8,3.0,-0.65);
                    glVertex3f(-0.85,3.0,-0.65);
                glEnd();
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,-0.65);
                    glVertex3f(0.8,0.35,-0.65);
                    glVertex3f(0.8,0.40,-0.65);
                    glVertex3f(-0.85,0.40,-0.65);
                glEnd();
            glPopMatrix();


                //face cor branca
            glPushMatrix();
                GUI::setColor(230,232,250);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,3.05,0.05);
                    glVertex3f(-0.85,3.05,-0.65);
                    glVertex3f(0.85,3.05,-0.65);
                    glVertex3f(0.85,3.05,0.05);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,0.05);
                    glVertex3f(-0.85,3.05,0.05);
                    glVertex3f(-0.85,3.05,-0.65);
                    glVertex3f(-0.85,0.35,-0.65);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.85,0.35,0.05);
                    glVertex3f(0.85,0.35,0.05);
                    glVertex3f(0.85,0.35,-0.65);
                    glVertex3f(-0.85,0.35,-0.65);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(0.85,0.35,0.05);
                    glVertex3f(0.85,3.05,0.05);
                    glVertex3f(0.85,3.05,-0.65);
                    glVertex3f(0.85,0.35,-0.65);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.85,0.35,-0.65);
                    glVertex3f(-0.85,3.05,-0.65);
                    glVertex3f(0.85,3.05,-0.65);
                    glVertex3f(0.85,0.35,-0.65);
                glEnd();
                glEnable(GL_CULL_FACE);

            glPopMatrix();

            //FACE INTERNA COM A COR PRETA
            glPushMatrix();
                GUI::setColor(0,0,0);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.8,3.0,0.0);
                    glVertex3f(-0.8,3.0,-0.6);
                    glVertex3f(0.8,3.0,-0.6);
                    glVertex3f(0.8,3.0,0.0);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.8,0.40,0.0);
                    glVertex3f(-0.8,3.0,0.0);
                    glVertex3f(-0.8,3.0,-0.6);
                    glVertex3f(-0.8,0.40,-0.6);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(-0.8,0.40,0.0);
                    glVertex3f(0.8,0.40,0.0);
                    glVertex3f(0.8,0.40,-0.6);
                    glVertex3f(-0.8,0.40,-0.6);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                glNormal3f(0,0,1);
                    glVertex3f(0.8,0.40,0.0);
                    glVertex3f(0.8,3.0,0.0);
                    glVertex3f(0.8,3.0,-0.6);
                    glVertex3f(0.8,0.40,-0.6);
                glEnd();
                glEnable(GL_CULL_FACE);
            glPopMatrix();





            glBegin(GL_LINES);
            glNormal3f(0,0,1);
                glVertex3f(0.4,1.33,0);
                glVertex3f(0.4,2.4,0);
            glEnd();
            glBegin(GL_LINES);
            glNormal3f(0,0,1);
                glVertex3f(0.42,1.33,0);
                glVertex3f(0.42,2.4,0);
            glEnd();


            glPopMatrix();

            //portas
            glPushMatrix();
                GUI::setColor(0.5,0.5,0.2);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.8,3,0.05);
                    glVertex3f(-0.8,0.40,0.05);
                    glVertex3f(-0.4,0.40,0.05);
                    glVertex3f(-0.4,3,0.05);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.4,3,0.05);
                    glVertex3f(-0.4,0.40,0.05);
                    glVertex3f(-0.0,0.40,0.05);
                    glVertex3f(-0.0,3,0.05);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0,3,0.05);
                    glVertex3f(0,0.40,0.05);
                    glVertex3f(0.4,0.40,0.05);
                    glVertex3f(0.4,3,0.05);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.8,3,0.05);
                    glVertex3f(0.8,0.40,0.05);
                    glVertex3f(0.4,0.40,0.05);
                    glVertex3f(0.4,3,0.05);
                glEnd();
                glEnable(GL_CULL_FACE);


            glPopMatrix();
            glPushMatrix();
                GUI::setColor(0,0,0);
                glDisable(GL_CULL_FACE);
                glBegin(GL_LINE_LOOP);
                    glVertex3f(-0.8,3,0.06);
                    glVertex3f(-0.8,0.40,0.06);
                    glVertex3f(-0.4,0.40,0.06);
                    glVertex3f(-0.4,3,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_LINE_LOOP);
                    glVertex3f(-0.4,3,0.06);
                    glVertex3f(-0.4,0.40,0.06);
                    glVertex3f(-0.0,0.40,0.06);
                    glVertex3f(-0.0,3,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_LINE_LOOP);
                    glVertex3f(0,3,0.06);
                    glVertex3f(0,0.40,0.06);
                    glVertex3f(0.4,0.40,0.06);
                    glVertex3f(0.4,3,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_LINE_LOOP);
                    glVertex3f(0.8,3,0.06);
                    glVertex3f(0.8,0.40,0.06);
                    glVertex3f(0.4,0.40,0.06);
                    glVertex3f(0.4,3,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);


            glPopMatrix();

            //MAÇANETAS PORTA 1
            glPushMatrix();
                GUI::setColor(1,1,1);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.43,1.53,0.06);
                    glVertex3f(-0.43,1.53,0.12);
                    glVertex3f(-0.43,1.50,0.12);
                    glVertex3f(-0.43,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.47,1.53,0.06);
                    glVertex3f(-0.47,1.53,0.12);
                    glVertex3f(-0.47,1.50,0.12);
                    glVertex3f(-0.47,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.43,1.73,0.06);
                    glVertex3f(-0.43,1.73,0.12);
                    glVertex3f(-0.43,1.70,0.12);
                    glVertex3f(-0.43,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.47,1.73,0.06);
                    glVertex3f(-0.47,1.73,0.12);
                    glVertex3f(-0.47,1.70,0.12);
                    glVertex3f(-0.47,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.47,1.73,0.09);
                    glVertex3f(-0.47,1.73,0.12);
                    glVertex3f(-0.47,1.50,0.12);
                    glVertex3f(-0.47,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.43,1.73,0.09);
                    glVertex3f(-0.43,1.73,0.12);
                    glVertex3f(-0.43,1.50,0.12);
                    glVertex3f(-0.43,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.43,1.73,0.12);
                    glVertex3f(-0.47,1.73,0.12);
                    glVertex3f(-0.47,1.50,0.12);
                    glVertex3f(-0.43,1.50,0.12);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.43,1.73,0.12);
                    glVertex3f(-0.47,1.73,0.12);
                    glVertex3f(-0.47,1.73,0.06);
                    glVertex3f(-0.43,1.73,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.43,1.50,0.12);
                    glVertex3f(-0.47,1.50,0.12);
                    glVertex3f(-0.47,1.50,0.06);
                    glVertex3f(-0.43,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);


            glPopMatrix();

            //MAÇANETAS PORTA 2
            glPushMatrix();
                GUI::setColor(1,1,1);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.37,1.53,0.06);
                    glVertex3f(-0.37,1.53,0.12);
                    glVertex3f(-0.37,1.50,0.12);
                    glVertex3f(-0.37,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.33,1.53,0.06);
                    glVertex3f(-0.33,1.53,0.12);
                    glVertex3f(-0.33,1.50,0.12);
                    glVertex3f(-0.33,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.37,1.73,0.06);
                    glVertex3f(-0.37,1.73,0.12);
                    glVertex3f(-0.37,1.70,0.12);
                    glVertex3f(-0.37,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.33,1.73,0.06);
                    glVertex3f(-0.33,1.73,0.12);
                    glVertex3f(-0.33,1.70,0.12);
                    glVertex3f(-0.33,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.33,1.73,0.09);
                    glVertex3f(-0.33,1.73,0.12);
                    glVertex3f(-0.33,1.50,0.12);
                    glVertex3f(-0.33,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.37,1.73,0.09);
                    glVertex3f(-0.37,1.73,0.12);
                    glVertex3f(-0.37,1.50,0.12);
                    glVertex3f(-0.37,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.37,1.73,0.12);
                    glVertex3f(-0.33,1.73,0.12);
                    glVertex3f(-0.33,1.50,0.12);
                    glVertex3f(-0.37,1.50,0.12);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.37,1.73,0.12);
                    glVertex3f(-0.33,1.73,0.12);
                    glVertex3f(-0.33,1.73,0.06);
                    glVertex3f(-0.37,1.73,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(-0.37,1.50,0.12);
                    glVertex3f(-0.33,1.50,0.12);
                    glVertex3f(-0.33,1.50,0.06);
                    glVertex3f(-0.37,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);


            glPopMatrix();

            //MAÇANETAS PORTA 3
            glPushMatrix();
                GUI::setColor(1,1,1);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.37,1.53,0.06);
                    glVertex3f(0.37,1.53,0.12);
                    glVertex3f(0.37,1.50,0.12);
                    glVertex3f(0.37,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.33,1.53,0.06);
                    glVertex3f(0.33,1.53,0.12);
                    glVertex3f(0.33,1.50,0.12);
                    glVertex3f(0.33,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.37,1.73,0.06);
                    glVertex3f(0.37,1.73,0.12);
                    glVertex3f(0.37,1.70,0.12);
                    glVertex3f(0.37,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.33,1.73,0.06);
                    glVertex3f(0.33,1.73,0.12);
                    glVertex3f(0.33,1.70,0.12);
                    glVertex3f(0.33,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.33,1.73,0.09);
                    glVertex3f(0.33,1.73,0.12);
                    glVertex3f(0.33,1.50,0.12);
                    glVertex3f(0.33,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.37,1.73,0.09);
                    glVertex3f(0.37,1.73,0.12);
                    glVertex3f(0.37,1.50,0.12);
                    glVertex3f(0.37,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.37,1.73,0.12);
                    glVertex3f(0.33,1.73,0.12);
                    glVertex3f(0.33,1.50,0.12);
                    glVertex3f(0.37,1.50,0.12);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.37,1.73,0.12);
                    glVertex3f(0.33,1.73,0.12);
                    glVertex3f(0.33,1.73,0.06);
                    glVertex3f(0.37,1.73,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.37,1.50,0.12);
                    glVertex3f(0.33,1.50,0.12);
                    glVertex3f(0.33,1.50,0.06);
                    glVertex3f(0.37,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);


            glPopMatrix();

            //MAÇANETAS PORTA 4
            glPushMatrix();
                GUI::setColor(1,1,1);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.43,1.53,0.06);
                    glVertex3f(0.43,1.53,0.12);
                    glVertex3f(0.43,1.50,0.12);
                    glVertex3f(0.43,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.47,1.53,0.06);
                    glVertex3f(0.47,1.53,0.12);
                    glVertex3f(0.47,1.50,0.12);
                    glVertex3f(0.47,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.43,1.73,0.06);
                    glVertex3f(0.43,1.73,0.12);
                    glVertex3f(0.43,1.70,0.12);
                    glVertex3f(0.43,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.47,1.73,0.06);
                    glVertex3f(0.47,1.73,0.12);
                    glVertex3f(0.47,1.70,0.12);
                    glVertex3f(0.47,1.70,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.47,1.73,0.09);
                    glVertex3f(0.47,1.73,0.12);
                    glVertex3f(0.47,1.50,0.12);
                    glVertex3f(0.47,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);
                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.43,1.73,0.09);
                    glVertex3f(0.43,1.73,0.12);
                    glVertex3f(0.43,1.50,0.12);
                    glVertex3f(0.43,1.50,0.09);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.43,1.73,0.12);
                    glVertex3f(0.47,1.73,0.12);
                    glVertex3f(0.47,1.50,0.12);
                    glVertex3f(0.43,1.50,0.12);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.43,1.73,0.12);
                    glVertex3f(0.47,1.73,0.12);
                    glVertex3f(0.47,1.73,0.06);
                    glVertex3f(0.43,1.73,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);

                glDisable(GL_CULL_FACE);
                glBegin(GL_QUADS);
                    glVertex3f(0.43,1.50,0.12);
                    glVertex3f(0.47,1.50,0.12);
                    glVertex3f(0.47,1.50,0.06);
                    glVertex3f(0.43,1.50,0.06);
                glEnd();
                glEnable(GL_CULL_FACE);


           glPopMatrix();





        

            tx += 0.7*glutGUI::dtx;
            ty += 0.7*glutGUI::dty;
            ang += glutGUI::day;
            sx += glutGUI::dsx;
            sy += glutGUI::dsy;
            sz += glutGUI::dsz;
            //primeiroObjeto();

            //trianguloColorido();

            GUI::displayEnd();
        }

        void teclado(unsigned char tecla, int sx, int sy) {
            GUI::keyInit(tecla,sx,sy);

            switch (tecla) {
            case 't':
                glutGUI::trans_obj = !glutGUI::trans_obj;
                break;
            case 'l':
                glutGUI::trans_luz = !glutGUI::trans_luz;
                break;
            case 'b':
                sx -= 0.1;
                break;
            case 'n':
                sy += 0.1;
                break;
            case 'a':
                px -= 0.1;
                break;
            case 'd':
                px += 0.1;
                break;
            case 's':
                py -= 0.1;
                break;
            case 'w':
                py += 0.1;
                break;
            case 'h':
                sx += 0.5;
                break;
            case 'j':
                sy += 0.5;
                break;
            case 'k':
                sz += 0.1;
                break;
            case 'm':
                sz -= 0.1;
                break;

//            case 'i':
//                px=py=0.0;
//                tx=ty=0.0;
//                sx=sy=sz=1.0;
//                break;
            default:
                break;
            }
        }

        int main()
        {
            cout << "Hello World!" << endl;

            GUI gui(800,600,desenha,teclado);
        }

        //inicializando OpenGL
        //while(true) {
        //    desenha();
        //    interacaoUsuario();
        //    //if () {
        //    //    break;
        //    //}
        //}





















//        //adicionar:
//        //-deslocar cubo com o teclado
//        //-deslocar cubo com o mouse
//        //-primitivas OpenGL (glBegin, glEnd)
//        //-glNormal, iluminação

//        //-leitor 3DS
//        //-usar as transformacoes matriciais do proprio OpenGL
//        //-push/popMatrix (podem ser usados um dentro do outro - nocao de pilha)

//        //-ordem das transformacoes
//        //  -translacao e rotacao
//        //  -testar escala!!!
//        //-interpretacao de uma composicao de transformacoes já definida
//        //      <----------- globais
//        //  -   T.Rz.Ry.Rx.S . v
//        //      -----------> locais
//        //  -direita->esquerda: Transfs globais
//        //  -esquerda->direita: Transfs locais
