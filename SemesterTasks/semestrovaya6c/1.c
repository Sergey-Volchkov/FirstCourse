#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int i,A[20],j,p[20], n;
    double SMA[20];
    n = 3;
    FILE *v;
    v = fopen("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya6c/text.dat", "w+");

    for (i = 0; i < 20; i++)
    {
        A[i] = rand()%100;
    }
    p[0]= A[0];
    for (i = 0;i < 20; i++){
        for (j = i-n; j < i ; ++j) {
            if (j>=0) {
                p[j] = A[j] + p[j - 1];
            }
        }
        if (i >= n) {
            SMA[i] = p[i-1]/n;
            printf("%lf\n", SMA[i]);
        }
        memset(p,0,100);

    }

    for(i = 0,j = n;i < 20,j<20;i+=1,j+=1){
        fprintf(v, "%i %i %lf \n", i , A[i], SMA[j]);
    }

    fclose(v);

    return 0;
}
