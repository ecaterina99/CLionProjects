#include <stdio.h>

int main(void) {
    int a = 5;
    int *ptr = NULL;
    printf("a=%d\n", a);
    ptr = &a;
    printf("*ptr=%d\n", *ptr);
    if (ptr != NULL) {
        *ptr = 1;
    }
    printf("a=%d\n", a);
    return 0;
}
