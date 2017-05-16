import matplotlib.pyplot as plt
import numpy as np
import math 

x=np.linspace(0,2*np.pi,200)
plt.title("sin(x)")
plt.plot(x,np.sin(x),color='green')
plt.show()
