# University of Kigali Student Transcript (C)

A console program that collects a student's department, year of study,
registration number, and name, then takes marks for four subjects
(Programming in C, Introduction to ICT, General English, Mathematics) and
prints a formatted transcript with total and average marks.

**Note:** This entire program is commented out in the source file (every
line is prefixed with `//`), so as written it compiles to an empty `main`
and produces no output.

## How It Works

- Reads department (`%s`), year of study, registration number, and name
  (`gets`) via `scanf`/`gets`.
- Prompts for marks in four subjects.
- Computes `TotalMarks` (sum of the four subjects) and `Average`
  (`TotalMarks / 4.0`).
- Prints a formatted transcript header followed by the totals.

## Build & Run

Uncomment the code block before compiling:

```bash
gcc transcript.c -o transcript
./transcript
```

## Notes

- Uses `gets()`, which is unsafe (no bounds checking) and removed from
  modern C standards — replace with `fgets()` if reviving this code.
- `department` and `studentName` are declared as `char[10]`, which is easy
  to overflow with longer input.
