/*
 * Lab 3, Task 2
 * Aysel Abiyeva, 231ADB279
 *
 * Practice using pointers as function parameters.
 * Implement:
 *   - swap (exchange values of two ints)
 *   - modify_value (multiply given int by 2)
 *
 * Rules:
 *   - Use pointers to modify variables in the caller.
 *   - Demonstrate changes in main.
 *
 * Example:
 *   int a = 5, b = 10;
 *   swap(&a, &b);   // now a = 10, b = 5
 *
 *   modify_value(&a); // now a = 20
 */

#include <stdio.h>

void swap(int *x, int *y);
void modify_value(int *x);

int main(void) {
    int a = 3, b = 7;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    modify_value(&a);
    printf("After modify_value: a=%d\n", a);

    return 0;
}

void swap(int *x, int *y) {
    int t_value = *x;
    *x = *y;
    *y = t_value;
}

void modify_value(int *x) {
    *x = *x * 2;
}
