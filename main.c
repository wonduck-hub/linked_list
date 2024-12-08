#include <stdio.h>

#include "linked_list.h"

int main(void) {
    node_t* head = NULL;

    printf("==start==\n");
    insert_front(&head, 1);
    insert_front(&head, 2);
    insert_front(&head, 3);
    insert_front(&head, 4);
    insert_front(&head, 5);
    print_node(head);

    printf("==remove==\n");
    remove_node(&head, 1);
    print_node(head);
    printf("==remove==\n");
    remove_node(&head, 3);
    print_node(head);
    printf("==remove==\n");
    remove_node(&head, 5);
    print_node(head);

    printf("==init==\n");
    destroy(head);
    head = NULL;
    print_node(head);

    printf("==start==\n");
    insert_sorted(&head, 5);
    insert_sorted(&head, 4);
    insert_sorted(&head, 3);
    insert_sorted(&head, 2);
    insert_sorted(&head, 1);
    print_node(head);

    destroy(head);
    head = NULL;

    return 0;
}