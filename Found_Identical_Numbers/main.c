#include <stdio.h>

/**
 * Display the matrix
 * Ask the user to enter 3 numbers
 * If all 3 numbers are in the matrix, display a message indicating they have been found.
 * @return
 */
int main(void) {
    int h = 3;
    int l = 2;
    int m[h][l];


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

    int n = 3;
    int numbers[n];
    int numbersFound[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        printf("please enter the number: ");
        scanf("%d", &numbers[i]);
        printf("\n");
    }

    for (int y = 0; y < n; y++) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {
                if (numbers[y] == m[i][j]) {
                    numbersFound[cnt] = m[i][j];
                    cnt++;
                }
            }
        }
    }

    printf("We have found the following numbers: ");

    for (int y = 0; y < cnt; y++) {
        printf("%d ", numbersFound[y]);
    }
}
