#include <stdio.h>

/**
 * Reverse an array and display the numbers in reverse order.
 * @return
 */
int main(void) {
    int length = 5;
    int arr[length];
    int reversed[length];

    // Ask the user to enter 5 elements
    printf("Please enter 5 numbers: \n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array and display the reversed array
    printf("Array numbers in reverse order: \n");
    int temp = 0;
    for (int i = 0; i < length; i++) {
        temp = arr[length - i - 1];
        reversed[i] = temp;
        printf("%d ", reversed[i]);
    }
}
