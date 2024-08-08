#include <stdio.h>
#include<stdlib.h>

int main(void) {
    int *a;
    int lenght = 0;
    printf("enter 'a' lenght: ");
    scanf("%d", &lenght);

    a = malloc(lenght * sizeof(int));
    printf("a: %p\n", a);
    for (int i = 0; i < lenght; i++) {
        a[i] = i;
    }
    for (int i = 0; i < lenght; i++) {
        printf("a[%d]=%d \n", i, a[i]);
    }
    free(a);

    return 0;
}
