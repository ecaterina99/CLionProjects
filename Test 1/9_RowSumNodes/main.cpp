#include <stdio.h>
#include <stdlib.h>

/**
* Function to display a matrix
 */
void displayMatrix(int h, int l, int m[h][l]);

// Define the structure for a node in the linked list
typedef struct node {
    int number;
    struct node *next;
} node;

/**
 * Function to display the linked list
 */
void displayLinkedList(node *list);

/**
 * input a matrix, calculate row sums and create a linked list
 * where each node stores the sum of elements from a corresponding row of the matrix.
 */
int main(void) {
    int h;
    int l;

    // Get matrix dimensions from the user
    printf("Enter the dimensions of the matrices:\n");
    printf("Number of rows (h): ");
    scanf("%d", &h);
    printf("Number of columns (l): ");
    scanf("%d", &l);

    int m[h][l];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix:\n");
    displayMatrix(h, l, m);

    // Calculate the sum of elements in each row
    int arrRowSum[h];
    for (int i = 0; i < h; i++) {
        int rowSum = 0;
        for (int j = 0; j < l; j++) {
            rowSum = rowSum + m[i][j];
            arrRowSum[i] = rowSum;
        }
    }

    // Display the sum of each row
    printf("\nThe sum of elements in each row:\n");
    for (int i = 0; i < h; i++) {
        printf("%d ", arrRowSum[i]);
    }
    printf("\n");

    // Create a linked list where each node contains the sum of a matrix row
    node *list = NULL;

    for (int i = 0; i < h; i++) {
        node *newNode = malloc(sizeof(node));
        if (newNode == NULL) {
            return 1;
        }
        newNode->number = arrRowSum[i];
        newNode->next = NULL;

        if (list == NULL) {
            list = newNode;
        } else {
            node *current = list;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Display the linked list
    printf("A simple linked list where each node contains the sum of a row:\n");
    displayLinkedList(list);
    return 0;
}

/**
 * Function to display a matrix
 */
void displayMatrix(int h, int l, int m[h][l]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

/**
 * Function to display the linked list
 */
void displayLinkedList(node *list) {
    node *current = list;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");
}
