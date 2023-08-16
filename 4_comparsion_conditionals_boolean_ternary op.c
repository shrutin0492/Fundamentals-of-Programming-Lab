#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using if without else
    if (num1 > num2 && num1 > num3)
        printf("Using if (no else): %d is the largest\n", num1);
    if (num2 > num1 && num2 > num3)
        printf("Using if (no else): %d is the largest\n", num2);
    if (num3 > num1 && num3 > num2)
        printf("Using if (no else): %d is the largest\n", num3);

    // Using nested if
    if (num1 >= num2) {
        if (num1 >= num3)
            printf("Using nested if: %d is the largest\n", num1);
        else
            printf("Using nested if: %d is the largest\n", num3);
    } else {
        if (num2 >= num3)
            printf("Using nested if: %d is the largest\n", num2);
        else
            printf("Using nested if: %d is the largest\n", num3);
    }

    // Using ladder if else if
    if (num1 >= num2 && num1 >= num3)
        printf("Using ladder if else if: %d is the largest\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("Using ladder if else if: %d is the largest\n", num2);
    else
        printf("Using ladder if else if: %d is the largest\n", num3);

    // Using ternary operator
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Using ternary operator: %d is the largest\n", largest);

    return 0;
}
