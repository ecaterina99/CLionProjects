#include <stdio.h>

int main(void) {
    int h;
    int l;

    printf("Please enter the matrix size: \n");
    printf("Please enter h: \n");
    scanf("%d", &h);

    printf("Please enter l: \n");
    scanf("%d", &l);

    int m[h][l];
    printf("Please enter the number: \n");

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < h; i++) {
        if (i != h-2){
            for (int j = 0; j < l ; j++) {
                if (j != l-2){
                    printf("%d ", m[i][j]);
                }
            }
            printf("\n");
        }
    }
}




// for (int i = 0; i < h-1 ; i++) {
//     for (int j = 0; j < l - 1; j++) {
//         printf("%d ", m[i][j]);
//     }
//     printf("\n");