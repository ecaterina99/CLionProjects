#include <stdio.h>

/**
 * Find and display the number of even numbers in an array.
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

    // Display even numbers
    printf("Even numbers: \n");
    int cnt = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            cnt++;
        }
    }

    // Display the number of even numbers
    printf("\n");
    printf("The number of even numbers is: %d", cnt);
    return 0;
}
