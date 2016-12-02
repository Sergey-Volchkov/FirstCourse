#include<stdio.h>

void main() {
    const double eps = 0.000001;
    double sqrt = 0, n, root = 0;
    printf("Введите число, корень которого хотите найти:\n");
    scanf("%lf", &n);
    int i = 0;
    while (sqrt < n) {
        root += eps;
        sqrt = root * root;
        i +=1;
    }

    printf("Квадрат числа равен:\n%.5lf Кольво шагов:%i", root, i);

}
