#include <stdio.h>

int main(void) {
    char d = 10;
    char *gbt = &d;
    printf("gbt=%p, *gpt=%d, d=%d", gbt, *gbt, d);
    printf("\n");
    *gbt = 100;
    printf("gbt=%p, *gpt=%d, d=%d", gbt, *gbt, d);
    return 0;
}
