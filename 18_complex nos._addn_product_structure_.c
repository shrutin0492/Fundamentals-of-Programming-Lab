#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    double real;
    double imag;
};

// Function to input a complex number
void inputComplex(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%lf", &c->real);
    
    printf("Enter imaginary part: ");
    scanf("%lf", &c->imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// Function to display a complex number
void displayComplex(struct Complex c) {
    printf("%.2lf + %.2lfi\n", c.real, c.imag);
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    inputComplex(&num1);

    printf("Enter the second complex number:\n");
    inputComplex(&num2);

    // Perform addition and multiplication
    sum = addComplex(num1, num2);
    product = multiplyComplex(num1, num2);

    // Display results
    printf("Sum of the two complex numbers: ");
    displayComplex(sum);

    printf("Product of the two complex numbers: ");
    displayComplex(product);

    return 0;
}
