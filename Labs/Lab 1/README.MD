# Lab 1 – Fahrenheit to Celsius Converter

## Overview
This is my first attempt at writing a C program that asks the user for input (Fahrenheit) and converts it to Celsius.  

Formula used:  C = (F - 32.0) * 5.0 / 9.0

## Initial Errors
In my first attempt, I made two mistakes:
1. Forgot a semicolon after the `scanf` statement.
2. Misused `printf` by passing a variable directly instead of a format string.

## Compiler Output
Here are the error messages I received during compilation:
/home/vulnboxuser/labs/programming/C-zero-to-hero/Labs/Lab 1/lab1.c: In function ‘main’:
lab1.c:6:24: error: expected ‘;’ before ‘celsius’
6 | scanf("%lf", &fahr)
| ^
| ;
7 | celsius = (fahr - 32.0) * 5.0 / 9.0;
| ~~~~~~~
lab1.c:8:12: error: incompatible type for argument 1 of ‘printf’
8 | printf(celsius);
| ^~~~~~~
| double


Explanation:
- The compiler expected a `;` to end the statement after `scanf`.
- `printf` requires a format string (e.g., `"%f"`), not a raw `double`.



Corrected version of the program:

#include <stdio.h>

int main(void) {
    double fahr, celsius;

    printf("Please input a number in Fahrenheit: ");
    scanf("%lf", &fahr);

    celsius = (fahr - 32.0) * 5.0 / 9.0;

    printf("%.2f °F = %.2f °C\n", fahr, celsius);

    return 0;
}

Lessons Learned

Every C statement must end with a semicolon (;).

printf always needs a format string first, followed by the variables to print.

Reading compiler error messages carefully helps point to the exact line and reason.

I used Python syntax instead of the proper format string in C.
