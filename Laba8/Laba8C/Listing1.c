#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float fadd(float x)
{
    float sqrt = x * x;
    return sqrt;
}


int main(void)
{
    float x;
    scanf("%f",&x );

    float m_sqrt;


    m_sqrt = fadd(x);


    printf("%lf\n", m_sqrt);


    return 0;
}
