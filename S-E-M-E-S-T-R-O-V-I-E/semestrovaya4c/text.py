import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya4c/text.dat")
plt.plot(data[:,0], data[:,1],'go-', label='Матрица с данными типа int')
plt.plot(data[:,0], data[:,2],'bo--', label='Матрица с данными типа float')
plt.plot(data[:,0], data[:,3],'ro:', label='Матрица с данными типа double')
plt.xlabel('Количество итераций')
plt.ylabel('Время')
plt.legend()
plt.title('Зависимость времени вычисления матриц с различными типами данных от количества итераций')
plt.show()

