#include <stdio.h>

int main() {
    char vehicleType;
    int duration;
    double totalCharges;

    printf("Enter vehicle type (c/C for car, b/B for bus, t/T for tempo): ");
    scanf(" %c", &vehicleType);

    printf("Enter duration of parking in hours: ");
    scanf("%d", &duration);

    // Calculate parking charges based on vehicle type and duration
    switch (vehicleType) {
        case 'c':
        case 'C':
            if (duration <= 2)
                totalCharges = duration * 20;
            else
                totalCharges = (2 * 20) + ((duration - 2) * 30);
            break;
        
        case 'b':
        case 'B':
            if (duration <= 2)
                totalCharges = duration * 40;
            else
                totalCharges = (2 * 40) + ((duration - 2) * 50);
            break;
        
        case 't':
        case 'T':
            if (duration <= 2)
                totalCharges = duration * 30;
            else
                totalCharges = (2 * 30) + ((duration - 2) * 40);
            break;
        
        default:
            printf("Invalid vehicle type\n");
            return 1;
    }

    printf("Total parking charges: Rs %.2lf\n", totalCharges);

    return 0;
}


 
