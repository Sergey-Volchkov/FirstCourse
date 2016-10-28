import math
from numpy import *
import matplotlib.pyplot as plt

y_values = []
x_values = []
values = []

average_arifmetic = float
m = int(0)
i = float
w = str('X=')
h = str('Y=')
x = float(input('Введите x = '))
a = float(input('Введите a = '))
x1 = float(input('Введите x1 = '))
r = float(input('Введите размер шага= '))
n = float(input(
    'Введите:N = 1 для нахождения значения переменной G. N = 2 для нахождения значения переменной F. N = 3 для нахождения значения переменной Y.'))

if n == 1:
    while x < x1:
        if 0 != (5 * a ** 2 - 9 * a * x + 4 * x ** 2):
            G = (5 * (-10 * a ** 2 + 27 * a * x + 28 * x ** 2)) / (5 * a ** 2 - 9 * a * x + 4 * x ** 2)
            print(w, end=' ')
            print(x, end=' ')
            print(h, end=' ')
            print(round(G, 3))
            x_values.append(x)
            y_values.append(G)
            if m != 3:
                i = y_values[m]
                values[m] = i
                print(values[m])
                m += 1
            else:
                average_arifmetic = (values[0]+values[1]+values[2]) / 3
                if (max(values) - average_arifmetic) >= 2 * average_arifmetic:
                    x += r/2
                else:
                    x += r
        else:
            print(
                'Функция G не может быть составлена, ибо является результатом деления на 0. Введите другие значения переменных.')
            break
    plt.plot(x_values, y_values)
    plt.show()
elif n == 2:
    while x < x1:
        F = math.sin(28 * a ** 2 - 57 * a * x + 14 * x ** 2)
        if -1 <= F <= 1:
            print(w, end=' ')
            print(x, end=' ')
            print(h, end=' ')
            print(round(F, 3))
            x_values.append(x)
            y_values.append(F)
            x += r
        else:
            print('Переменная F не принадлежит отрезку синуса от -1 до 1. Введите другие значения')
            break
    plt.plot(x_values, y_values)
    plt.show()
elif n == 3:
    while x < x1:
        if (-27 * a ** 2 + 24 * a * x + 35 * x ** 2 + 1) > 0:
            Y = math.log(-27 * a ** 2 + 24 * a * x + 35 * x ** 2 + 1)
            print(w, end=' ')
            print(x, end=' ')
            print(h, end=' ')
            print(round(Y, 3))
            x_values.append(x)
            y_values.append(Y)
            x += r
        else:
            print('Логарифм не может быть найден при таких значениях переменных. Введите другие значения переменных.')
            break
    plt.plot(x_values, y_values)
    plt.show()
else:
    print('Ошибка, попросите вывод результата одной из переменных G,F или Y.', end=' ', sep=' ')
