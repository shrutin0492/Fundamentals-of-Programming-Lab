#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = reverseNumber(num);
    return (num == reversed);
}

// Function to display the result
void displayResult(int num) {
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    displayResult(num);

    return 0;
}
