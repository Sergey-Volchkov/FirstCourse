#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int n, tf, j, i, m;
    double G, F, Y, y, y2, size_step, *x_y_values, max_x, min_x, max_y, min_y;
    char X [255];
    char A [255];
    char R [255];
    char X1 [255];

    char mystring[255];

    int test;

    char result[255];

    scanf("%s", &mystring);

    test = atoi(mystring); /* берёт char и преобразует его в int*/

    printf("%d\n", test);

    sprintf(result, "%d", test); /* по идеи берёт число из тест и кладёт её в результ в форме строки*/

    printf("%s\n", result);

    return 0;

}