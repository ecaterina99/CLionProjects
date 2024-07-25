#include <stdio.h>

/**
 * Ask the user to enter 2 numbers
 * Сalculate the sum of numbers and display it on the screen
 * @return
 */
int main(void) {
    int add(int a, int b);
        int x;
        printf("what's x ? \n");
        scanf("%d", &x);

        int y;
        printf("what's y ? \n");
        scanf("%d", &y);

        printf("x + y = %d", add(x,y));
        return 0;
    }
    int add(int a, int b) {
        return a + b;
    }

