#include <stdio.h>

/**
*Ask the user to input the matrix size.
*Display the matrix.
*Display the sum of all the elements in the matrix.
*Display the sum of the primary diagonal elements of the matrix.
*Display the product of the secondary diagonal elements of the matrix.
*Display the sum of the elements in each row of the matrix.
*Display the sum of the elements in each column of the matrix.
*Display the transpose of the matrix.
 * @return
 */
int main(void) {
    int h;
    int l;

    // The matrix size

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

    // The sum of all the elements in the matrix.
    int sum = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            sum = sum + m[i][j];
        }
    }
    printf("The sum of all the elements in the matrix: %d ", sum);
    printf("\n");

    // The the sum of the primary diagonal elements of the matrix.

    int cnt = 0;
    int n = 50;
    int diagonal[n];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (i == j) {
                diagonal[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    int sumDiagonalNumbers = 0;
    printf("The primary diagonal elements of the matrix: \n");
    for (int z = 0; z < cnt; z++) {
        printf("%d ", diagonal[z]);
        sumDiagonalNumbers = sumDiagonalNumbers + diagonal[z];
    }
    printf("\n");
    printf("The sum of the primary diagonal elements of the matrix: %d ", sumDiagonalNumbers);
    printf("\n");

    // The product of the secondary diagonal elements of the matrix.

    cnt = 0;
    int q = 50;
    int SecondaryDiagonal[q];
    int product = 0;
    for (int i = 0; i < h; i++) {
        SecondaryDiagonal[cnt] = m[i][l - 1 - i];
        cnt++;
    }

    printf("The secondary diagonal elements of the matrix. \n");
    for (int i = 0; i < cnt; i++) {
        printf("%d ", SecondaryDiagonal[i]);
    }
    printf("\n");

    product = m[0][l - 1];
    for (int i = 1; i < cnt; i++) {
        product = product * m[i][l - 1 - i];
    }
    printf("The product of the secondary diagonal elements of the matrix: %d ", product);

    //The sum of the elements in each row of the matrix.

    int sumRowNumbersArray[h];

    for (int i = 0; i < h; i++) {
        int rowSum = 0;
        for (int j = 0; j < l; j++) {
            rowSum = rowSum + m[i][j];
            sumRowNumbersArray[i] = rowSum;
        }
        printf("\n");
    }
    printf("The sum of the elements in each row of the matrix: \n");
    for (int i = 0; i < h; i++) {
        printf("%d \n", sumRowNumbersArray[i]);
    }

    // The sum of the elements in each column of the matrix
    int sumColumnNumbersArray[l];
    for (int j = 0; j < l; j++) {
        int columnSum = 0;
        for (int i = 0; i < h; i++) {
            columnSum = columnSum + m[i][j];
            sumColumnNumbersArray[j] = columnSum;
        }
    }
    printf("The sum of the elements in each column of the matrix \n");
    for (int i = 0; i < h; i++) {
        printf("%d \n", sumColumnNumbersArray[i]);
    }

    // The transpose of the matrix
    printf("\n");
    printf("The transpose of the matrix: \n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < h; j++) {
            printf("%d ", m[j][i]);
        }
        printf("\n");
    }
}
