#include <stdio.h>

/**
 * Ask the user to enter 5 numbers.
 * Save only the numbers that are greater than 7.
 * Ask the user to enter a matrix with height and length equal to the number of valid numbers entered.
 * Display the matrix.
 * Display the matrix again, this time with the rows in reverse order.
 * Display the matrix again, this time with zeros on the diagonal.
 * @return
 */
int main(void) {
    int n = 5;
    int numbers[n];
    int temp = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        printf("Please enter the number: \n");
        scanf("%d", &temp);
        if (temp > 7) {
            numbers[cnt] = temp;
            cnt++;
        }
    }
    printf("We have found the numbers: ");

    for (int z = 0; z < cnt; z++) {
        printf("%d ", numbers[z]);
    }
    printf("\n");

    int h = cnt;
    int l = cnt;
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
    printf("\n");

    for (int i = 0; i < h; i++) {
        for (int j = l - 1; j >= 0; j--) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (i == j) {
                printf("0 ");
            } else {
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }
}
