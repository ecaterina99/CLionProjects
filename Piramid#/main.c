#include<stdio.h>

/**
 * Ask the user to enter the size
 * Display a square of '#' with the height and width of the entered size.
 * @return
 */
int main(void) {
    int n;
    printf("Please insert the size: \n");
    scanf("%d", &n);
    do {
        printf("get size: \n");
    } while (n < 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
}
