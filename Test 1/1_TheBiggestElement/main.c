#include <stdio.h>


/**
 * Display the biggest element entered by the user in an array.
 * @return
 */
int main(void) {
    int length = 5;
    int arr[length];

    // Ask the user to enter 5 elements
    printf("Please enter 5 elements: \n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the entered elements
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Initialize max with the first element of the array
    int maxNumber = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }

    // Display the biggest element
    printf("The biggest element entered by the user is: %d", maxNumber);
    return 0;
}
