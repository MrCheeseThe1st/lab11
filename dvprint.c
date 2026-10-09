#include<stdio.h>
#include<stdlib.h>
#include<tgmath.h>

//d(ouble)v(ector) print code

void anothercoolfunction(double *v, int m);

int main(void) {
    double *v = calloc(3, sizeof(double));
    v[0] = 1.0; v[1] = 2.0; v[2] = 3.0;

    anothercoolfunction(v, 3);


    free(v);
    return(0);
}

void anothercoolfunction(double *v, int m) {
    for (int i = 0; i<m; i++) {
        printf("%0.4lf\n", v[i]);
    }
}
