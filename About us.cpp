#include<iostream>
#include<GL/gl.h>
#include<stdlib.h>
#include<GL/glu.h>
#include<GL/glx.h>
#include<string.h>
#include<GL/freeglut.h>
using namespace std;
int id[5]={0};
int fl[5]={0};
void init()
{
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0,450,0,450);
        glMatrixMode(GL_MODELVIEW);
}

void plotter(){

}

void about(){
        system("./about");
}

void name()
{       
        glColor3f(0,0.36,0.85);
        glLineWidth(25);
        glBegin(GL_LINES);
        glVertex2f(30,400);
        glVertex2f(30,100);
        glVertex2f(30,100);
        glVertex2f(420,100);
        glVertex2f(420,100);
        glVertex2f(420,400);
        glVertex2f(420,400);
        glVertex2f(230,400);
        glEnd();
        
        char str[]="GRAPH PLOTTER";
        float x=40,y=400;
        int i=0;
        glColor3f(0.36,0.64,0);
        glRasterPos2f(x,y);                
        for(i=0;i<strlen(str);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
        }
}

void keys()
{
        char str[]="START PLOTTING",s[]="ABOUT US";
        int i=0;
        glColor3f(1,.23,.36);
        glBegin(GL_POLYGON);
        glVertex2f(40,300);
        glVertex2f(350,300);
        glVertex2f(350,350);
        glVertex2f(40,350);
        glEnd();  
        
        glLineWidth(10);
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(40,300);
        glVertex2f(350,300);
        glVertex2f(350,300);
        glVertex2f(350,350);
        glVertex2f(350,350);
        glVertex2f(40,350);
        glVertex2f(40,350);
        glVertex2f(40,300);
        glEnd();  
        
            
        glColor3f(1,.23,.36);
        glBegin(GL_POLYGON);
        glVertex2f(40,200);
        glVertex2f(40,150);
        glVertex2f(200,150);
        glVertex2f(200,200);
        glEnd();
        
      glLineWidth(10);
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(40,200);
        glVertex2f(40,150);
        glVertex2f(40,150);
        glVertex2f(200,150);
        glVertex2f(200,150);
        glVertex2f(200,200);
        glVertex2f(200,200);
        glVertex2f(40,200);
        glEnd();
        glColor3f(0,0,0);
        glRasterPos2f(50,320);                
        for(i=0;i<strlen(str);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
        }
                glColor3f(0,0,0);
                glRasterPos2f(50,170);                
        for(i=0;i<strlen(s);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
        }
}
void disp(){
        glClearColor(0.76,0.58,0.62,1);
        glClear(GL_COLOR_BUFFER_BIT);
        //glColor3f(0.75,0.64,0.96);
        name();
        keys();
        glFlush();
}


void mf1(int b,int s,int x,int y){
         //error
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=49&&x<=387)&&(y>=115&&y<=165))
        {
                plotter();
        }  
               
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&((x>=49)&&(x<=220))&&((y>=280)&&(y<=330)))
        {
                about();
                
                
        }               
}
int main(int argc,char **argv)
{
        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(500,500);
        glutInitWindowPosition(350,140);
        id[0]=glutCreateWindow("GRAPH Plotter");
        init();
        glutDisplayFunc(disp);
        glutMouseFunc(mf1);
        glutMainLoop();
        
}
