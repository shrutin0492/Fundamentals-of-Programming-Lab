#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

int main() {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
