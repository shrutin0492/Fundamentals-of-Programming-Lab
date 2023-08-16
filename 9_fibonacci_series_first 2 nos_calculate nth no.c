#include <stdio.h>

int fibonacciNth(int first, int second, int n) {
    if (n == 1) {
        return first;
    } else if (n == 2) {
        return second;
    } else {
        return fibonacciNth(first, second, n - 1) + fibonacciNth(first, second, n - 2);
    }
}

int main() {
    int first, second, n;

    printf("Enter the first two numbers in the series: ");
    scanf("%d %d", &first, &second);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n must be a positive integer.\n");
    } else if (n == 1) {
        printf("The %dth Fibonacci number is: %d\n", n, first);
    } else if (n == 2) {
        printf("The %dth Fibonacci number is: %d\n", n, second);
    } else {
        int nthFibonacci = fibonacciNth(first, second, n);
        printf("The %dth Fibonacci number is: %d\n", n, nthFibonacci);
    }

    return 0;
}
