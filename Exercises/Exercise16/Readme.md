# Matrix Addition (2x2) — C Program

A simple C program that reads two 2x2 matrices from user input, adds them together, and displays the resulting matrix.

## Description

The program declares three 2x2 integer matrices:

- `matrix` — first matrix, initialized with default values but overwritten by user input
- `matrix2` — second matrix, initialized with default values but overwritten by user input
- `matrix3` — result matrix, computed as `matrix + matrix2`

It uses nested `for` loops to iterate over rows (`r`) and columns (`c`) for input, addition, and output.

## How It Works

1. Prompts the user to enter 4 values (row by row) for `matrix`.
2. Prompts the user to enter 4 values (row by row) for `matrix2`.
3. Adds the two matrices element-wise into `matrix3`.
4. Prints `matrix3` in a 2x2 grid format.

## Requirements

- A C compiler (e.g. GCC)
- **Note:** This program uses `conio.h`, which is a Turbo C / Borland-specific header **not available on Linux/macOS or with GCC/MinGW by default**. To compile with GCC, remove the `#include<conio.h>` line (it isn't actually used for any functionality in this program, such as `getch()`).

## Compiling and Running

### On Windows (Turbo C / Borland C)

Compile and run directly in the Turbo C IDE.

### On Linux/macOS/GCC

Remove or comment out `#include<conio.h>`, then:

```bash
gcc matrix_addition.c -o matrix_addition
./matrix_addition
```

## Example Run

```
------Enter Values for matrix 1-----
Enter the value:1
Enter the value:2
Enter the value:3
Enter the value:4

------Enter the value for matrix 2-------
Enter the value:5
Enter the value:6
Enter the value:7
Enter the value:8

----Display of the answer is-------
6	8
10	12
```

## Notes

- Matrix size is fixed at 2x2; `r` and `c` are hardcoded to loop from `0` to `1`.
- The initial values given in the `matrix` and `matrix2` declarations are irrelevant since `scanf` immediately overwrites them with user input.
- No input validation is performed — entering non-numeric input will cause undefined behavior.
