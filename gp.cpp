#include<iostream>
#include<GL/gl.h>
#include<stdlib.h>
#include<GL/glu.h>
#include<GL/glx.h>
#include<string.h>
#include<GL/freeglut.h>
using namespace std;
//for orthogonal space
void init()
{
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0,500,0,500);
        glMatrixMode(GL_MODELVIEW);
}
//plotter is called when user uses cursor presses in  plot graph 
void plotter(){
        system("./graph");
}
//plotter is called when user uses cursor presses in about us
void about(){
        system("./about");
}
//name function to enter the strings in buttons and the upper panel
void name()
{       
        glColor3f(0,0.36,0.85);
        glLineWidth(25);
        glBegin(GL_LINES);
        glVertex2f(10,490);
        glVertex2f(10,10);
        glVertex2f(10,10);
        glVertex2f(490,10);
        glVertex2f(490,10);
        glVertex2f(490,490);
        glVertex2f(490,485);
        glVertex2f(230,485);
        glEnd();
        
        char str[]="GRAPH PLOTTER";
        float x=20,y=470;
        int i=0;
        glColor3f(0.7,0.7,0.7);
        glRasterPos2f(x,y);                
        for(i=0;i<strlen(str);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
        }
}
//keys function is to draw keys.
void keys()
{
        char str[]="START PLOTTING",s[]="ABOUT US";
        int i=0;
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(120,300);
        glVertex2f(380,300);
        glVertex2f(380,350);
        glVertex2f(120,350);
        glEnd();  
        
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(120,300);
        glVertex2f(380,300);
        glVertex2f(380,300);
        glVertex2f(380,350);
        glVertex2f(380,350);
        glVertex2f(120,350);
        glVertex2f(120,350);
        glVertex2f(120,300);
        glEnd();  
        
            
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(170,200);
        glVertex2f(170,150);
        glVertex2f(330,150);
        glVertex2f(330,200);
        glEnd();
        
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(170,200);
        glVertex2f(170,150);
        glVertex2f(170,150);
        glVertex2f(330,150);
        glVertex2f(330,150);
        glVertex2f(330,200);
        glVertex2f(330,200);
        glVertex2f(170,200);
        glEnd();
        glColor3f(0,0,0);
        glRasterPos2f(145,320);                
        for(i=0;i<strlen(str);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
        }
                glColor3f(0,0,0);
                glRasterPos2f(190,170);                
        for(i=0;i<strlen(s);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
        }
}
//display function
void disp(){
        glClearColor(0,0,0,1);
        glClear(GL_COLOR_BUFFER_BIT);
        //glColor3f(0.75,0.64,0.96);
        name();
        keys();
        glFlush();
}

//mouse function for key press
void mf1(int b,int s,int x,int y){
        
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=120&&x<=380)&&(y>=150&&y<=200))
        {
              plotter();
        }  
               
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&((x>=170)&&(x<=330))&&((y>=300)&&(y<=350)))
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
        glutCreateWindow("GRAPH Plotter");
        init();
        glutDisplayFunc(disp);
        glutMouseFunc(mf1);
        glutMainLoop();
        
}
