#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,A[20],n=3,p[20],j;
    double EMA[20],m;
    m =(n+1);
    m = 2/m;

    FILE *v;
    v = fopen("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya6c/text.dat", "w+");

    for (i = 0; i < 20; i++)
    {
        A[i] = rand()%100;
    }

    p[0]= A[0];
    for (i = 0;i < 20; i++){
        if (i - n == 0){
            for (j = i-n; j < i ; ++j) {
                if (j>=1) {
                    p[j] = A[j] + p[j - 1];
                    printf("sum = %i\n", p[j]);
                }
            }
        }
        if (i == n) {
            EMA[i] = p[j-1]/n; /*по сути находим обычную среднюю для первого значения*/
        }
        if (i > n) {
            EMA[i] = m * A[i] + (1 - m) * EMA[i - 1];

        }
        printf("%lf\n",EMA[i]);
    }

    for(i = 0,j = n;i < 20,j<20;i +=1,j+=1){
        fprintf(v, "%i %i %lf \n", i , A[i], EMA[j]);
    }

    fclose(v);

    return 0;
}
