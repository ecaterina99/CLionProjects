#include <stdio.h>

/**
 * Read an integer from the keyboard and display word "meow"
 * times the inserted number
 *
 * @return
 */
int main(void) {
    int n;
    printf("Please insert a number of meow \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("meow \n");
    }
}
