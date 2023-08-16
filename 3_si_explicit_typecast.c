#include <stdio.h>

int main() {
    int p, t, r;
    float si;

    // Input principal amount, time, and rate
    printf("Enter principal amount (integer): ");
    scanf("%d", &p);

    printf("Enter time (integer): ");
    scanf("%d", &t);

    printf("Enter rate (integer): ");
    scanf("%d", &r);

    // Calculate simple interest (explicit typecasting to float)
    si = (float)(p * t * r) / 100;

    printf("Simple Interest: %.2f\n", si);

    return 0;
}
