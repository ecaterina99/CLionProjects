#include <stdio.h>

/**
 * Ask the user to enter the matrix size
 * Display the matrix
 * Find the numbers at odd positions and add 3 to each of them.
 * @return 
 */
int main(void) {
    int h;
    int l;

    printf("Please enter the matrix size: \n");
    printf("Please enter h: \n");
    scanf("%d", &h);

    printf("Please enter l: \n");
    scanf("%d", &l);

    int m[h][l];

    printf("Please enter the numbers: \n");


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
    printf("Find odd positions:\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (i % 2 != 0 || j % 2 != 0) {
                m[i][j] += 3;
                printf("[%d%d]+3 = %d\n", i, j, m[i][j]);
            }
        }
    }
}
