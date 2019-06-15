#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int i, A[20], n = 3, j, buf[4], k, l, m = 0, temp;
    double SMM[22];

    ;
    FILE *v;
    v = fopen("/home/argo/Desktop/For-PenzGTU/S-E-M-E-S-T-R-O-V-I-E/semestrovaya6c/text.dat", "w+");

    for (i = 0; i < 20; i++) {
        A[i] = rand() % 100;
        printf("%i\n",A[i]);
    }

    for (k = 2; k < 19; ++k) {
        if (k == 2){
            for (i = 0; i < 3; ++i) {
                buf[i] = A[i];
            }
        }
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2 - i; j++) {
                if (buf[j] > buf[j + 1]) {
                    temp = buf[j];
                    buf[j] = buf[j + 1];
                    buf[j + 1] = temp;
                }

            }
        }
        printf("%i %i %i\n", buf[0], buf[1],buf[2]);
        SMM[k] = buf[1];
        buf[0] = A[k-2];
        buf[1] = A[k-1];
        buf[2] = A[k];





    }
    for (i = 0, j = n; i < 20, j < 20; i += 1, j += 1) {
        fprintf(v, "%i %i %lf \n", i, A[i], SMM[j]);
    }

    fclose(v);

    return 0;
}
