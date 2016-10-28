#include <stdio.h>
int main(void)
{
    float x,a;
    scanf("%f", &x); scanf("%f", &a);
    do
    {
        printf("%f %f\n", x, a);
        x =x + 0.5; /* Дополнительное задание в листинге: сделать бесконечный цикл при верности условия */
    }
    while (x > a);
    return 0;
}
