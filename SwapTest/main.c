#include <stdio.h>

/**
 * Print the value of 'a' and the value of 'b'. Then, swap 'a' and 'b'.
 */
void swap(int *a, int *b);

int main(void) {
    int x = 5;
    int y = 10;
    printf("x=%d, y=%d", x, y);
    printf("\n");
    swap(&x, &y);
    printf("x=%d, y=%d", x, y);
    return 0;
}

void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
