// Code for Matrix * Matrix Product

#include <stdio.h>
#include <stdlib.h>
#include<tgmath.h>

void actualmath(double *A, double *v, int m, int n1); // Does the Calculation
void dmprint(double *A, int m, int n); // Prints

int main(void) {
    int m, n; //matrix dimensions for Matrix
    int m1, n1=1; //matrix dimensions for vector
    double *A = calloc(m*n, sizeof(double));
    double *v = calloc(m1*n1, sizeof(double));

    printf("Choose Dimensions of Matrix (A) (mxn): ");
    scanf("%i %i", &m, &n);
    printf("m = %i, n = %i\n", m, n);
// The scanf skips the print function below
    printf("Choose Dimensions of Vector (v) (m): ");
    scanf("%d", &m1);
    printf("\nm1 = %i, n1 = %i\n", m1, n1);

    if (n != m1) {
        printf("Vector and Matrix Dimensions are incompatible for Matrix-Vector Product.\n");
        return(0);
    }

    for (int i = 0; i < m; i++) { // Assigns Elements for Matrix A by Prompting User
        for (int j = 0; j < n; j++) {
            printf("Choose your %d, %d element for Matrix A: ", i, j);
            scanf("%lf", &A[i+j*m]);
        }
    }

    for (int i1 = 0; i1 < m1; i1++) { // Assigns Elements for Vector by Prompting User
        for (int j1 = 0; j1<n1; j1++) {
            printf("Choose your %d element for Vector v: ", i1+j1*m1);
            scanf("%lf", &v[i1+j1*m1]);
        }
    }
    actualmath(A, v, m, n1);

}

void actualmath(double *A, double *v, int m, int n1) {
    double *y = calloc(m*n1, sizeof(double));

    for (int i = 0; i<m; i++) {
        for (int j=0; j<2; j++) {
            y[i+j*m] += A[i + j*m] * v[j + i*m];
        }
    }

    dmprint(y, m, n1);
    free(y);
}


void dmprint(double *A, int m, int n1) {
    for (int i = 0; i < m; i++) { //iterates over the column
        for (int j = 0; j < n1; j++) { // iterates over the rows
            printf("%16.4lf      ", A[i + j*m]);
        }
        printf("\n");
    }
}// grheier@ucdavis.edu