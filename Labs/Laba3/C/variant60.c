#include <stdio.h>
#include <math.h>

int main() {
    int n, tf, j;
    double G, F, Y, x, a, x1, r, y_values[2], y, y2;
    y = 0;
    j = 0;
    y2 = 0;
    tf = 1;
    do {
        if (tf == 1) {
            printf("%s", "Введите начальную границу X = ");
            scanf("%lf", &x);
            printf("%s", "Введите A = ");
            scanf("%lf", &a);
            printf("%s", "Введите конечную границу Х1 = ");
            scanf("%lf", &x1);
            printf("%s", "Введите размер шага= ");
            scanf("%lf", &r);
            printf("%s",
                   "Введите: \n N = 1 для нахождения значения переменной G. \n N = 2 для нахождения значения переменной F. \n N = 3 для нахождения значения переменной Y. \n");
            scanf("%i", &n);
            FILE *v;
            v = fopen("/home/argo/Desktop/For-PenzGTU/Laba3/Laba3C/text.dat", "w+");
            switch (n) {
                case 1:
                    while (x <= x1) {
                        if ((5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2)) != 0) {
                            G= (5 * ( -10 * pow(a, 2) + 27 * a * x + 28 * pow(x, 2))) /
                                (5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2));

                            fprintf(v, "%.3lf %.3lf\n",x,G); /* Выводим данные в файл text.*/

                            if (j ==0) { /* Для первого "круга" работы цикла даём значение первому из двух индексов массива y_values (это значение "y") */
                                y_values[1] = G;
                                printf("X=%.3lf Y=%.3lf\n", x, G);
                            }
                            if (j >= 1) {
                                /* Для последующих "кругов" работы цикла мы присваем значение "y" только второму индексу массива. Почему? потому что в конце выполнения цикла я приравниваю y_values[1] к y_values[2] */
                                y_values[2] = G;
                                printf("X=%.3lf Y=%.3lf\n", x, G);
                            }
                            if (j == 1)
                                /* Когда нам известны значения y_values[1] и [2] то можем найти среднее арифметическое между ними. Переменную 'y' нахожу только один раз, далее я буду присваивать ей значение y2 после выполнения операций */
                                y = (y_values[1] + y_values[2]) / 2;
                            else if (j > 1){
                                /* находим второе среднее арифметическое для того чтобы сравнить первое и второе и сделать вывод как сильно изменяется функция. далее напишу для чего это */
                                y2 = (y_values[1] + y_values[2]) / 2;}
                            if ((fabs(y) > 1.2 * fabs(y2)) && (j > 1) && (y2 != 0)) {
                                /* сравниваем, если модуль первого среднего арифметического, чем модуль второго умноженный на 1.2 (это просто коэфициент), то увеличиваем шаг */
                                x +=(r / 2);
                                y = y2;
                            } else {
                                if ((fabs(y) < 1.2 * fabs(y2)) && (j > 1) && (y2 != 0)) {
                                    /* опять же сравниваем, если модуль первого среднего арифметического меньше чем 1.2 * модуль второго, то шаг уменьшаем */
                                    x +=(r * 2);
                                    y = y2;
                                } else x += r;/* если предыдущие условия не верны, то просто прибавляем шаг и считаем дальше */

                                if (j > 1) {
                                    y = y2;
                                }
                            }

                            if (j >= 1) {
                                y_values[1] = y_values[2];
                            }
                            j += 1;
                            printf("Количество шагов:%i\n", j);
                            continue;
                        } else
                            printf("%s\n",
                                   "G не может быть результатом деления на 0. Введите другие значения переменных.");
                        break;
                    }
                    break;
                case 2:
                    while (x <= x1) {
                        F = sin(28 * pow(a, 2) - 57 * a * x + 14 * pow(x, 2));

                        fprintf(v, "%.3lf %.3lf\n", x, F);

                        if (j == 0) {
                            y_values[1] = F;
                            printf("X=%.3lf Y=%.3lf\n", x, F);
                        }
                        if (j >= 1) {
                            y_values[2] = F;
                            printf("X=%.3lf Y=%.3lf\n", x, F);
                        }
                        if (j == 1)
                            y = (y_values[1] + y_values[2]) / 2;
                        else if (j > 1)
                            y2 = (y_values[1] + y_values[2]) / 2;
                        if ((fabs(y) > 1.2 * fabs(y2)) && (j > 1) && (y2 != 0)) {
                            x += r * 2;
                            y = y2;
                        } else {
                            if ((fabs(y) < 1.2 * fabs(y2)) && (j > 1) && (y2 != 0)) {
                                x += r / 2;
                                y = y2;
                            } else x += r;
                            if (j > 1) {
                                y = y2;
                            }
                        }
                        j += 1;
                        printf("Количество шагов:%i\n", j);
                        continue;

                        break;
                    }
                    break;
                case 3:
                    while (x <= x1) {
                        Y = log(-27 * pow(a, 2) + 24 * a * x + 35 * pow(x, 2) + 1);
                        if (log(-27 * pow(a, 2) + 24 * a * x + 35 * pow(x, 2) + 1) > 0) {
                            fprintf(v, "%.3lf %.3lf\n", x, Y);

                            if (j == 0) {
                                y_values[1] = Y;
                                printf("X=%.3lf Y=%.3lf\n", x, Y);
                            }
                            if (j >= 1) {
                                y_values[2] = Y;
                                printf("X=%.3lf Y=%.3lf\n", x, Y);
                            }
                            if (j == 1)
                                y = (y_values[1] + y_values[2]) / 2;
                            else if (j > 1)
                                y2 = (y_values[1] + y_values[2]) / 2;
                            if ((fabs(y) > 1.2 * fabs(y2)) && (j > 1) && (y2 != 0)) {
                                x += r * 2;
                                y = y2;
                            } else {
                                if ((fabs(y) < 1.2 * fabs(y2)) && (j > 1) && (y2 != 0)) {
                                    x += r / 2;
                                    y = y2;
                                } else x += r;
                                if (j > 1) {
                                    y = y2;
                                }
                            }
                            j += 1;
                            printf("Количество шагов:%i\n", j);
                            continue;
                        } else
                            printf("%s\n",
                                   "Логарифм не может быть найден при таких значениях переменных. Введите другие значения переменных.");
                        break;
                    }
                    break;

                default:
                    printf("%s\n", "Ошибка, попросите вывод результата одной из переменных G,F или Y.");

            }
        }


        printf("%s",
               "Хотите ли ещё раз просчитать функцию? \n Введите 1 если хотите просчитать заново. \n Введите 0 для отмены.");
        scanf("%i", &tf);

        if (tf == 0) break;
        else continue;
    } while (1);


    return 0;
}
