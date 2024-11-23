#include <stdio.h>
#include <time.h> // For clock()

extern double circfast(double r);
extern double circsimple(double r);

#define NUM_ITERATIONS 10000000

int main() {
    double r = 3.0;
    double resultfast, resultsimple;

    // Benchmark circfast
    clock_t start_fast = clock();
    for (int i = 0; i < NUM_ITERATIONS; i++) {
        resultfast = circfast(r);
    }
    clock_t end_fast = clock();
    double time_fast = (double)(end_fast - start_fast) / CLOCKS_PER_SEC;

    // Benchmark circsimple
    clock_t start_simple = clock();
    for (int i = 0; i < NUM_ITERATIONS; i++) {
        resultsimple = circsimple(r);
    }
    clock_t end_simple = clock();
    double time_simple = (double)(end_simple - start_simple) / CLOCKS_PER_SEC;

    // Print results
    printf("The circumference of a circle with radius in circ-simple.S %f is %f\n", r, resultsimple);
    printf("The circumference of a circle with radius in circ-fast.S %f is %f\n", r, resultfast);
    printf("\nBenchmark Results:\n");
    printf("Time taken by circfast: %f seconds\n", time_fast);
    printf("Time taken by circsimple: %f seconds\n", time_simple);

    return 0;
}
