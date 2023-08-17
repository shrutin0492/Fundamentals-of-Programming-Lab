//1. Swap two nos.
#include <stdio.h>

void swapWithoutTemp(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapWithTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping without temporary variable
    swapWithoutTemp(&num1, &num2);
    printf("After swapping without temporary variable: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping back to original values
    swapWithoutTemp(&num1, &num2);

    // Swapping with temporary variable
    swapWithTemp(&num1, &num2);
    printf("After swapping with temporary variable: num1 = %d, num2 = %d\n", num1, num2);

}
