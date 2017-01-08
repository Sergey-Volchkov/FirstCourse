import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("/home/argo/Desktop/text.dat")
plt.plot(data[:,0], data[:,1],'go-')
plt.xlabel('Количество точек')
plt.ylabel('Время выполнения программы')
plt.title('Зависимость времени нахождения точек входящих в окружность от их общего количества')
plt.show()

