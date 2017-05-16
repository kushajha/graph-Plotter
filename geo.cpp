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
        gluOrtho2D(0,500,0,500);
        glMatrixMode(GL_MODELVIEW);
}


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

void keys()
{
        char s1[]="LINE",s2[]="CIRCLE",s3[]="ELLIPSE",s4[]="PARABOLA",s5[]="HYPERBOLA",s6[]="TURTLE";
        int i=0;
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(40,400);
        glVertex2f(150,400);
        glVertex2f(150,350);
        glVertex2f(40,350);
        glEnd();  
        
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(40,400);
        glVertex2f(150,400);
        glVertex2f(150,400);
        glVertex2f(150,350);
        glVertex2f(150,350);
        glVertex2f(40,350);
        glVertex2f(40,350);
        glVertex2f(40,400);
        glEnd();  
        
            
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(40,275);
        glVertex2f(150,275);
        glVertex2f(150,225);
        glVertex2f(40,225);
        glEnd();
        
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(40,275);
        glVertex2f(150,275);
        glVertex2f(150,275);
        glVertex2f(150,225);
        glVertex2f(150,225);
        glVertex2f(40,225);
        glVertex2f(40,225);
        glVertex2f(40,275);
        glEnd();
        
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(40,150);
        glVertex2f(150,150);
        glVertex2f(150,100);
        glVertex2f(40,100);
        glEnd();  
        
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(40,150);
        glVertex2f(150,150);
        glVertex2f(150,150);
        glVertex2f(150,100);
        glVertex2f(150,100);
        glVertex2f(40,100);
        glVertex2f(40,100);
        glVertex2f(40,150);
        glEnd();
        
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(300,400);
        glVertex2f(460,400);
        glVertex2f(460,350);
        glVertex2f(300,350);
        glEnd();  
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(300,400);
        glVertex2f(460,400);
        glVertex2f(460,400);
        glVertex2f(460,350);
        glVertex2f(460,350);
        glVertex2f(300,350);
        glVertex2f(300,350);
        glVertex2f(300,400);
        glEnd();
        
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(300,275);
        glVertex2f(460,275);
        glVertex2f(460,225);
        glVertex2f(300,225);
        glEnd();  
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(300,275);
        glVertex2f(460,275);
        glVertex2f(460,275);
        glVertex2f(460,225);
        glVertex2f(460,225);
        glVertex2f(300,225);
        glVertex2f(300,225);
        glVertex2f(300,275);
        glEnd();  
        
        glColor3f(0.8,0.8,0.8);
        glBegin(GL_POLYGON);
        glVertex2f(300,150);
        glVertex2f(460,150);
        glVertex2f(460,100);
        glVertex2f(300,100);
        glEnd();  
        glLineWidth(10);
        glColor3f(0,0.36,0.85);
        glBegin(GL_LINES);
        glVertex2f(300,150);
        glVertex2f(460,150);
        glVertex2f(460,150);
        glVertex2f(460,100);
        glVertex2f(460,100);
        glVertex2f(300,100);
        glVertex2f(300,100);
        glVertex2f(300,150);
        glEnd();      
        
       glColor3f(0,0,0);
        glRasterPos2f(67,365);                
        for(i=0;i<strlen(s1);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s1[i]);
        }
        
        glColor3f(0,0,0);
        glRasterPos2f(50,240);                
        for(i=0;i<strlen(s2);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s2[i]);
        }
        glColor3f(0,0,0);
        glRasterPos2f(50,115);                
        for(i=0;i<strlen(s3);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s3[i]);
        }
        glColor3f(0,0,0);
        glRasterPos2f(312,365);                
        for(i=0;i<strlen(s4);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s4[i]);
        }
        
        glColor3f(0,0,0);
        glRasterPos2f(310,240);                
        for(i=0;i<strlen(s5);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s5[i]);
        }
        glColor3f(0,0,0);
        glRasterPos2f(332,115);                
        for(i=0;i<strlen(s6);i++)
        {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s6[i]);
        }
}
void disp(){
        glClearColor(0,0,0,0);
        glClear(GL_COLOR_BUFFER_BIT);
        //glColor3f(0.75,0.64,0.96);
        name();
        keys();
        glFlush();
}


void mf1(int b,int s,int x,int y){
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=40&&x<=150)&&(y>=100&&y<=150))
        {
              system("python line.py");
        } 
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=40&&x<=150)&&(y>=225&&y<=275))
        {
              system("python circle.py");
        } 
       if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=40&&x<=150)&&(y>=350&&y<=400))
        {
              system("python ellipse.py");
        } 
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=300&&x<=460)&&(y>=100&&y<=150))
        {
              system("python parabola.py");
        } 
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=300&&x<=460)&&(y>=225&&y<=275))
        {
              system("python hyperbola.py");
        } 
        if((b==GLUT_LEFT_BUTTON)&&(s==GLUT_DOWN)&&(x>=300&&x<=460)&&(y>=350&&y<=400))
        {
              system("python tur.py");
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
