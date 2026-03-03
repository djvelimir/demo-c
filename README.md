# demo-c: Leap Year Checker

A simple C project to determine whether a given year is a leap year.  
This project separates **business logic** from **user interaction**, follows good modular practices, and includes **unit tests**.

---

## Features

- Pure logic function `is_leap_year()` for easy testing and reuse
- Interactive CLI program (`main.c`) for user input/output
- Unit tests with assertions using CTest
- Compiler warnings enabled (`-Wall -Wextra -Wpedantic`)
- Modular structure: header files in `include/`, source in `src/`, tests in `tests/`

## Contributing

- Keep logic and I/O separate for testability
- Write unit tests for any new functionality
- Follow the project structure for new modules
