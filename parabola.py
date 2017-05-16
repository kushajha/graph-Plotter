import matplotlib.pyplot as plt
import numpy as np
import math

x = int(raw_input('Press 0 for second degree in x\nPress 1 for second degree in y\n'))
def axes():
    plt.axhline(0,alpha=1)
    plt.axvline(0,alpha=1)

x1,x2=raw_input('Enter maximum and minimum limit of the graph: ').split()
xf1=float(x1)
xf2=float(x2)
pntx=np.linspace(xf1,xf2,1000)
pnty=np.linspace(xf1,xf2,1000)
pntx,pnty=np.meshgrid(pntx,pnty)

if x==0:
    print('Equation is of the form y=ax^2+bx+c \n')
    a=float(raw_input('Enter coefficient of x^2: '))
    b=float(raw_input('Enter coefficient of x: '))
    c=float(raw_input('Enter constant: '))

    plt.clf()
    axes()
    
    plt.contour(pntx,pnty,((a*pntx**2)+b*pntx+c-pnty),[0],colors='g')
    plt.show()
elif x==1:
    print('Equation is of the form x=ay^2+by+c \n')
    a=float(raw_input('Enter coefficient of y^2: '))
    b=float(raw_input('Enter coefficient of y: '))
    c=float(raw_input('Enter constant: '))
 
    plt.clf()
    axes()
    plt.contour(pntx,pnty,((a*pnty**2)+b*pnty+c-pntx),[0],colors='g')
    plt.show()
