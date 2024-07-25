#include <stdio.h>

/**
 * Ask the user to enter 5 positive numbers.
 * If any of the numbers is '5' or '7', display a message that the number was entered.
 * Find and display all odd numbers.
 * Find and display all even numbers.
 * If the first entered number is '8', display all the numbers in reverse order.
 * @return 
 */
int main(void) {
    int vectorSize = 5;
    int vector[vectorSize];
    int cnt = 0;

    for (cnt = 0; cnt < vectorSize; cnt++) {
        printf("Please insert a number to save into array \n");
        int temp;
        scanf("%d", &temp);
        if (temp > 0) {
            vector[cnt] = temp;
            if (temp == 5) {
                printf("Number 5 was entered \n");
            }
            if (temp == 7) {
                printf("Number 7 was entered\n");
            }
        } else {
            break;
        }
    }
    //Odd numbers
    printf("Odd numbers: \n");
    for (int z = 0; z < cnt; z++) {
        if (vector[z] % 2 == 0) {
            printf("%d -> [%d] \n", z, vector[z]);
        }
    }
    //Even numbers
    printf("Even numbers: \n");
    for (int z = 0; z < cnt; z++) {
        if (vector[z] % 2 == !0) {
            printf("%d -> [%d] \n", z, vector[z]);
        }
    }
    printf("\n");

    //reverse order of numbers
    if (vector[0] == 8) {
        for (int z = cnt - 1; z >= 0; z--) {
            printf("%d -> [%d] \n", z, vector[z]);
        }
    }
}
