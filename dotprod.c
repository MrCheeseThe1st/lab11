#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void) {
    int m = 3, n = 1;
    double *x = calloc(m*n, sizeof(double));
    double *y = calloc(m*n, sizeof(double));
    double sum = 0.0;

    x[0] = 1.2; x[1] = -1.6; x[2] = 3.0;
    y[0] = 0.2; y[1] = 2.2; y[2] = 0.8;

    for (int j = 0; j < m*n; j++) {
        sum = sum + x[j]*y[j];
    }

    printf("The dot product of x and y is %0.4lf", sum);
}