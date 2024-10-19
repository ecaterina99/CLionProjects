#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int number;
    struct node *next;
} node;

/**
* Function to display the Linked List.
 */
void displayLinkedList(node *list);

/**
 * Insert a new node in the linked list after a specified node.
 */
int main(void) {
    node *list = NULL;
    int cntNodes = 6;
    int temp = 0;

    // Input the numbers for the linked list
    printf("Please enter 6 numbers to store in the linked list: \n");
    for (int i = 0; i < cntNodes; i++) {
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
            node *ptr = list;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
    }

    // Display the linked list
    printf("Original Linked List: ");
    displayLinkedList(list);

    // Create a new node to insert
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL) {
        return 1;
    }
    newNode->number = 4;
    newNode->next = NULL;

    // Insert the new node after the node with the value 6
    node *tmp = NULL;
    bool found = false;
    node *ptr = list;
    while (!found) {
        if (ptr->number == 6) {
            tmp = ptr->next;
            ptr->next = newNode;
            newNode->next = tmp;
            found = true;
        }
        ptr = ptr->next;
    }

    // Display the updated linked list
    printf("Updated Linked List: ");
    displayLinkedList(list);

    return 0;
}

/**
* Function to display the Linked List.
 */
void displayLinkedList(node *list) {
    node *ptr = list;
    while (ptr != NULL) {
        printf("%d -> ", ptr->number);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
