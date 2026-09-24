# Day Number to Dates (C)

A small console program that takes a day number (1–7) and prints the dates
of the month that fall on that weekday, plus whether it's a weekday or
weekend.

## How It Works

- Prompts for `DayNumber` via `scanf`.
- A `switch` statement (cases 1–7, Monday–Sunday) prints the matching dates
  and labels days 1–5 as normal days, and days 6–7 (Sat/Sun) as weekends.

## Build & Run

```bash
gcc day.c -o day
./day
```

## Notes

- No `default` case — an input outside 1–7 produces no output.
- `getch()` requires `conio.h` (Windows/Turbo C); on Linux/macOS, remove it
  or swap in `getchar()`.
