/**
 * Read a specified number of integers entered by the user from the keyboard.
 * Sort these numbers in descending order.
 * Display the sorted numbers on the screen.
 */


#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct node {
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[]) {
    //memory for numbers
    node *list = NULL;
    //for each command line argument
    for (int i = 1; i < argc; i++) {
        //convert argument to int
        int number = atoi(argv[i]);
        //allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }

        n->number = number;
        n->next = NULL;

        //if list is empty
        if (list == NULL) {
            list = n;
            printf("List has been null when number was: %d \n", number);
        }

        //if numbers belong at beggining of list
        else if (n->number > list->number) {
            n->next = list;
            list = n;
            printf("number %d belongs to beggining of list \n", number);
            printf("Intermediate list: \n");
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                printf("%d -> ", ptr->number);
            }
            printf("NULL\n");
        }
        //if numbers belong later in list
        else {
            //iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                //printf("%d ", ptr->number);
                //if at end of list
                if (ptr->next == NULL) {
                    //append node
                    ptr->next = n;
                    printf("Appended number %d at the end of the list\n", number);
                    printf("Intermediate list: \n");
                    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                        printf("%d -> ", ptr->number);
                    }
                    printf("NULL\n");

                    break;
                }
                //if in middle of list
                if (n->number > ptr->next->number) {
                    n->next = ptr->next;
                    ptr->next = n;
                    printf("Inserted number %d in the middle of the list\n", number);
                    printf("Intermediate list: \n");
                    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
                        printf("%d -> ", ptr->number);
                    }
                    printf("NULL\n");

                    break;
                }
            }
            printf("\n ");
        }
    }

    // Print the final list
    printf("Final list: ");
    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf("%d -> ", ptr->number);
    }
    printf("NULL\n");
}
