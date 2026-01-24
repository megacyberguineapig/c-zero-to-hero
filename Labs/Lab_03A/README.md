I’m learning arrays. I understand that using an array for such a minimal program is not strictly necessary, but for the sake of learning and practice, I decided to implement one. This program is also my introduction to for loops.

In this case, the array is used only to temporarily store input values before summing them. While the same result could be achieved without an array, arrays are commonly used in C when working with collections of data that need to be indexed or iterated over.
```
#include <stdio.h>

int main(void) {
    int sum = 0;
    int numbers[3];

    for (int i = 0; i < 3; i++) {
        printf("Please enter a number: ");
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input, please use an integer.\n");
            return 1;
        }
        sum += numbers[i];
    }

    printf("Your sum is %d.\n", sum);
    return 0;
}
```

- i starts at 0 and loops while i < 3, incrementing by 1 after each iteration.

- The program prompts the user for three numbers.

- If scanf does not successfully read one integer, the program exits with an error.

- Each element of the numbers array is added to sum.

- The final sum is printed.
