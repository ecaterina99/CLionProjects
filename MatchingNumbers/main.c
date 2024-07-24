#include <stdio.h>

#include <stdio.h>

/**
 * Ask the user to enter 5 numbers.
 * If the first number is greater than 5, terminate the program.
 * If the first number is less than 5, ask the user to enter first number again.
 * If the first number is equal to 5, print all the numbers.
 * Ask the user to enter a matrix.
 * If all 5 numbers are in the matrix, display a message that the user has won.
 * @return
 */
int main(void) {
    int n = 5;
    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Please, enter the number: \n");
        scanf("%d", &numbers[i]);
    }

    if (numbers[0] > 5) {
        printf("Error\n");
    } else if (numbers[0] < 5) {
        printf("Please, enter first number again:\n");
        scanf("%d", &numbers[0]);
    } else {
        for (int z = 0; z < n; z++) {
            printf("%d ", numbers[z]);
        }
    }
    printf("\n");

    int h;
    int l;
    printf("Please, enter the matrix size: \n");
    printf("Please, enter h: \n");
    scanf("%d", &h);

    printf("Please, enter l: \n");
    scanf("%d", &l);

    int m[h][l];

    printf("Please, enter the numbers: \n");

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

    int numbersFound[n];
    int cnt = 0;
    for (int z = 0; z < n; z++) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {
                if (numbers[z] == m[i][j]) {
                    numbersFound[cnt] = m[i][j];
                    cnt++;
                }
            }
        }
    }
    if (cnt == 5) {
        printf("You Won! We have found 5 numbers! \n");
    }
}
