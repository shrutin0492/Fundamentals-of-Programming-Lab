#include <stdio.h>

// Function to input 'n' numbers into the array
void input(int n, int a[n]) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// Function to calculate and return the sum of 'n' numbers in the array
int add(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

// Function to output the array and the sum
void output(int n, int a[n], int sum) {
    printf("Numbers entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSum of %d numbers: %d\n", n, sum);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n];
    input(n, a);

    int sum = add(n, a);

    output(n, a, sum);

    return 0;
}
