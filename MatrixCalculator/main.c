#include <stdio.h>

/**
 * Ask the user to enter a matrix
 * Display only the odd numbers in the matrix.
 * Display the sum o the odd numbers.
 * Display the diagonal numbers of the matrix.
 * Display the largest number from the numbers upper than diagonal.
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

    printf("Odd numbers:\n");

    int sum = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (m[i][j] % 2 == 0) {
                printf("%d ", m[i][j]);
                sum = sum + m[i][j];
            }
        }
    }
    printf("The sum of odd numbers is: %d ", sum);
    printf("\n");

    int n = 50;
    int diagonal[n];
    int cnt = 0;


    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (i == j) {
                diagonal[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    printf("Diagonal numbers: \n");
    for (int z = 0; z < cnt; z++) {
        printf("%d ", diagonal[z]);
    }


    int highDiagonal[n];
    cnt = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (i < j) {
                highDiagonal[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    printf("\n");
    printf("High Diagonal numbers: \n");
    for (int z = 0; z < cnt; z++) {
        printf("%d ", highDiagonal[z]);
    }
    printf("\n");

    int max = highDiagonal[0];

    for (int i = 1; i < cnt; i++) {
        if (highDiagonal[i] > max) {
            max = highDiagonal[i];
        }
    }
    printf("The bigger number is: %d\n", max);
}
