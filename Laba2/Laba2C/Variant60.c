#include <stdio.h>
#include <math.h>
int main()
{
     int n;
     double G, F, Y, x, a;
    printf("%s","Введите X = ");
     scanf("%lf", &x);
    printf("%s","Введите A = ");
     scanf("%lf", &a);
    printf("%s","Введите: \n N = 1 для нахождения значения переменной G. \n N = 2 для нахождения значения переменной F. \n N = 3 для нахождения значения переменной Y. \n");
     scanf("%i", &n);
    /* При вводе переменной, будет выполняться нахождение значения для этой переменной. */
    switch (n){
        /* Мы вводим G и находим число, которое будет рассчитано при выполнение операции присвоенной для переменной G. */
        case 1:if ((G >= 0) || (G <= 0)){ /* G выводится числом если оно является дейстительным числом */
            G=(5*(-10*pow(a,2)+27*a*x+28*pow(x,2)))/(5*pow(a,2)-9*a*x+4*pow(x,4));
                printf("%.3f\n", G);} /* Если G действительное число, тогда выводим его. Если оно не действительное, значит при вычеслении призошло деление на 0. Тогда выводим else */
            else printf("%s\n","G не может быть результатом деления на 0. Введите другие значения переменных.");
            break;
        case 2:F=sin(28*pow(a,2)-57*a*x+14*pow(x,2));
                printf("%.3f\n", F);
            break;
        case 3:if (log(-27*pow(a,2)+24*a*x+35*pow(x,2)+1) > 0){ /* Переменная Y выводит значение логарифма, которое не может быть отрицательным или равно 0. */
                Y=log(-27*pow(a,2)+24*a*x+35*pow(x,2)+1);
                printf("%.3f\n", Y);}
            else printf("%s\n","Логарифм не может быть найден при таких значениях переменных. Введите другие значения переменных.");
            break;
        default: printf("%s\n", "Ошибка, попросите вывод результата одной из переменных G,F или Y.");


    }

    return 0;
}