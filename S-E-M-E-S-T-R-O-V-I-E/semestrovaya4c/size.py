import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya4c/size.dat")
plt.plot(data[:,0], data[:,1],'go-', label='Матрица 3x3')
plt.plot(data[:,0], data[:,2],'bo--', label='Матрица 4x4')
plt.plot(data[:,0], data[:,3],'ro:', label='Матрица 5х5')
plt.xlabel('Количество просчитанных элементов')
plt.ylabel('Время')
plt.legend()
plt.title('Зависимость времени вычисления от размерности')
plt.show()

