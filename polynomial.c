#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>

int main(void) {
    int m = 4, n = 3;
    double *A = calloc(m*n,sizeof(double)); // A is an m*n-long matrix
    double *x = calloc(m, sizeof(double));  // x is an m-long vector
    double *y = calloc(n, sizeof(double)); // y is an n-long vector

    for (int i = 0; i < m; i++) { //fill up x with entries
        x[i] = 2.0 * i;
    }
    for (int i = 0; i < n;i++) { //fill up y with entries
        y[i] = 3.0 * i * 1.0;
    }


    for (int j = 0; j < n; j++) 
    { // compute A = x * y**T
        for (int i = 0; i < m; i++) 
        {
            A[i + m*j] = x[i] * y[j];
        }
    }

    return(0);
}