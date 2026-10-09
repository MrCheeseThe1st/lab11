#include <tgmath.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int m = 4, n = 3;

    // v is an m-long vector
    // A is an m * n long vector

    double * v = calloc(m,sizeof(double));
    double * A = calloc(m*n,sizeof(double));

    int i = 1, j =2;

    // access entry i of v
    v[i] = 67.0;
    printf("v[%d] = %0.2lf\n", i, v[i]);

    // access entry i, j of A
    A[i + m*j] = 3.0;

    // stop abusing C, and deallocate memory
    free(v); free(A);




}