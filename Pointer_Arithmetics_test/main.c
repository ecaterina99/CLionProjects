#include <stdio.h>

int main(void) {
    short array[10];
    short *ptr = array;
    short *p = &array[3];

    printf("prt=%u; p=%u\n", ptr, p);
    int res = p - ptr;
    printf("res=%d\n", res);

    int g = 476789;
    char *ptr2 = (char *) &g;
    int x = *ptr2 + 1;
    printf("*ptr2=%d; x=%d; g=%d\n", *ptr2, x, g);
    return 0;
}
