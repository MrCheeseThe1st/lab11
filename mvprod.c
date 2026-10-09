// Code for Matrix * Vector Product

#include <stdio.h>
#include <stdlib.h>
#include<tgmath.h>

void actualmath(double *A, double *v, int m, int n1); // Does the Calculation
void dmprint(double *A, int m, int n); // Prints

int main(void) {
    int m, n; //matrix dimensions for Matrix
    int m1, n1=1; //matrix dimensions for vector

    printf("Choose Dimensions of Matrix (A) (mxn): ");
    scanf("%i %i", &m, &n);
    printf("m = %i, n = %i\n", m, n);

    printf("Choose Dimensions of Vector (v) (m): ");
    scanf("%d", &m1);
    printf("\nm1 = %i, n1 = %i\n", m1, n1);

    double *A = calloc(m*n, sizeof(double));
    double *v = calloc(m1*n1, sizeof(double));

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

    for (int i = 0; i < m1; i++) { // Assigns Elements for Vector by Prompting User
        for (int j = 0; j<n1; j++) {
            printf("Choose your %d element for Vector v: ", i+j*m1);
            scanf("%lf", &v[i+j*m1]);
        }
    }
    actualmath(A, v, m, n1);

}

void actualmath(double *A, double *v, int m, int m1) {
    double *y = calloc(m, sizeof(double));

    for (int i = 0; i<m; i++) {
        for (int j=0; j<m1; j++) {
            y[i] += A[i + j*m] * v[j]; // y = sum( A(ij)* v(j) )
            printf("%g\n", y[i]);
        }
    }

    dmprint(y, m, 1);
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