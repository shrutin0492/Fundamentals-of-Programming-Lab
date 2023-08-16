#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNaturalNumbers(num);
        printf("Sum of first %d natural numbers is: %d\n", num, sum);
    }

    return 0;
}
