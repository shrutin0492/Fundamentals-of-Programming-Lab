#include <stdio.h>

// Function to perform Binary Search on a sorted array
int binarySearch(const int arr[], const int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Item found at index 'mid'
        } else if (arr[mid] < target) {
            left = mid + 1; // Item must be in the right half
        } else {
            right = mid - 1; // Item must be in the left half
        }
    }

    return -1; // Item not found
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the item to search: ");
    scanf("%d", &target);

    // Perform Binary Search
    int index = binarySearch(arr, size, target);

    if (index != -1) {
        printf("Item %d found at index %d.\n", target, index);
    } else {
        printf("Item %d not found in the array.\n", target);
    }

    return 0;
}
