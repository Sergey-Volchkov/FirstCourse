#include <stdio.h>
#include <stdlib.h>


int main() {
    int A[3][3], B[3][3], C[3][3], i, j, k,n=3;

    for (i = 0; i < 3; i++)  /*заполнение матриц-исходников*/
    {
        for (j = 0; j < 3; j++)
        {
            A[i][j] = rand()%10;
            B[i][j] = rand()%10;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    printf("%s\n","-----");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i ", B[i][j]);
        }
        printf("\n");}
    printf("%s\n","-----");

    for(i = 0; i < n; i++)
        for(j = 0; j <n; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
                if (k == 2)
                    printf("C[%i][%i]=%i\n", i+1,j+1,C[i][j]);
        }
        }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}