import matplotlib.pyplot as plt
import numpy as np
import math

def axes():
    plt.axhline(0,alpha=1)
    plt.axvline(0,alpha=1)

a1,a2 = raw_input('Enter Center of the Ellipse: ').split()
a=float(a1)
b=float(a2)
r1=float(raw_input('Enter Major axis length of Ellipse: '))
r2=float(raw_input('Enter Minor axis length of Ellipse: '))
plt.clf()
plt.plot(a,b,'.')

x1,x2 = raw_input('Enter Minimum and Maximum limit of x for the graph: ').split()
xf1=float(x1)
xf2=float(x2)

pt = np.linspace(xf1,xf2,200)
axes()
plt.plot(a+r1*np.cos(pt),b+r2*np.sin(pt),color='red')
plt.title("Ellipse")
plt.show()


