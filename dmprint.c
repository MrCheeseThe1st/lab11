#include<stdio.h>
#include<stdlib.h>
#include<tgmath.h>

//d(ouble)m(atrix) print code

void dmprint(double *A, int m, int n);

int main(void) {
    int m=2, n=3;
    double *Matrix_A = calloc(m*n, sizeof(double));

    Matrix_A[0] = 1.0; Matrix_A[1] = 4.5; Matrix_A[2] = 2.0; Matrix_A[3] = 6.78; Matrix_A[4] = 3.0; Matrix_A[5] = 9.102;


    dmprint(Matrix_A, m, n);
}

void dmprint(double *A, int m, int n) {
    for (int i = 0; i < m; i++) { //iterates over the column
        for (int j = 0; j < n; j++) { // iterates over the rows
            printf("%2.4lf      ", A[i + j*m]);
        }
        printf("\n");
    }
}
