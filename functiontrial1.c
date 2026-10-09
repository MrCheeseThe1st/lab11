#include<stdio.h>
#include<stdlib.h>
#include<tgmath.h>

void supacoolfunction(double y); //stores supacoolfunction to be called on later,
                                // and it can store a double type variable

int main(void) {
    double input = 2.2;

    supacoolfunction(input);
}

// defining the function
void supacoolfunction(double x) {
    double output = x +67.0;

    printf("%0.5lf\n", output);
}