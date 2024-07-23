#include <stdio.h>

/**
 * Ask users if he agrees, if the answer is 'y', print 'agreed'
 * if the answer is 'n' print 'not agreed'
 * in other cases print 'error'
 * The app should work with both upper and lower case letters
 *
 * @return
 */
int main(void) {
    char q;
    printf("Do you agree? \n");
    scanf(" %c", &q);
    if (q == 'Y' || q == 'y') {
        printf("agreed \n");
    } else if (q == 'N' || q == 'n') {
        printf("not agreed \n");
    } else {
        printf("error \n");
    }
}
