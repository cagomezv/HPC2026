import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

data = np.loadtxt("galaxy.dat")

N = data.shape[1]//2

fig, ax = plt.subplots()
scat = ax.scatter([],[],s=1)

ax.set_xlim(-15,15)
ax.set_ylim(-15,15)

def update(frame):

    x = data[frame,0::2]
    y = data[frame,1::2]

    scat.set_offsets(np.c_[x,y])
    return scat,

ani = FuncAnimation(fig,update,frames=len(data),interval=30)

plt.show()