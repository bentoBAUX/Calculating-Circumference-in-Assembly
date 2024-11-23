#include <stdio.h>

extern double circ(double r);

int main() {
    double r = 3.0;
    double result = circ(r);
    printf("The circumference of a circle with radius %f is %f\n", r, result);
    return 0;
}