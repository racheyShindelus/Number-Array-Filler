# Number Array Filler

This C program fills an array with specific sequences of numbers according to predefined rules.

## How it Works

1. The program defines a global array `totAr` with a size of 39 elements.
2. It defines four functions `num09()`, `num1019()`, `num2025()`, and `num2639()` to fill specific sections of the `totAr` array.
3. `num09()` fills elements 0-9 with values from 0 to 9.
4. `num1019()` fills elements 10-19 with values from 100 to 190 with a step of 10.
5. `num2025()` fills elements 20-25 with specific values: 4, 8, 15, 16, 23, and 42.
6. `num2639()` fills elements 26-39 with values generated using the Collatz sequence starting from 7.
7. The `main()` function calls these four functions to fill the `totAr` array according to the defined rules.
8. Finally, it prints the contents of the `totAr` array.

## Instructions

1. **Compile**: Compile the program using a C compiler. For example, using GCC:
    ```bash
    gcc number_array_filler.c -o number_array_filler
    ```

2. **Execute**: Run the compiled program:
    ```bash
    ./number_array_filler
    ```

## Example

0 1 2 3 4 5 6 7 8 9 100 110 120 130 140 150 160 170 180 190 4 8 15 16 23 42 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1


## Notes

- The program demonstrates the use of functions, loops, and arrays to fill an array with specific sequences of numbers.
