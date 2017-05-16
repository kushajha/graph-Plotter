import matplotlib.pyplot as plt
import numpy as np
import math

def axes():
    plt.axhline(0,alpha=1)
    plt.axvline(0,alpha=1)
print("\nEquation is of the form (x-a)^2+(y-b)^2=r^2")
a1,a2 = raw_input('Enter Center of the Circle: ').split()
a=float(a1)
b=float(a2)
r=float(raw_input('Enter Radius of the Circle: '))
plt.clf()
plt.plot(a,b,'.')

x1,x2 = raw_input('Enter Minimum and Maximum limit of x for the graph: ').split()
xf1=float(x1)
xf2=float(x2)

pntx = np.linspace(xf1,xf2,200)

axes()
plt.plot(a+r*np.cos(pntx),b+r*np.sin(pntx))
plt.title("Circle")
plt.show()


