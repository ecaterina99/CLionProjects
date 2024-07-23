#include <stdio.h>

/**
 * Ask user his name, display message "Hello, %his_name%"
 *
 * @return
 */
int main(void) {
    char name[50];
    printf("what's your name? ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    return 0;
}
