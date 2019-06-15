#include <math.h>
#include <stdio.h>
#include <string.h>
int main (void)
{

    char str1 [15]="12311634532";

    char str2 [10]="34";

    char *istr;

    double d;

    istr = strstr (str1,str2);


    if ( istr == NULL)
        printf ("Строка не найдена\n");
    else {
        d = strlen(str2);
        printf("%d\n", istr - str1 + 1);
        printf("%.0lf", d);
    }
    return 0;
}