#include <stdio.h>
#include <string.h>

// Function to reverse and display a string
void reverseString(const char *str) {
    int length = strlen(str);
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to concatenate two strings without strcat
void concatenateStrings(const char *str1, const char *str2, char *result) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0';
}

// Function to find the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str1[100], str2[100];
    char concatenated[200];

    printf("Enter a string: ");
    gets(str1);

    printf("Enter another string: ");
    gets(str2);

    // a) Reverse and display a string
    printf("Original string: %s\n", str1);
    reverseString(str1);

    // b) Concatenate two strings
    concatenateStrings(str1, str2, concatenated);
    printf("Concatenated string: %s\n", concatenated);

    // c) Find the length of a string
    int length1 = stringLength(str1);
    int length2 = stringLength(str2);
    printf("Length of the first string: %d\n", length1);
    printf("Length of the second string: %d\n", length2);

    return 0;
}

