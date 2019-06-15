#include <stdio.h>

struct test {

    double x;
    double y;
    double z;

};

typedef struct test test;

test foo(double x)
{
    test temp;

    if (x >10)
        x /=2;
    else
        x *=2;

    temp.x =x;
    temp.y =10;
    temp.z =20;
    return temp;
}

int main () {

    double x = 11.0;
    test result;
    result = foo(x, 1, 2);
    printf("x=%lf y=%lf z=%lf\n", result.x, result.y, result.z);
    return 0;
}


/*
#include <stdio.h>
double foo(double x)
{
    if (x >10)
        x /=2;
    else
        x *=2;
    return x;
}

int main (){

    double x = 11.0;
    x= foo(x);
    printf("%lf\n", x);
    return 0;
}*/