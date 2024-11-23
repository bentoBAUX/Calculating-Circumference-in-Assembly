# Calculating Circumference in Assembly

This repository serves as a simple introduction to working with SSE registers for floating-point operations. It includes two solutions for calculating the circumference of a circle, serving as a warm-up exercise in assembly programming.


## Overview

### Solutions Provided
1. [**circ-simple.S**](https://github.com/bentoBAUX/Calculating-Circumference-in-Assembly/blob/master/src/circ-simple.S): A straightforward implementation.
2. [**circ-fast.S**](https://github.com/bentoBAUX/Calculating-Circumference-in-Assembly/blob/master/src/circ-fast.S): An optimised version that scored higher in my university's testing program.

**Note**: While *circ-fast* performed better in the testing program, local benchmarks with `-O3` optimisation show *circ-simple* is actually faster.


## Usage

To run the code, use the following commands:

```bash
# Compile circ-simple.S circ-fast.S and circ.c
gcc -O3 -o main circ-simple circ-simple.S

# Run the binaries
./main
```
## Benchmark Results
The benchmark is conducted five times, and the average of the results for each function is calculated.
| Method       | Time Taken   | Cycles Taken
|--------------|--------------|--------------|
| **circ-fast**  | 0.0045174s   | 13,181,039.2    |
| **circ-simple** | 0.0030568s   | 8,919,960.4    |
