#include <stdio.h>

/**
 * Ask the user to enter 5 positive numbers
 * Display all the numbers on the screen.
 * If a number is greater than its input position, display it on the screen.
 * @return
 */
int main(void) {
    int n = 5;
    int vector[n];
    int count = 0;

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
        printf("%d ", vector[i]);
    }
    printf("\n");

    for (int i = 0; i < count; i++) {
        if (vector[i] > i) {
            printf("[%d]>%d \n", vector[i], i);
            printf("\n");
        }
    }
}
