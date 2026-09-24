# 3x3 Matrix Addition (C)

A console program that reads two 3x3 matrices from the user, adds them
element-wise, and prints the resulting matrix.

## How It Works

- Reads the first 3x3 matrix row by row via nested loops and `scanf`.
- Reads the second 3x3 matrix the same way.
- Adds the two matrices element-wise into a `total` matrix.
- Prints `total`, one row per line.

## Build & Run

```bash
gcc matrix.c -o matrix
./matrix
```

## Notes

- Matrix size is fixed at 3x3 (hardcoded loop bounds), not configurable.
- No input validation on the scanned values.
