import time
from numpy import *
import numpy as np
import matplotlib.pyplot as plt
import random
a = int(input('Введите A:'))
i = int(0)
j = int(0)
i_general = []
x_int = [500]
y_int = [500]
y_int2 = [500]
x_float = [500]
y_float = [500]
y_float2 = [500]
dif_int = []
dif_float = []
values_int = []
values_float =[]
n = 500
while i < 500:
    x_int[i:] = np.random.random_integers(0, 1000, 1)
    y_int[i:] = np.random.random_integers(0, 1000, 1)
    x_float[i:] = np.random.sample(1)
    y_float[i:] = np.random.sample(1)
    i += 1
i = 0
start = time.time()
while i <= n:
    y_int2.append(a * x_int[i:] + y_int[i:])
    if (i == 0) or (i == 100) or (i == 200) or (i == 300) or (i == 400) or (i == 500):
        end = time.time()
        i_general.append(i)
        dif_int.append(end - start)
    i += 1
i = 0
start = time.time()
while i <= n:
    y_float2.append(a * x_float[i:] + y_float[i:])
    if (i == 0) or (i == 100) or (i == 200) or (i == 300) or (i == 400) or (i == 500):
        end = time.time()
        dif_float.append(end - start)
    i+=1
print(i_general)
print(dif_int)
print(dif_float)
plt.plot(i_general, dif_int, 'go-', label='Вектор со значениями X и Y int-типа')
plt.plot(i_general, dif_float, 'b--', label='Вектор со значениями X и Y float-типа')
plt.xlabel('Длина вектора')
plt.ylabel('Время расчёта')
plt.legend()
plt.show()
