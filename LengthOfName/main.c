#include <string.h>

/**
 * Ask the user to enter his name
 * Сount the number of letters in his name
 * Display the result
 * @return 
 */
int main(void) {
    char name[50];
    printf("Inter your name: \n");

    scanf("%s", name);

    int lenght = strlen(name);
    printf("%d\n", lenght);
    return 0;
}
