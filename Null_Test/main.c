#include <stdio.h>

int main(void) {
    int a = 5;
    int *ptr = NULL;

    ptr = &a;

    if (ptr != NULL) {
        *ptr = 1;
    }
    return 0;
}
