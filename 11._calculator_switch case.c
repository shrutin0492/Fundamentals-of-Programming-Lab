#include <stdio.h>

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

// Function to perform modulus
double modulus(double a, double b) {
    if (b != 0) {
        return (int)a % (int)b;
    } else {
        printf("Error: Modulus by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, divide(num1, num2));
            break;
        case '%':
            printf("%.2lf %% %.2lf = %.2lf\n", num1, num2, modulus(num1, num2));
            break;
        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}
