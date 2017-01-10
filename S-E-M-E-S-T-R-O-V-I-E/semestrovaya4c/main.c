#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int n = 3, Ai[10][10], Bi[10][10], Ci[10][10], i, j, k, m;
    float Af[10][10], Bf[10][10], Cf[10][10];
    double Ad[10][10], Bd[10][10], Cd[10][10];
    double start, end, dif_int[500], dif_double[500], dif_float[500],buf[50],buffer[50],n2[50][50], n3[50][50],n4[50][50];
    FILE *v;
    v = fopen("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya4c/text.dat", "w+");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            Ai[i][j] = rand() % 10;
            Bi[i][j] = rand() % 10;
            Af[i][j] = rand() % 10;
            Bf[i][j] = rand() % 10;
            Ad[i][j] = rand() % 10;
            Bd[i][j] = rand() % 10;
        }
    }
    for (m = 0; m < 8; ++m) {
        start = omp_get_wtime();
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                Ci[i][j] = 0;
                for (k = 0; k < n; k++) {
                    Ci[i][j] += Ai[i][k] * Bi[k][j];
                    end = omp_get_wtime();
                    buffer[j] = end - start;
                    if (n == 3)
                        n2[j][k] = buffer[j];
                    if (n == 4)
                        n3[j][k] = buffer[j];
                    if (n == 5)
                        n4[j][k] = buffer[j];
                }

            }
        }
        end = omp_get_wtime();
        dif_int[i] = end - start;
        dif_int[m] = dif_int[m] + dif_int[i];
        if (m == 0) {
            end = omp_get_wtime();
            dif_int[i] = end - start;
            dif_int[m] = dif_int[i];
        }
        start = omp_get_wtime();
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                Cf[i][j] = 0;
                for (k = 0; k < n; k++) {
                    Cf[i][j] += Af[i][k] * Bf[k][j];
                }
            }
        }
        end = omp_get_wtime();
        dif_float[i] = end - start;
        dif_float[m] = dif_float[m] + dif_float[i];
        if (m == 0) {
            end = omp_get_wtime();
            dif_float[i] = end - start;
            dif_float[m] = dif_float[i];
        }
        start = omp_get_wtime();
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                Cd[i][j] = 0;
                for (k = 0; k < n; k++) {
                    Cd[i][j] += Ad[i][k] * Bd[k][j];
                }
            }
        }
        end = omp_get_wtime();
        dif_double[i] = end - start;
        dif_double[m] = dif_double[m] + dif_double[i];
        if (m == 0) {
            end = omp_get_wtime();
            dif_double[i] = end - start;
            dif_double[m] = dif_double[i];
        }
        n += 1;
        buf[m] = dif_int[m];
    }
    for (i = 0; i < m; i++){
        fprintf(v, "%i  %.15lf %.15lf %.15lf\n", i, buf[i],  dif_float[i], dif_double[i]);}
    fclose(v);
    FILE *b;
    b = fopen("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya4c/size.dat", "w+");
    for (i = 0,n=0; i < 5; i++)
        for (j = 0; j < 3; j++,n++)
        fprintf(v, "%i  %.15lf %.15lf %.15lf\n", n, n2[i][j], n3[i][j], n4[i][j]);
    fclose(b);
    return 0;
}