import matplotlib.pyplot as plt
import numpy as np
import math



def axes():
    plt.axhline(0,alpha=1)
    plt.axvline(0,alpha=1)

x = int(raw_input('Press 0 for X-centric Hyperbola\nPress 1 for Y-centric Hyperbola\n'))
x1,x2=raw_input('enter maximum and minimum limit of graph: ').split()
xf1=float(x1)
xf2=float(x2)

pntx=np.linspace(xf1,xf2,1000)
pnty=np.linspace(xf1,xf2,1000)
pntx,pnty=np.meshgrid(pntx,pnty)
if x==0:
    print('Equation is of the form (x^2/a^2)-(y^2/b^2)=1\n')
    a=float(raw_input('Enter denominator of x^2: '))
    b=float(raw_input('Enter denominator of y^2: '))
    

    
    plt.clf()
    axes()
    plt.contour(pntx,pnty,((pntx**2)/a-(pnty**2)/b-1),[0],colors='r')
    plt.show()
elif x==1:
    print('Equation is of the form (y^2/b^2)-(x^2/a^2)=1\n')
    a=float(raw_input('Enter denominator of x^2: '))
    b=float(raw_input('Enter denominator of y^2: '))
    plt.clf()
    axes()
    
    plt.contour(pntx,pnty,((pnty**2)/b-(pntx**2)/a-1),[0],colors='g')
    plt.show()
