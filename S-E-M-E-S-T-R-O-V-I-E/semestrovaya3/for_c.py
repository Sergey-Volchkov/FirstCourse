import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("/home/argo/ClionProjects/semestrovaya3/text.dat")
plt.plot(data[:,0], data[:,1],'go-', label='Вектор со значениями X и Y int-типа')
plt.plot(data[:,0], data[:,2],'bo--', label='Вектор со значениями X и Y float-типа')
plt.plot(data[:,0], data[:,3],'ro:', label='Вектор со значениями X и Y double-типа')
plt.xlabel('Длина вектора (количество ячеек в массиве)')
plt.ylabel('Время расчёта (сек)')
plt.legend()
plt.title('Зависимость времени вычисления векторов с различными типами данных от их длины')
plt.show()

