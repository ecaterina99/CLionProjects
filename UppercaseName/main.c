#include <stdio.h>
#include <string.h>

/**
 *Ask the user to enter the name
 *If the name contains lowercase letters, automatically convert them to uppercase letters.
 *Display the corrected name
 * @return
 */
int main(void) {
    char name[50];
    printf("Before: ");
    scanf("%s", name);
    printf("After: ");
    for (int i = 0, n = strlen(name); i < n; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            printf("%c", name[i] - 32);
        } else {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}
