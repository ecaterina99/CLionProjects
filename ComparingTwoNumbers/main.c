#include <stdio.h>

/**
 * Ask the user to enter 2 numbers
 * Compare this numbers and display the result on the screen
 * @return 
 */
int main(void) {
    int x;
    printf("what's x? \n");
    scanf("%d", &x);
    int y;
    printf("what's y? \n");
    scanf("%d", &y);
    if (x < y) {
        printf("x is less than y  \n");
    } else if (x > y) {
        printf("x is greater than y  \n");
    } else {
        printf("x is equal to y  \n");
    }
}