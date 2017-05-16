from turtle import *
import turtle
from random import randint

y=int(raw_input('Press 1 for 1st Pattern\nPress 2 for 2nd Pattern\n>> '))

bgcolor('black')

if y==1:
	
	
	speed(0)
	x = 0
	up()
	rt(45)
	fd(90)
	rt(135)
	down()
	while x<120:
	    r=randint(0,255)
	    g=randint(0,255)
	    b=randint(0,255)
            colormode(255)
	    pencolor(r,g,b)
	    fd(200)
	    rt(61)
	    fd(200)
	    rt(61)
	    fd(200)
	    rt(61)
	    fd(200)
	    rt(61)
	    fd(200)
	    rt(61)
	    fd(200)
	    rt(61)
	    rt(11.1111)
	    x=x+1
if y==2:
	x=1
	speed(20)
	while x<400:
	        r=randint(0,255)
	        g=randint(0,255)
	        b=randint(0,255)
	        colormode(255)
	        pencolor(r,g,b)
	        fd(50+x)
	        rt(90.911)
	        x=x+1
	        
           
        
exitonclick()
