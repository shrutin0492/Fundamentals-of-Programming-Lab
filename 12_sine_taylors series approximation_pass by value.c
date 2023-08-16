#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the power of x raised to n
double power(double x, int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

// Function to calculate the sine using Taylor's series
double sine(double x, int terms) {
    double result = 0.0;
    int sign = 1;
    for (int i = 0; i < terms; i++) {
        int exponent = 2 * i + 1;
        double term = (double)sign * power(x, exponent) / factorial(exponent);
        result += term;
        sign *= -1;
    }
    return result;
}

int main() {
    double angle;
    int terms;

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    double result = sine(angle, terms);

    printf("sin(%.2lf) using Taylor's series with %d terms: %.4lf\n", angle, terms, result);

    return 0;
}
