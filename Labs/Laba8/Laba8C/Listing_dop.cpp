#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

float fadd(float arg)
{
    float y = 2*sin(3*arg) + 3*cos(2*arg);
    return y;
}


int main(void)
{
    float arg;
    scanf("%f",&arg );

    float y;


    y = fadd(arg);


    printf("%lf\n", y);


    return 0;
}
