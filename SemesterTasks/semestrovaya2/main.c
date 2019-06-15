#include <stdio.h>

int main() {
    double a,b,x,x1,x2,function1,function2,accuraty;

    printf("%s", "Введите начальную границу:");
    scanf("%lf", &a);
    printf("%s", "Введите конечную границу:");
    scanf("%lf", &b);
    printf("%s", "Введите точность для нахождения точки минимума:");
    scanf("%lf", &accuraty);
    while (((b-a) > accuraty) || (-1*(b-a) > accuraty)){
        x=(a+b)/2;
        x1 = (x - accuraty);
        function1 = x1*2*x1*4;
        x2 = (x + accuraty);
        function2 = x2*2+x2*4;
            if (function1 < function2)
                b=x;
            else
                a=x;
    }
    printf("Точка минимума лежит в границе от : %lf \n", a);
    printf("До: %lf \n", b);
    return 0;
}