import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya6c/text.dat")
plt.plot(data[:,0], data[:,1],'go-', label='Обычные значения')
plt.plot(data[:,0], data[:,2],'bo--', label='Значения с обработкой медианным фильтром')
plt.xlabel('Количество точек')
plt.ylabel('Значения')
plt.legend()
plt.title('Различие между обычным графиком и графиком с медианным фильтром')
plt.show()

