#include <stdio.h>
#include <math.h>
int main()
{
    float G, F, Y, x, a;
    const double pi=3.14;
    scanf("%f", &x);
    scanf("%f", &a);


    G=(5*(-10*pow(a,2)+27*a*x+28*pow(x,2)))/(5*pow(a,2)-9*a*x+4*pow(x,4));
    F=sin(28*pow(a,2)-57*a*x+14*pow(x,2));
    Y=log(-27*pow(a,2)+24*a*x+35*pow(x,2)+1);

    printf("%1.3f\n", G);
    printf("%1.3f\n", F);
    printf("%1.3f\n", Y);


    return 0;
}