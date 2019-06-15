import math

x = int(input('Введите x='))
a = int(input('Введите a='))
Y = (5*(-10*a**2+27*a*x+28*x**2))/(5*a**2-9*a*x+4*x**2)
F = math.sin(28*a**2-57*a*x+14*x**2)
G = math.log(-27*a**2+24*a*x+35*x**2+1)
print(Y)
print(F)
print(G)