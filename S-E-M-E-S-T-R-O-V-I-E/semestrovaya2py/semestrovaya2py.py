a = float(input('Введите начальную границу:'))
b = float(input('Введите конечную границу:'))
accuraty = float(input('Введите точность для нахождения точки минимума:'))

while ((b-a) > accuraty) or (-1*(b-a) > accuraty):
    x = (a+b)/2
    x1 = (x - accuraty)
    function1 = x1*2*x1*4
    x2 = (x + accuraty)
    function2 = x2*2+x2*4
    if function1 < function2:
        b = x
    else:
        a = x
print('Результат:' + str(a))
print('Результат:' + str(b))

