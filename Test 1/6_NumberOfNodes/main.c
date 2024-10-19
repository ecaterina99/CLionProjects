#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the linked list
typedef struct node {
    int number;
    struct node *next;
} node;

/**
 * Display the linked list and count the number of nodes.
 * @return
 */
// Allocate memory for a new node
int main(int argc, char *argv[]) {
    node *list = NULL;
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }

        n->number = number;
        n->next = NULL;

        // If the list is empty, set the new node as the head
        if (list == NULL) {
            list = n;
        } else {
            // Link the new node at the end
            node *ptr = list;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
    }

    // Display the linked list and count the number of nodes
    int cnt = 0;
    node *ptr = list;
    while (ptr != NULL) {
        printf("%d -> ", ptr->number);
        ptr = ptr->next;
        cnt++;
    }

    // Print the total count
    printf("The total number of nodes is: %d\n", cnt);
    return 0;
}
