#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct node {
    int number;
    struct node *next;
} node;

/**
 * Display the Linked List and delete all nodes from the list
 * @return
 */
int main(void) {
    // Input the numbers for the linked list
    node *list = NULL;
    int cntNodes = 6;
    int temp = 0;
    for (int i = 0; i < cntNodes; i++) {
        printf("Please enter 6 numbers to store in the linked list: \n");
        scanf("%d", &temp);

        // Allocate memory for a new node
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        n->number = temp;
        n->next = NULL;

        // Insert the nodes in the linked list
        if (list == NULL) {
            list = n;
        } else {
            node *current = list;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = n;
        }
    }

    // Display the linked list
    node *current = list;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");

    // Delete all nodes from the linked list
    current = list;
    while (current != NULL) {
        list = current->next;
        printf("The number %d was deleted\n", current->number);
        free(current);
        current = list;
    }
    return 0;
}
