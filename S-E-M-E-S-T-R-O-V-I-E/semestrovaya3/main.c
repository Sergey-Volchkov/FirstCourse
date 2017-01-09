#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main() {
    int i,n = 5000, y_int[5000], x_int[5000], a,j;
    float y_float[5000], x_float[5000];
    double start, end, dif_int[5000],dif_double[5000],dif_float[5000],y_double[5000], x_double[5000];
    scanf("%i", &a);
    FILE *v;
    v = fopen("/home/argo/ClionProjects/semestrovaya3/text.dat", "w+");
    for (i = 0; i<5000; i++)
    {   x_int[i] = rand();
        y_int[i] = rand();
        x_float[i] = rand();
        y_float[i] = rand();
        x_double[i] = rand();
        y_double[i] = rand();
    }
    for (j = 0; j <4; ++j) {
        start = omp_get_wtime();
        for (i = 0; i < n; ++i) {
            y_int[i] = a * x_int[i] + y_int[i];

            if ((i == 1000) || (i == 2000) || (i == 3000) || (i == 4000) || (i == 5000)) {
                end = omp_get_wtime();
                dif_int[i] = end - start;
                dif_int[j] = dif_int[j] + dif_int[i];
            }
            if (i == 0){
                end = omp_get_wtime();
                dif_int[i] = end - start;
                dif_int[j] = dif_int[i];
            }
        }

        start = omp_get_wtime();
        for (i = 0; i < n; ++i) {
            y_float[i] = a * x_float[i] + y_float[i];

            if ((i == 1000) || (i == 2000) || (i == 3000) || (i == 4000) || (i == 5000)) {
                end = omp_get_wtime();
                dif_float[i] = end - start;
                dif_float[j] = dif_float[j] + dif_float[i];
            }
            if (i == 0){
                end = omp_get_wtime();
                dif_float[i] = end - start;
                dif_float[j] = dif_float[i];
            }
        }
        start = omp_get_wtime();
        for (i = 0; i < n; ++i) {
            y_double[i] = a * x_double[i] + y_double[i];
            if ((i == 1000) || (i == 2000) || (i == 3000) || (i == 4000) || (i == 5000)) {
                end = omp_get_wtime();
                dif_double[j] = dif_double[j] + dif_double[i];
                dif_double[i] = end - start;
            }
            if (i == 0){
                end = omp_get_wtime();
                dif_double[i] = end - start;
                dif_double[j] = dif_double[i];
            }
        }
        dif_int[j] = (dif_int[j] / 4);
        dif_float[j] = (dif_float[j] / 4);
        dif_double[j] = (dif_double[j] / 4);
    }


    for(i =0;i<n;i+=1000)
        fprintf(v, "%i  %.20lf %.20lf %.20lf\n", i , dif_int[i], dif_float[i], dif_double[i]);
    fclose(v);
    return 0;
}
