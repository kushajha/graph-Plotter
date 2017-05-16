import matplotlib.pyplot as plt
import numpy as np
import math

def axes():
    plt.axhline(0,alpha=1)
    plt.axvline(0,alpha=1)
print('\nEquation is of the form y=mx+c\n')
a=float(raw_input("Enter the coefficient of x (m): "))
c=float(raw_input("Enter the constant c: "))
x1,x2 = raw_input('Enter minimum and maximum limit of x for the graph: ').split()
xf1=float(x1)
xf2=float(x2)
plt.clf()
axes()
pt = np.linspace(xf1,xf2,200)
plt.plot(pt,a*pt+c,color='red')
plt.title("lines")
plt.show()


