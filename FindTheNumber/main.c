#include <stdio.h>

/**
 * Ask the user to enter the number
 * If the number is in the array, display a message that it's found
 * If the number isn't in the array, display a message that it's not found
 * display the message 'finish'
 * @return 
 */
int main(void) {
    int numbers[] = {4, 5, 6, 50, 40, 20, 100};
    int n;
    int found = 0;
    printf("Get number: ");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++) {
        if (numbers[i] == n) {
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("not found\n");
    } else {
        printf("found\n");
    }
    printf("Finish\n");
}
