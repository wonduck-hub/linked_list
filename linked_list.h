#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct node {
    int value;
    struct node* next;
} node_t;

void print_node(node_t* head);

void destroy(node_t* head);

void insert_front(node_t** p_head, int val);

void insert_sorted( node_t** p_head, int val);

void remove_node(node_t** p_head, int val);

#endif /* LINKED_LIST */