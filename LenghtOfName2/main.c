#include <stdio.h>

/**
 * Ask the user to enter his name
 * Сount the number of letters in his name
 * Display the result
 * @return
 */
int main(void) {
    char name[50];
    int count = 0;

    printf("Name: ");
    scanf("%s", &name);
    while (name[count] != '\0') {
        count++;
    }
    printf("%d\n", count);

    return 0;
}
