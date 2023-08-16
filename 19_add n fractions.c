#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to find the Least Common Multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to input fractions
void inputFractions(int n, int numerators[], int denominators[]) {
    printf("Enter %d fractions (numerator/denominator):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d/%d", &numerators[i], &denominators[i]);
    }
}

// Function to add fractions
void addFractions(int n, int numerators[], int denominators[], int *resultNumerator, int *resultDenominator) {
    *resultNumerator = 0;
    *resultDenominator = 1;
    
    for (int i = 0; i < n; i++) {
        *resultDenominator = lcm(*resultDenominator, denominators[i]);
    }
    
    for (int i = 0; i < n; i++) {
        *resultNumerator += (numerators[i] * (*resultDenominator) / denominators[i]);
    }
    
    int commonGCD = gcd(*resultNumerator, *resultDenominator);
    *resultNumerator /= commonGCD;
    *resultDenominator /= commonGCD;
}

// Function to display fractions
void displayFraction(int numerator, int denominator) {
    printf("%d/%d\n", numerator, denominator);
}

int main() {
    int n;

    printf("Enter the number of fractions: ");
    scanf("%d", &n);

    int numerators[n];
    int denominators[n];

    inputFractions(n, numerators, denominators);

    int resultNumerator, resultDenominator;

    addFractions(n, numerators, denominators, &resultNumerator, &resultDenominator);

    printf("Sum of %d fractions: ", n);
    displayFraction(resultNumerator, resultDenominator);

    return 0;
}
