#include <stdio.h>

/**
 * Ask the user to enter 5 positive numbers.
 * Display all the numbers on the screen.
 * Find all odd numbers and display their positions and values.
 * @return 
 */
int main(void) {
    int n = 5;
    int vector[n];
    int count = 0;
    int OddNumbers = 0;

    for (int i = 0; i < n; i++) {
        printf("Please insert a number to save into array \n");
        int temp = 0;
        scanf("%d", &temp);
        if (temp > 0) {
            vector[i] = temp;
            count++;
        } else {
            break;
        }
    }
    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("%d, ", vector[i]);
    }
    printf("\n");
    printf("Odd numbers: \n");
    for (int i = 0; i < count; i++) {
        if (vector[i] % 2 == !0) {
            printf("[%d]:%d \n", i, vector[i]);
            printf("\n");
        }
    }
}
