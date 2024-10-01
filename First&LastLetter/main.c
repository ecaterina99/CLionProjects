#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Ask the user to enter his name
 * If the first letter is the same as the last letter, display a message that the user has won.
 * @return
 */
int main(void) {
    char name[50];
    printf("Please enter your name: ");
    scanf("%s", name);
    int size = strlen(name);
    name[0] = tolower(name[0]);
    name[size - 1] = tolower(name[size - 1]);


    if (name[0] == name[size - 1]) {
        printf("you won");
    } else {
        printf("error");
    }
}
